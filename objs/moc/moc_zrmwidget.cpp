/****************************************************************************
** Meta object code from reading C++ file 'zrmwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../zrm/zrmwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zrmwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ZrmWidget_t {
    QByteArrayData data[15];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZrmWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZrmWidget_t qt_meta_stringdata_ZrmWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ZrmWidget"
QT_MOC_LITERAL(1, 10, 12), // "next_channel"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "prev_channel"
QT_MOC_LITERAL(4, 37, 11), // "show_method"
QT_MOC_LITERAL(5, 49, 7), // "visible"
QT_MOC_LITERAL(6, 57, 11), // "show_report"
QT_MOC_LITERAL(7, 69, 12), // "show_monitor"
QT_MOC_LITERAL(8, 82, 10), // "show_cells"
QT_MOC_LITERAL(9, 93, 13), // "show_dev_meth"
QT_MOC_LITERAL(10, 107, 11), // "show_params"
QT_MOC_LITERAL(11, 119, 14), // "show_calibrate"
QT_MOC_LITERAL(12, 134, 15), // "show_additional"
QT_MOC_LITERAL(13, 150, 25), // "additional_button_toggeld"
QT_MOC_LITERAL(14, 176, 7) // "checked"

    },
    "ZrmWidget\0next_channel\0\0prev_channel\0"
    "show_method\0visible\0show_report\0"
    "show_monitor\0show_cells\0show_dev_meth\0"
    "show_params\0show_calibrate\0show_additional\0"
    "additional_button_toggeld\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZrmWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   71,    2, 0x0a /* Public */,
       6,    0,   74,    2, 0x0a /* Public */,
       7,    0,   75,    2, 0x0a /* Public */,
       8,    0,   76,    2, 0x0a /* Public */,
       9,    0,   77,    2, 0x0a /* Public */,
      10,    0,   78,    2, 0x0a /* Public */,
      11,    0,   79,    2, 0x0a /* Public */,
      12,    1,   80,    2, 0x0a /* Public */,
      13,    1,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,   14,

       0        // eod
};

void ZrmWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ZrmWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->next_channel(); break;
        case 1: _t->prev_channel(); break;
        case 2: _t->show_method((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->show_report(); break;
        case 4: _t->show_monitor(); break;
        case 5: _t->show_cells(); break;
        case 6: _t->show_dev_meth(); break;
        case 7: _t->show_params(); break;
        case 8: _t->show_calibrate(); break;
        case 9: _t->show_additional((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->additional_button_toggeld((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ZrmWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZrmWidget::next_channel)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ZrmWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZrmWidget::prev_channel)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ZrmWidget::staticMetaObject = { {
    &ZrmGroupWidget::staticMetaObject,
    qt_meta_stringdata_ZrmWidget.data,
    qt_meta_data_ZrmWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ZrmWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZrmWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZrmWidget.stringdata0))
        return static_cast<void*>(this);
    return ZrmGroupWidget::qt_metacast(_clname);
}

int ZrmWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ZrmGroupWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ZrmWidget::next_channel()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ZrmWidget::prev_channel()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
