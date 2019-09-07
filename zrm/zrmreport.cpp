#include "zrmreport.h"
#include <qdatetime.h>
#include <qfiledialog.h>
#include <qstandardpaths.h>
#include <QtPrintSupport/qprinter.h>




ZrmReport::ZrmReport(QWidget *parent) :
    ZrmChannelWidget(parent)
{
    setupUi(this);
    connect(tbSaveHtml        , &QAbstractButton::clicked      , this, &ZrmReport::save_report      );
    connect(tbSavePdf         , &QAbstractButton::clicked      , this, &ZrmReport::save_report      );
    connect(tbSaveSql         , &QAbstractButton::clicked      , this, &ZrmReport::save_report_sql  );
    connect(cb_report_details , &QAbstractButton::clicked      , this, &ZrmReport::gen_result_report);
    connect(ed_report_maker   , &QComboBox::currentTextChanged , this, &ZrmReport::gen_result_report);
    connect(ed_akb_type       , QOverload<int>::of(&QComboBox::currentIndexChanged), this, &ZrmReport::akb_type_changed     );
    connect(ed_akb_number     , &QComboBox::currentTextChanged , this, &ZrmReport::gen_result_report);

}



QString ZrmReport::make_report(const QString & a_maker_name, const QString & a_akb_type, const QString & a_akb_number
                                      , bool details, const zrm::method_exec_results_t & results)
{
    QString result;
    int32_t total_duration    = 0;
    qreal   total_capacity    = 0;
    qreal   total_energy      = 0;

    QStringList  main_text ;
    QString      doc_title  = tr("Отчет об обслуживании АКБ от %1").arg(QDateTime::currentDateTime().toString("dd-MM-yyyy"));
    QString      maker_name = a_maker_name.isEmpty() ? tr("__________________________________") : a_maker_name;
    QString      akb_type   = a_akb_type.isEmpty  () ? tr("________________") : a_akb_type;
    QString      akb_number = a_akb_number.isEmpty() ? tr("________________") : a_akb_number;

    QStringList  details_table;
    details_table += QString("<table width=600 border=1><caption><h3>%1</h3></caption> ").arg(tr("Результаты этапов"));
    details_table +=
            QString("<tr align=center><td>%1</td> <td>%2</td> <td>%3</td> <td>%4</td> <td>%5</td> <td>%6</td> <td>%7</td></tr> ")
            .arg(tr("Этап" )).arg(tr("I нач")).arg(tr("I кон")).arg(tr("U нач")).arg(tr("U кон")).arg(tr("Ёмкость")).arg(tr("Время"));


    QString detail_row = tr("<tr align=center><td>%1</td> <td>%2 A</td> <td>%3 А</td>  <td>%4 В</td> <td>%5 В</td> <td>%6 А*Ч</td><td>%7</td></tr>");
    for(auto res : results)
    {
        qreal CAP  = qreal(res.capcacity )/1000.0;
        total_duration += uint32_t(res.duration[0])*3600 + uint32_t(res.duration[1])*60 + uint32_t(res.duration[2]);
        total_energy   += CAP;
        if(res.state & zrm::STFL_CAPACITY_MEASHURE)
           total_capacity = qMax(total_capacity,fabs(CAP));

        if(details)
        {
            qreal Ibeg = qreal(res.curr_begin)/1000.0;
            qreal Iend = qreal(res.curr_end  )/1000.0;
            qreal Ubeg = qreal(res.volt_begin)/1000.0;
            qreal Uend = qreal(res.volt_end  )/1000.0;

            details_table += detail_row.arg(uint32_t(res.stage)).arg(Ibeg,0,'f',2).arg(Iend,0,'f',2)
                                       .arg(Ubeg,0,'f',2).arg(Uend,0,'f',2).arg(CAP,0,'f',2)
                                       .arg(tr("%1:%2:%3").arg(res.duration[0],2,10,QLatin1Char('0'))
                                                          .arg(res.duration[1],2,10,QLatin1Char('0'))
                                                          .arg(res.duration[2],2,10,QLatin1Char('0'))
                                           );
        }
    }

    details_table+= tr("</table>\n");

    main_text += tr(R"(<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN"" http://www.w3.org">)");
    main_text += tr("<html><head>");
    main_text += tr(R"(<meta http-equiv="Content-Type" content="text/html; charset=utf-8">)");
    main_text += tr("<title>%1</title></head><body><header><h2>%1</h2></header>").arg(doc_title);
    main_text += tr("<table cellpadding=\"8\">");
    main_text += tr("<tr><td>Тип АКБ</td> <td>%1 № %2</td></tr>").arg(akb_type).arg(akb_number);
    main_text += tr("<tr><td>Ответственный</td> <td>%1</td></tr>").arg(maker_name);

    if(!qFuzzyIsNull(total_capacity))
        main_text += tr("<tr><td>Ёмкость АКБ</td> <td>%1 А*Ч</td></tr>").arg(total_capacity,0,'f',2);

    main_text += tr("<tr><td>%1</td> <td>%2 А*Ч</td></tr>").arg(total_energy<0 ? tr("Из АКБ потреблено") : tr("в АКБ передано"))
                                                           .arg(fabs(total_energy),0, 'f' ,2);

    auto hms = zrm::method_t::secunds2hms(uint32_t(total_duration));
    main_text += tr("<tr><td>Время выполнения</td> <td>%1:%2:%3</td></tr>")
                   .arg(std::get<0>(hms),2,10,QChar('0'))
                   .arg(std::get<1>(hms),2,10,QChar('0'))
                   .arg(std::get<2>(hms),2,10,QChar('0'));

    main_text += tr("</table>");

    if(details)
       main_text.append(details_table);
   main_text += tr("</body></html>");
   result = main_text.join(QChar('\n'));
   return result;
}

