/****************************************************************************
** Meta object code from reading C++ file 'zrmmethodchoose.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../data/zrmmethodchoose.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zrmmethodchoose.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ZrmMethodChoose_t {
    QByteArrayData data[10];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZrmMethodChoose_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZrmMethodChoose_t qt_meta_stringdata_ZrmMethodChoose = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ZrmMethodChoose"
QT_MOC_LITERAL(1, 16, 14), // "method_choosed"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 18), // "sl_method_selected"
QT_MOC_LITERAL(4, 51, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(5, 68, 4), // "item"
QT_MOC_LITERAL(6, 73, 25), // "sl_methods_button_toggled"
QT_MOC_LITERAL(7, 99, 7), // "checked"
QT_MOC_LITERAL(8, 107, 20), // "sl_man_value_changed"
QT_MOC_LITERAL(9, 128, 4) // "arg1"

    },
    "ZrmMethodChoose\0method_choosed\0\0"
    "sl_method_selected\0QTreeWidgetItem*\0"
    "item\0sl_methods_button_toggled\0checked\0"
    "sl_man_value_changed\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZrmMethodChoose[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x08 /* Private */,
       6,    1,   38,    2, 0x08 /* Private */,
       8,    1,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Double,    9,

       0        // eod
};

void ZrmMethodChoose::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ZrmMethodChoose *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->method_choosed(); break;
        case 1: _t->sl_method_selected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->sl_methods_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->sl_man_value_changed((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ZrmMethodChoose::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZrmMethodChoose::method_choosed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ZrmMethodChoose::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_ZrmMethodChoose.data,
    qt_meta_data_ZrmMethodChoose,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ZrmMethodChoose::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZrmMethodChoose::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZrmMethodChoose.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ZrmMethodChoose::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ZrmMethodChoose::method_choosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
