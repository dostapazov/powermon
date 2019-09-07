/****************************************************************************
** Meta object code from reading C++ file 'reportcommon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../data/reportcommon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reportcommon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReportCommon_t {
    QByteArrayData data[17];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReportCommon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReportCommon_t qt_meta_stringdata_ReportCommon = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ReportCommon"
QT_MOC_LITERAL(1, 13, 17), // "users_btn_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 17), // "types_btn_clicked"
QT_MOC_LITERAL(4, 50, 19), // "numbers_btn_clicked"
QT_MOC_LITERAL(5, 70, 8), // "user_new"
QT_MOC_LITERAL(6, 79, 10), // "user_apply"
QT_MOC_LITERAL(7, 90, 11), // "user_revert"
QT_MOC_LITERAL(8, 102, 13), // "user_mark_del"
QT_MOC_LITERAL(9, 116, 16), // "type_row_changed"
QT_MOC_LITERAL(10, 133, 11), // "QModelIndex"
QT_MOC_LITERAL(11, 145, 7), // "current"
QT_MOC_LITERAL(12, 153, 18), // "number_row_changed"
QT_MOC_LITERAL(13, 172, 18), // "report_row_changed"
QT_MOC_LITERAL(14, 191, 12), // "switch_pages"
QT_MOC_LITERAL(15, 204, 7), // "checked"
QT_MOC_LITERAL(16, 212, 12) // "read_reports"

    },
    "ReportCommon\0users_btn_clicked\0\0"
    "types_btn_clicked\0numbers_btn_clicked\0"
    "user_new\0user_apply\0user_revert\0"
    "user_mark_del\0type_row_changed\0"
    "QModelIndex\0current\0number_row_changed\0"
    "report_row_changed\0switch_pages\0checked\0"
    "read_reports"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReportCommon[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    1,   81,    2, 0x08 /* Private */,
      12,    1,   84,    2, 0x08 /* Private */,
      13,    1,   87,    2, 0x08 /* Private */,
      14,    1,   90,    2, 0x08 /* Private */,
      16,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,

       0        // eod
};

void ReportCommon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReportCommon *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->users_btn_clicked(); break;
        case 1: _t->types_btn_clicked(); break;
        case 2: _t->numbers_btn_clicked(); break;
        case 3: _t->user_new(); break;
        case 4: _t->user_apply(); break;
        case 5: _t->user_revert(); break;
        case 6: _t->user_mark_del(); break;
        case 7: _t->type_row_changed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->number_row_changed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->report_row_changed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->switch_pages((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->read_reports(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ReportCommon::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ReportCommon.data,
    qt_meta_data_ReportCommon,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReportCommon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReportCommon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReportCommon.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ReportCommon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
