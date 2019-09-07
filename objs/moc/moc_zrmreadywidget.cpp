/****************************************************************************
** Meta object code from reading C++ file 'zrmreadywidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../zrm/zrmreadywidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zrmreadywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ZrmReadyWidget_t {
    QByteArrayData data[14];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZrmReadyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZrmReadyWidget_t qt_meta_stringdata_ZrmReadyWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ZrmReadyWidget"
QT_MOC_LITERAL(1, 15, 17), // "channel_activated"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "zrm::ZrmConnectivity*"
QT_MOC_LITERAL(4, 56, 4), // "conn"
QT_MOC_LITERAL(5, 61, 7), // "channel"
QT_MOC_LITERAL(6, 69, 18), // "channel_mouse_over"
QT_MOC_LITERAL(7, 88, 18), // "ZrmChannelMimimal*"
QT_MOC_LITERAL(8, 107, 1), // "w"
QT_MOC_LITERAL(9, 109, 12), // "update_ready"
QT_MOC_LITERAL(10, 122, 12), // "next_channel"
QT_MOC_LITERAL(11, 135, 12), // "prev_channel"
QT_MOC_LITERAL(12, 148, 11), // "zrm_clicked"
QT_MOC_LITERAL(13, 160, 14) // "zrm_mouse_over"

    },
    "ZrmReadyWidget\0channel_activated\0\0"
    "zrm::ZrmConnectivity*\0conn\0channel\0"
    "channel_mouse_over\0ZrmChannelMimimal*\0"
    "w\0update_ready\0next_channel\0prev_channel\0"
    "zrm_clicked\0zrm_mouse_over"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZrmReadyWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       6,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   57,    2, 0x0a /* Public */,
      10,    0,   58,    2, 0x0a /* Public */,
      11,    0,   59,    2, 0x0a /* Public */,
      12,    0,   60,    2, 0x08 /* Private */,
      13,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ZrmReadyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ZrmReadyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->channel_activated((*reinterpret_cast< zrm::ZrmConnectivity*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: _t->channel_mouse_over((*reinterpret_cast< ZrmChannelMimimal*(*)>(_a[1]))); break;
        case 2: _t->update_ready(); break;
        case 3: _t->next_channel(); break;
        case 4: _t->prev_channel(); break;
        case 5: _t->zrm_clicked(); break;
        case 6: _t->zrm_mouse_over(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< zrm::ZrmConnectivity* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ZrmReadyWidget::*)(zrm::ZrmConnectivity * , unsigned  );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZrmReadyWidget::channel_activated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ZrmReadyWidget::*)(ZrmChannelMimimal * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZrmReadyWidget::channel_mouse_over)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ZrmReadyWidget::staticMetaObject = { {
    &ZrmBaseWidget::staticMetaObject,
    qt_meta_stringdata_ZrmReadyWidget.data,
    qt_meta_data_ZrmReadyWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ZrmReadyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZrmReadyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZrmReadyWidget.stringdata0))
        return static_cast<void*>(this);
    return ZrmBaseWidget::qt_metacast(_clname);
}

int ZrmReadyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ZrmBaseWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ZrmReadyWidget::channel_activated(zrm::ZrmConnectivity * _t1, unsigned  _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ZrmReadyWidget::channel_mouse_over(ZrmChannelMimimal * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
