/****************************************************************************
** Meta object code from reading C++ file 'qtextviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qtshared/text_viewer_widget/qtextviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtextviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QTextViewer_t {
    QByteArrayData data[10];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTextViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTextViewer_t qt_meta_stringdata_QTextViewer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QTextViewer"
QT_MOC_LITERAL(1, 12, 5), // "clear"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 8), // "line_add"
QT_MOC_LITERAL(4, 28, 4), // "text"
QT_MOC_LITERAL(5, 33, 10), // "text_color"
QT_MOC_LITERAL(6, 44, 13), // "scroll_to_end"
QT_MOC_LITERAL(7, 58, 13), // "vsbar_changed"
QT_MOC_LITERAL(8, 72, 3), // "pos"
QT_MOC_LITERAL(9, 76, 13) // "hsbar_changed"

    },
    "QTextViewer\0clear\0\0line_add\0text\0"
    "text_color\0scroll_to_end\0vsbar_changed\0"
    "pos\0hsbar_changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTextViewer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    3,   45,    2, 0x0a /* Public */,
       3,    2,   52,    2, 0x2a /* Public | MethodCloned */,
       3,    1,   57,    2, 0x2a /* Public | MethodCloned */,
       7,    1,   60,    2, 0x08 /* Private */,
       9,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QColor, QMetaType::Bool,    4,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QColor,    4,    5,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void QTextViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QTextViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->line_add((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->line_add((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 3: _t->line_add((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->vsbar_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->hsbar_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QTextViewer::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QTextViewer.data,
    qt_meta_data_QTextViewer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QTextViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTextViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QTextViewer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QTextViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
