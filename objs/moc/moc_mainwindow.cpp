/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[28];
    char stringdata0[382];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 17), // "channel_activated"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 21), // "zrm::ZrmConnectivity*"
QT_MOC_LITERAL(4, 52, 4), // "conn"
QT_MOC_LITERAL(5, 57, 7), // "channel"
QT_MOC_LITERAL(6, 65, 18), // "channel_mouse_over"
QT_MOC_LITERAL(7, 84, 18), // "ZrmChannelMimimal*"
QT_MOC_LITERAL(8, 103, 2), // "cm"
QT_MOC_LITERAL(9, 106, 14), // "method_choosed"
QT_MOC_LITERAL(10, 121, 14), // "action_toggled"
QT_MOC_LITERAL(11, 136, 7), // "checked"
QT_MOC_LITERAL(12, 144, 21), // "channel_method_choose"
QT_MOC_LITERAL(13, 166, 14), // "slot_dev_error"
QT_MOC_LITERAL(14, 181, 12), // "error_string"
QT_MOC_LITERAL(15, 194, 9), // "write_log"
QT_MOC_LITERAL(16, 204, 9), // "QtMsgType"
QT_MOC_LITERAL(17, 214, 8), // "msg_type"
QT_MOC_LITERAL(18, 223, 10), // "log_string"
QT_MOC_LITERAL(19, 234, 9), // "set_style"
QT_MOC_LITERAL(20, 244, 9), // "styleName"
QT_MOC_LITERAL(21, 254, 24), // "sl_style_sheet_triggered"
QT_MOC_LITERAL(22, 279, 17), // "edit_font_changed"
QT_MOC_LITERAL(23, 297, 4), // "font"
QT_MOC_LITERAL(24, 302, 23), // "edit_font_changed_props"
QT_MOC_LITERAL(25, 326, 19), // "orientation_changed"
QT_MOC_LITERAL(26, 346, 21), // "Qt::ScreenOrientation"
QT_MOC_LITERAL(27, 368, 13) // "screen_orient"

    },
    "MainWindow\0channel_activated\0\0"
    "zrm::ZrmConnectivity*\0conn\0channel\0"
    "channel_mouse_over\0ZrmChannelMimimal*\0"
    "cm\0method_choosed\0action_toggled\0"
    "checked\0channel_method_choose\0"
    "slot_dev_error\0error_string\0write_log\0"
    "QtMsgType\0msg_type\0log_string\0set_style\0"
    "styleName\0sl_style_sheet_triggered\0"
    "edit_font_changed\0font\0edit_font_changed_props\0"
    "orientation_changed\0Qt::ScreenOrientation\0"
    "screen_orient"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

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
       1,    2,   74,    2, 0x08 /* Private */,
       6,    1,   79,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    1,   83,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    1,   87,    2, 0x08 /* Private */,
      15,    2,   90,    2, 0x08 /* Private */,
      19,    1,   95,    2, 0x08 /* Private */,
      21,    0,   98,    2, 0x08 /* Private */,
      22,    1,   99,    2, 0x08 /* Private */,
      24,    0,  102,    2, 0x08 /* Private */,
      25,    1,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, 0x80000000 | 16, QMetaType::QString,   17,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QFont,   23,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,   27,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->channel_activated((*reinterpret_cast< zrm::ZrmConnectivity*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: _t->channel_mouse_over((*reinterpret_cast< ZrmChannelMimimal*(*)>(_a[1]))); break;
        case 2: _t->method_choosed(); break;
        case 3: _t->action_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->channel_method_choose(); break;
        case 5: _t->slot_dev_error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->write_log((*reinterpret_cast< QtMsgType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->set_style((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->sl_style_sheet_triggered(); break;
        case 9: _t->edit_font_changed((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 10: _t->edit_font_changed_props(); break;
        case 11: _t->orientation_changed((*reinterpret_cast< Qt::ScreenOrientation(*)>(_a[1]))); break;
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
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ZrmChannelMimimal* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::MainWindow"))
        return static_cast< Ui::MainWindow*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
