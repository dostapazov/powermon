#include "zrmreadylayout.h"
#include "qlayoutitem.h"
#include <qdebug.h>
#include <zrmchannelmimimal.h>


ZrmReadyLayout::ZrmReadyLayout(QWidget * parent):QLayout (parent)
{
  setSizeConstraint(QLayout::SetMinAndMaxSize);
}

ZrmReadyLayout::~ZrmReadyLayout()
{
  clear();
}

void         ZrmReadyLayout::clear()
{
 while(count())
  {
   auto li = takeAt(count()-1);
   delete li->widget();
   delete li;
  }

}


 void ZrmReadyLayout::addWidget(QWidget *widget)
 {
    addItem(new QWidgetItem(widget));
 }

 void ZrmReadyLayout::addItem  (QLayoutItem *item)
 {
   if(!m_items.count(item) && item->widget())
      {
        m_items.append(item);

        item->widget()->setParent(parentWidget());
        item->widget()->setVisible(true);
      }
 }


void   ZrmReadyLayout::set_size(const QSize size)
{
  QRect r = geometry();
  r.setSize(size);
  setGeometry(r);
}


bool  ZrmReadyLayout::hasHeightForWidth() const
{
 return m_scroll_area;
}

int   ZrmReadyLayout::heightForWidth(int width) const
{
  Q_UNUSED(width)
  int sp = 3 * spacing();
  QLayout * layout = m_scroll_area->layout();
  if(layout)
      sp = 2*layout->margin() + 2* layout->spacing();
  return m_scroll_area ? m_scroll_area->size().height()- sp : minimumSize().height();
}

 QSize ZrmReadyLayout::sizeHint() const
 {
   QSize sz(m_min_width, m_min_height);
   sz = sz.expandedTo(QSize(m_hint_width, m_hint_height));
   return sz;
 }

 QSize ZrmReadyLayout::minimumSize() const
 {
  QSize sz(100,50);
  for(auto i : m_items)
      sz = sz.expandedTo(i->widget()->minimumSize());
  m_min_width  = sz.width();
  m_min_height = sz.height();
  return sz;
 }

 void  ZrmReadyLayout::setGeometry(const QRect &rect)
 {
   QLayout::setGeometry(rect);
   do_layout(rect);
 }

 QSize ZrmReadyLayout::do_layout(const QRect & rect, bool test) const
 {
  QSize sz;
  int sp = spacing();
  QRect r = this->alignmentRect(rect);
  int x = r.left()-m_min_width-sp;
  int y = r.top ()+sp;
  int max_y = 0;
  zrm::ZrmConnectivity * conn = Q_NULLPTR;
  for(auto litem : m_items)
  {
    auto * w = dynamic_cast<ZrmChannelMimimal*>(litem->widget());
    if( (m_conn_separate && conn!= w->connectivity()) || ((y+m_min_height) > r.height()))
    {
      y = r.top()+sp;
      x+= sp+m_min_width;
      conn = w->connectivity();
    }

    if(w && !test)
    {
      w->setGeometry(QRect(x, y, m_min_width, m_min_height));
    }

    y+= sp+m_min_height;
    max_y = qMax(max_y, y);
  }
  sz.setHeight(max_y);
  sz.setWidth(x+sp+m_min_width);
  if(!test){

      m_hint_width  = sz.width();
      m_hint_height = sz.height();
   }

  return sz;
 }

void   ZrmReadyLayout::set_conn_separate(bool cs)
{
  if(m_conn_separate != cs)
  {
    m_conn_separate = cs;
    do_layout(geometry());
  }
}


