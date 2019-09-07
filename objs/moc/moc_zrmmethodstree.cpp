/****************************************************************************
** Meta object code from reading C++ file 'zrmmethodstree.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../data/zrmmethodstree.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zrmmethodstree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ZrmMethodsTree_t {
    QByteArrayData data[19];
    char stringdata0[279];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZrmMethodsTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZrmMethodsTree_t qt_meta_stringdata_ZrmMethodsTree = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ZrmMethodsTree"
QT_MOC_LITERAL(1, 15, 15), // "method_selected"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 49, 4), // "item"
QT_MOC_LITERAL(5, 54, 20), // "method_param_changed"
QT_MOC_LITERAL(6, 75, 20), // "current_item_changed"
QT_MOC_LITERAL(7, 96, 7), // "current"
QT_MOC_LITERAL(8, 104, 8), // "previous"
QT_MOC_LITERAL(9, 113, 12), // "item_changed"
QT_MOC_LITERAL(10, 126, 6), // "column"
QT_MOC_LITERAL(11, 133, 13), // "database_open"
QT_MOC_LITERAL(12, 147, 7), // "success"
QT_MOC_LITERAL(13, 155, 25), // "on_tw_methods_itemChanged"
QT_MOC_LITERAL(14, 181, 32), // "on_tw_methods_currentItemChanged"
QT_MOC_LITERAL(15, 214, 18), // "slot_item_expanded"
QT_MOC_LITERAL(16, 233, 19), // "slot_item_collapsed"
QT_MOC_LITERAL(17, 253, 16), // "volt_cap_changed"
QT_MOC_LITERAL(18, 270, 8) // "val_text"

    },
    "ZrmMethodsTree\0method_selected\0\0"
    "QTreeWidgetItem*\0item\0method_param_changed\0"
    "current_item_changed\0current\0previous\0"
    "item_changed\0column\0database_open\0"
    "success\0on_tw_methods_itemChanged\0"
    "on_tw_methods_currentItemChanged\0"
    "slot_item_expanded\0slot_item_collapsed\0"
    "volt_cap_changed\0val_text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZrmMethodsTree[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       6,    2,   70,    2, 0x06 /* Public */,
       9,    2,   75,    2, 0x06 /* Public */,
      11,    1,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    2,   83,    2, 0x08 /* Private */,
      14,    2,   88,    2, 0x08 /* Private */,
      15,    1,   93,    2, 0x08 /* Private */,
      16,    1,   96,    2, 0x08 /* Private */,
      17,    1,   99,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    7,    8,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    7,   10,
    QMetaType::Void, QMetaType::Bool,   12,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,   10,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    7,    8,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,   18,

       0        // eod
};

void ZrmMethodsTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ZrmMethodsTree *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->method_selected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->method_param_changed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->current_item_changed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 3: _t->item_changed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->database_open((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_tw_methods_itemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->on_tw_methods_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 7: _t->slot_item_expanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->slot_item_collapsed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 9: _t->volt_cap_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ZrmMethodsTree::*)(QTreeWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZrmMethodsTree::method_selected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ZrmMethodsTree::*)(QTreeWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZrmMethodsTree::method_param_changed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ZrmMethodsTree::*)(QTreeWidgetItem * , QTreeWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZrmMethodsTree::current_item_changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ZrmMethodsTree::*)(QTreeWidgetItem * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZrmMethodsTree::item_changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ZrmMethodsTree::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZrmMethodsTree::database_open)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ZrmMethodsTree::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ZrmMethodsTree.data,
    qt_meta_data_ZrmMethodsTree,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ZrmMethodsTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZrmMethodsTree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZrmMethodsTree.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ZrmMethodsTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ZrmMethodsTree::method_selected(QTreeWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ZrmMethodsTree::method_param_changed(QTreeWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ZrmMethodsTree::current_item_changed(QTreeWidgetItem * _t1, QTreeWidgetItem * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ZrmMethodsTree::item_changed(QTreeWidgetItem * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ZrmMethodsTree::database_open(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
