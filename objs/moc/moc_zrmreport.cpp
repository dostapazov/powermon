/****************************************************************************
** Meta object code from reading C++ file 'zrmreport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../zrm/zrmreport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zrmreport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ZrmReport_t {
    QByteArrayData data[7];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZrmReport_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZrmReport_t qt_meta_stringdata_ZrmReport = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ZrmReport"
QT_MOC_LITERAL(1, 10, 11), // "save_report"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 15), // "save_report_sql"
QT_MOC_LITERAL(4, 39, 17), // "gen_result_report"
QT_MOC_LITERAL(5, 57, 16), // "akb_type_changed"
QT_MOC_LITERAL(6, 74, 3) // "idx"

    },
    "ZrmReport\0save_report\0\0save_report_sql\0"
    "gen_result_report\0akb_type_changed\0"
    "idx"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZrmReport[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x09 /* Protected */,
       3,    0,   35,    2, 0x09 /* Protected */,
       4,    0,   36,    2, 0x09 /* Protected */,
       5,    1,   37,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void ZrmReport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ZrmReport *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->save_report(); break;
        case 1: _t->save_report_sql(); break;
        case 2: _t->gen_result_report(); break;
        case 3: _t->akb_type_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ZrmReport::staticMetaObject = { {
    &ZrmChannelWidget::staticMetaObject,
    qt_meta_stringdata_ZrmReport.data,
    qt_meta_data_ZrmReport,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ZrmReport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZrmReport::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZrmReport.stringdata0))
        return static_cast<void*>(this);
    return ZrmChannelWidget::qt_metacast(_clname);
}

int ZrmReport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ZrmChannelWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
