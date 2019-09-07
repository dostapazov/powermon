/****************************************************************************
** Meta object code from reading C++ file 'zrmreadylayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../zrm/zrmreadylayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zrmreadylayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ZrmReadyLayout_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZrmReadyLayout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZrmReadyLayout_t qt_meta_stringdata_ZrmReadyLayout = {
    {
QT_MOC_LITERAL(0, 0, 14) // "ZrmReadyLayout"

    },
    "ZrmReadyLayout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZrmReadyLayout[] = {

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

void ZrmReadyLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ZrmReadyLayout::staticMetaObject = { {
    &QLayout::staticMetaObject,
    qt_meta_stringdata_ZrmReadyLayout.data,
    qt_meta_data_ZrmReadyLayout,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ZrmReadyLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZrmReadyLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZrmReadyLayout.stringdata0))
        return static_cast<void*>(this);
    return QLayout::qt_metacast(_clname);
}

int ZrmReadyLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLayout::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
