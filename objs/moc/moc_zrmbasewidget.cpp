/****************************************************************************
** Meta object code from reading C++ file 'zrmbasewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../zrm/zrmbasewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zrmbasewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ZrmFlashTimer_t {
    QByteArrayData data[5];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZrmFlashTimer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZrmFlashTimer_t qt_meta_stringdata_ZrmFlashTimer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ZrmFlashTimer"
QT_MOC_LITERAL(1, 14, 5), // "flash"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "flash_on"
QT_MOC_LITERAL(4, 30, 10) // "on_timeout"

    },
    "ZrmFlashTimer\0flash\0\0flash_on\0on_timeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZrmFlashTimer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ZrmFlashTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ZrmFlashTimer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->flash((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_timeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ZrmFlashTimer::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZrmFlashTimer::flash)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ZrmFlashTimer::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ZrmFlashTimer.data,
    qt_meta_data_ZrmFlashTimer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ZrmFlashTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZrmFlashTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZrmFlashTimer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ZrmFlashTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ZrmFlashTimer::flash(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ZrmBaseWidget_t {
    QByteArrayData data[15];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZrmBaseWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZrmBaseWidget_t qt_meta_stringdata_ZrmBaseWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ZrmBaseWidget"
QT_MOC_LITERAL(1, 14, 14), // "slot_connected"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 10), // "conn_state"
QT_MOC_LITERAL(4, 41, 16), // "slot_recv_packet"
QT_MOC_LITERAL(5, 58, 6), // "packet"
QT_MOC_LITERAL(6, 65, 16), // "slot_send_packet"
QT_MOC_LITERAL(7, 82, 12), // "slot_ioerror"
QT_MOC_LITERAL(8, 95, 12), // "error_string"
QT_MOC_LITERAL(9, 108, 18), // "slot_param_changes"
QT_MOC_LITERAL(10, 127, 7), // "channel"
QT_MOC_LITERAL(11, 135, 18), // "zrm::params_list_t"
QT_MOC_LITERAL(12, 154, 11), // "params_list"
QT_MOC_LITERAL(13, 166, 21), // "slot_source_destroyed"
QT_MOC_LITERAL(14, 188, 3) // "obj"

    },
    "ZrmBaseWidget\0slot_connected\0\0conn_state\0"
    "slot_recv_packet\0packet\0slot_send_packet\0"
    "slot_ioerror\0error_string\0slot_param_changes\0"
    "channel\0zrm::params_list_t\0params_list\0"
    "slot_source_destroyed\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZrmBaseWidget[] = {

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
       1,    1,   44,    2, 0x09 /* Protected */,
       4,    1,   47,    2, 0x09 /* Protected */,
       6,    1,   50,    2, 0x09 /* Protected */,
       7,    1,   53,    2, 0x09 /* Protected */,
       9,    2,   56,    2, 0x09 /* Protected */,
      13,    1,   61,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 11,   10,   12,
    QMetaType::Void, QMetaType::QObjectStar,   14,

       0        // eod
};

void ZrmBaseWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ZrmBaseWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot_connected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->slot_recv_packet((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->slot_send_packet((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->slot_ioerror((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->slot_param_changes((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< zrm::params_list_t(*)>(_a[2]))); break;
        case 5: _t->slot_source_destroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< zrm::params_list_t >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ZrmBaseWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ZrmBaseWidget.data,
    qt_meta_data_ZrmBaseWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ZrmBaseWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZrmBaseWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZrmBaseWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ZrmBaseWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_ZrmChannelWidget_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZrmChannelWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZrmChannelWidget_t qt_meta_stringdata_ZrmChannelWidget = {
    {
QT_MOC_LITERAL(0, 0, 16) // "ZrmChannelWidget"

    },
    "ZrmChannelWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZrmChannelWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ZrmChannelWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ZrmChannelWidget::staticMetaObject = { {
    &ZrmBaseWidget::staticMetaObject,
    qt_meta_stringdata_ZrmChannelWidget.data,
    qt_meta_data_ZrmChannelWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ZrmChannelWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZrmChannelWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZrmChannelWidget.stringdata0))
        return static_cast<void*>(this);
    return ZrmBaseWidget::qt_metacast(_clname);
}

int ZrmChannelWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ZrmBaseWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ZrmGroupWidget_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZrmGroupWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZrmGroupWidget_t qt_meta_stringdata_ZrmGroupWidget = {
    {
QT_MOC_LITERAL(0, 0, 14) // "ZrmGroupWidget"

    },
    "ZrmGroupWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZrmGroupWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ZrmGroupWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ZrmGroupWidget::staticMetaObject = { {
    &ZrmBaseWidget::staticMetaObject,
    qt_meta_stringdata_ZrmGroupWidget.data,
    qt_meta_data_ZrmGroupWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ZrmGroupWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZrmGroupWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZrmGroupWidget.stringdata0))
        return static_cast<void*>(this);
    return ZrmBaseWidget::qt_metacast(_clname);
}

int ZrmGroupWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ZrmBaseWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
