/*
 Остапенко Д.В. NIKTES 2019-Apr-30
Отрисовка графика этапов метода
*/

#include "zrmstageseditor.h"
#include <QtCharts/qchartview.h>

void ZrmStagesEditor::init_chart()
{
    m_chart = new QtCharts::QChart();
    m_chart->setFont(font());
    chart_view->setChart(m_chart);

    chart_view->setRenderHint(QPainter::Antialiasing);
    //chart->legend()->hide();

    m_u_series  = new QtCharts::QLineSeries(m_chart);
    m_u_series->setColor(Qt::darkBlue);
    m_u_series->setName(tr("Напряжение"));


    m_i_series  = new QtCharts::QLineSeries(m_chart);
    m_i_series->setColor(Qt::darkGreen);
    m_i_series->setName(tr("Ток"));

    m_chart->addSeries(m_u_series);
    m_chart->addSeries(m_i_series);
    m_chart->createDefaultAxes();

    auto legend = m_chart->legend();
    legend->detachFromChart();
    legend->setAlignment(Qt::AlignTop);
    legend->setBackgroundVisible(true);
    legend->setBrush(QBrush(QColor(128, 128, 128, 128)));
    legend->setPen(QPen(QColor(192, 192, 192, 192)));
    QFont font = legend->font();
    font.setPointSizeF(10.0);
    legend->setFont(font);
    legend->setSizePolicy(QSizePolicy::Maximum,QSizePolicy::Maximum);
    update_chart_legend_position();
}


void ZrmStagesEditor::update_chart_legend_position()
{
  if(m_chart)
  {
   QtCharts::QLegend * legend = m_chart->legend();
   QRectF r = chart_view->geometry();
   QSizeF legend_size = legend->size();
   legend_size = legend_size.expandedTo(QSizeF(300,50));
   QPointF tl(r.width() - 320, 20);
   QRectF lr(tl,QSizeF(300,50));
   legend->setGeometry(lr);
   legend->update();
  }
}



using  ui_pair = std::tuple<qreal, qreal>;

ui_pair get_stage_ui(const zrm::method_t & met, const zrm::stage_t & st , bool charge )
{
  qreal U = .0;
  qreal I = .0;
  if(charge)
  {
    U = st.charge_volt(met);
    I = st.charge_curr(met);
  }
  else
  {
      U =  st.discharge_volt(met);
      I = -st.discharge_curr(met);
  }

  if(st.m_finish_flags & zrm::stage_end_voltage   ) U = std::min(U, st.end_volt(met));
  if(st.m_finish_flags & zrm::stage_end_current   ) I = std::max(I, st.end_curr(met));

  return std::make_tuple(U , I);
}



void ZrmStagesEditor::fill_series()
{
  if(!m_chart) init_chart();

  m_u_series->clear();
  m_i_series->clear();
  using  chart_data_t = std::vector<ui_pair > ;
  chart_data_t chart_data;

  for(zrm::stages_t::value_type & st : m_current_method.m_stages)
  {
    ui_pair v1, v2;

    switch(st.m_type)
    {
     case zrm::STT_CHARGE    : v1 = get_stage_ui(m_current_method.m_method, st, true);
                               v2 = get_stage_ui(m_current_method.m_method, st, true);
                          break;
     case zrm::STT_DISCHARGE : v1 = get_stage_ui(m_current_method.m_method, st, false);
                               v2 = get_stage_ui(m_current_method.m_method, st, false);
                          break;
     case zrm::STT_IMPULSE   :
      {
        v1 =  get_stage_ui(m_current_method.m_method, st, true );
        v2 =  get_stage_ui (m_current_method.m_method, st, false);
        chart_data.push_back(v1);
        chart_data.push_back(v2);
      }
      break;
      default : v1 = v2 = std::make_tuple(0,0);
      break;

    }

    chart_data.push_back(v1);
    chart_data.push_back(v2);

   }

  qreal minY = 0, maxY = 0, U = 0, I = 0;
  qreal time = 0;

  for(auto tp : chart_data)
  {
    U = std::get<0>(tp);
    I = std::get<1>(tp);

    m_u_series->append(time,U);
    m_i_series->append(time,I);
    time+=1.0;

    m_u_series->append(time,U);
    m_i_series->append(time,I);

    minY = std::min(minY, std::min(U,I));
    maxY = std::max(maxY, std::max(U,I));
  }

  m_u_series->append(time,U);
  m_i_series->append(time,I);

   auto axes =  m_chart->axes();
   axes[0]->setRange(0, time);
   axes[1]->setRange(minY-1, maxY+1);
  m_chart->update();
}
