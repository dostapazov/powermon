/****************************************************************************
** Meta object code from reading C++ file 'zrmdevmethods.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../zrm/zrmdevmethods.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zrmdevmethods.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ZrmDevMethods_t {
    QByteArrayData data[11];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZrmDevMethods_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZrmDevMethods_t qt_meta_stringdata_ZrmDevMethods = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ZrmDevMethods"
QT_MOC_LITERAL(1, 14, 14), // "method_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 47, 4), // "item"
QT_MOC_LITERAL(5, 52, 14), // "method_changed"
QT_MOC_LITERAL(6, 67, 4), // "prev"
QT_MOC_LITERAL(7, 72, 10), // "method_add"
QT_MOC_LITERAL(8, 83, 13), // "method_remove"
QT_MOC_LITERAL(9, 97, 15), // "method_download"
QT_MOC_LITERAL(10, 113, 13) // "method_upload"

    },
    "ZrmDevMethods\0method_clicked\0\0"
    "QTreeWidgetItem*\0item\0method_changed\0"
    "prev\0method_add\0method_remove\0"
    "method_download\0method_upload"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZrmDevMethods[] = {

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
       1,    2,   44,    2, 0x08 /* Private */,
       5,    2,   49,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,
       9,    0,   56,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ZrmDevMethods::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ZrmDevMethods *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->method_clicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->method_changed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 2: _t->method_add(); break;
        case 3: _t->method_remove(); break;
        case 4: _t->method_download(); break;
        case 5: _t->method_upload(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ZrmDevMethods::staticMetaObject = { {
    &ZrmChannelWidget::staticMetaObject,
    qt_meta_stringdata_ZrmDevMethods.data,
    qt_meta_data_ZrmDevMethods,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ZrmDevMethods::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZrmDevMethods::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZrmDevMethods.stringdata0))
        return static_cast<void*>(this);
    return ZrmChannelWidget::qt_metacast(_clname);
}

int ZrmDevMethods::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ZrmChannelWidget::qt_metacall(_c, _id, _a);
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