void ZrmReport::save_report_html(const QString & file_name)
{
    QFile file(file_name);
    if(result_text && file.open(QFile::WriteOnly|QFile::Truncate))
    {
       file.write(result_text->toHtml().toUtf8());
    }

}

void ZrmReport::save_report_pdf (const QString & file_name)
{
    QPrinter printer(QPrinter::ScreenResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOrientation(QPrinter::Orientation::Landscape);
    printer.setOutputFileName(file_name);
    result_text->print(&printer);
}

void ZrmReport::save_report()
{
    QString doc_dir  ;
    QString file_name;
    doc_dir   = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation);
    bool fmt_html = sender() == tbSaveHtml;
    QString filter = fmt_html ? tr("HTML (*.html *.htm)") : tr("PDF (*.pdf)");

    file_name = QFileDialog::getSaveFileName(this, tr("Сохранение результатов"),doc_dir,filter);
    if(!file_name.isEmpty())
    {
      if(fmt_html)
      {
         save_report_html(file_name) ;
      }
      else
      {
        save_report_pdf(file_name);
      }

    }
}

void ZrmReport::gen_result_report()
{
    m_method_result = m_source->results_get( m_channel );
    bool report_valid = !m_method_result.empty();
    //Обновить  список номеров при необходимости
    if(report_valid && !ed_akb_number->count() && ed_akb_type->count())
    {
       akb_type_changed(ed_akb_type->currentIndex());
    }

    tbSaveHtml->setEnabled(report_valid);
    tbSavePdf->setEnabled (report_valid);
    tbSaveSql->setEnabled (report_valid && ed_report_maker->currentIndex()>=0 && ed_akb_number->currentIndex()>=0);
    if(report_valid)
    {
     QString rep_maker = ed_report_maker->currentText();
     QString rep_text = make_report(rep_maker, ed_akb_type->currentText(), ed_akb_number->currentText(),cb_report_details->isChecked(),m_method_result);
     result_text->setText(rep_text);
     result_text->moveCursor(QTextCursor::MoveOperation::Start);
    }
    else
    {
     result_text->clear();
    }

}

void ZrmReport::update_controls()
{

    if(m_source && m_channel)
    {

        if(ed_report_maker->model() != m_rep_db.users_model())
        {
          ed_report_maker->setModel      ( m_rep_db.users_model()     );
          ed_report_maker->setModelColumn( m_rep_db.users_short_fio() );
          ed_akb_type->setModel          ( m_rep_db.types_model()     );
          ed_akb_type->setModelColumn    ( m_rep_db.type_text()       );
          ed_akb_number->setModel        ( m_rep_db.numbers_model()   );
          ed_akb_number->setModelColumn  ( m_rep_db.number_text()     );
        }

      setEnabled(true);
      channel_param_changed(m_channel, m_source->channel_params(m_channel));
     #ifdef QT_DEBUG
      tbSaveSql->setEnabled(true);
     #endif
    }
  ZrmChannelWidget::update_controls();
}

void ZrmReport::clear_controls ()
{
  setEnabled(false);
  result_text->clear();
  tbSaveHtml->setEnabled(false);
  tbSavePdf->setEnabled(false);
}

void  ZrmReport::channel_param_changed(unsigned channel, const zrm::params_list_t & params_list  )
{
  if(channel == m_channel)
  {
     auto ptr = params_list.find(zrm::PARAM_METH_EXEC_RESULT);
     if(ptr!= params_list.end())
         gen_result_report();
  }
 ZrmChannelWidget::channel_param_changed(channel, params_list);
}

void ZrmReport::channel_session      (unsigned ch_num)
{
  if(m_source && m_channel == ch_num && m_source->channel_session(m_channel).is_active())
      m_source->channel_query_param(m_channel, zrm::PARAM_METH_EXEC_RESULT);

}

void ZrmReport::akb_type_changed (int idx)
{
  QAbstractItemModel * model = ed_akb_type->model();
  int type_id = m_rep_db.get_record_id(model,idx);
  if(m_rep_db.numbers_select( type_id ) && ed_akb_number->count() )
      ed_akb_number->setCurrentIndex(0);

}


void ZrmReport::save_report_sql()
{
  #ifdef QT_DEBUG
    if(m_method_result.empty())
    {
        m_method_result.push_back({1 ,0 , 3000 , 2000 , 12125 ,15600 ,5000 ,{0,1,0},0});
        m_method_result.push_back({2 ,0 , 4000 , 3000 , 15000 ,11600 ,7000 ,{0,1,1},0});
    }
  #endif
  if(!m_method_result.empty())
  {

    int user_id = m_rep_db.get_record_id(ed_report_maker->model(), ed_report_maker->currentIndex());
    int serial_id  = m_rep_db.get_record_id(ed_akb_number->model()  , ed_akb_number->currentIndex());
    m_rep_db.report_write(user_id, serial_id,m_method_result);
  }
}



