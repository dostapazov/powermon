/****************************************************************************
** Meta object code from reading C++ file 'zrmmaindisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../zrm/zrmmaindisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zrmmaindisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ZrmMainDisplay_t {
    QByteArrayData data[8];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZrmMainDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZrmMainDisplay_t qt_meta_stringdata_ZrmMainDisplay = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ZrmMainDisplay"
QT_MOC_LITERAL(1, 15, 13), // "method_choose"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 21), // "manual_method_changed"
QT_MOC_LITERAL(4, 52, 3), // "str"
QT_MOC_LITERAL(5, 56, 10), // "start_stop"
QT_MOC_LITERAL(6, 67, 5), // "pause"
QT_MOC_LITERAL(7, 73, 11) // "reset_error"

    },
    "ZrmMainDisplay\0method_choose\0\0"
    "manual_method_changed\0str\0start_stop\0"
    "pause\0reset_error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZrmMainDisplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x09 /* Protected */,
       5,    0,   43,    2, 0x09 /* Protected */,
       6,    0,   44,    2, 0x09 /* Protected */,
       7,    0,   45,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ZrmMainDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ZrmMainDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->method_choose(); break;
        case 1: _t->manual_method_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->start_stop(); break;
        case 3: _t->pause(); break;
        case 4: _t->reset_error(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ZrmMainDisplay::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZrmMainDisplay::method_choose)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ZrmMainDisplay::staticMetaObject = { {
    &ZrmChannelWidget::staticMetaObject,
    qt_meta_stringdata_ZrmMainDisplay.data,
    qt_meta_data_ZrmMainDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ZrmMainDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZrmMainDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZrmMainDisplay.stringdata0))
        return static_cast<void*>(this);
    return ZrmChannelWidget::qt_metacast(_clname);
}

int ZrmMainDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ZrmChannelWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ZrmMainDisplay::method_choose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
