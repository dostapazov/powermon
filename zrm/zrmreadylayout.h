#ifndef ZRMREADYLAYOUT_H
#define ZRMREADYLAYOUT_H

#include <qwidget.h>
#include <qlayout.h>
#include <qlist.h>
#include <qscrollarea.h>


class ZrmReadyLayout : public QLayout
{
    Q_OBJECT
public:
      ZrmReadyLayout(QWidget * parent);
     ~ZrmReadyLayout() override;
      bool         conn_separate();
      void         set_conn_separate(bool cs);
      void         clear();
      int          count() const override;
      QLayoutItem *itemAt(int) const override;
      QLayoutItem *takeAt(int) override;

      void addItem  (QLayoutItem *item) override;
      void addWidget(QWidget *widget) ;

      QSize sizeHint      () const override;
      QSize minimumSize   () const override;

      int   heightForWidth(int width) const override;
      bool  hasHeightForWidth() const override;
      void  setGeometry(const QRect &rect) override;
      QScrollArea *  scroll_area();
      void           set_scroll_area(QScrollArea * area);
      void           set_size(const QSize size);
private:
    QSize  do_layout(const QRect & rect, bool test = false) const;
    using list_items_t    = QList<QLayoutItem*>;
    list_items_t          m_items;
    mutable int           m_min_width    = 0;
    mutable int           m_min_height   = 0;
    mutable int           m_hint_width   = 0;
    mutable int           m_hint_height  = 0;
    QScrollArea         * m_scroll_area  = Q_NULLPTR;
    bool                  m_conn_separate = true;
};

inline int          ZrmReadyLayout::count() const
{
  return m_items.size();
}

inline QLayoutItem* ZrmReadyLayout::itemAt(int idx) const
{
  return idx < count() ? m_items.at(idx) : Q_NULLPTR;
}

inline QLayoutItem* ZrmReadyLayout::takeAt(int idx)
{
  return idx < count() ? m_items.takeAt(idx) : Q_NULLPTR;
}

inline QScrollArea *  ZrmReadyLayout::scroll_area()
{
 return m_scroll_area;
}

inline void           ZrmReadyLayout::set_scroll_area(QScrollArea * area)
{
   if(m_scroll_area != area)
   {
     m_scroll_area = area;
     update();
   }
}

inline bool         ZrmReadyLayout::conn_separate()
{
 return m_conn_separate;
}




#endif // ZRMREADYLAYOUT_H
