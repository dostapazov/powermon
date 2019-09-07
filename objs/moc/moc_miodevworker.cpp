/****************************************************************************
** Meta object code from reading C++ file 'miodevworker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qtshared/multi_iodev/miodevworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'miodevworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMultioDevWorker_t {
    QByteArrayData data[17];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMultioDevWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMultioDevWorker_t qt_meta_stringdata_QMultioDevWorker = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QMultioDevWorker"
QT_MOC_LITERAL(1, 17, 11), // "sig_receive"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 8), // "rcv_data"
QT_MOC_LITERAL(4, 39, 11), // "sig_connect"
QT_MOC_LITERAL(5, 51, 16), // "sig_device_error"
QT_MOC_LITERAL(6, 68, 5), // "error"
QT_MOC_LITERAL(7, 74, 12), // "sig_dev_wite"
QT_MOC_LITERAL(8, 87, 4), // "data"
QT_MOC_LITERAL(9, 92, 13), // "sl_ready_read"
QT_MOC_LITERAL(10, 106, 9), // "sl_writed"
QT_MOC_LITERAL(11, 116, 5), // "bytes"
QT_MOC_LITERAL(12, 122, 12), // "sl_connected"
QT_MOC_LITERAL(13, 135, 15), // "sl_disconnected"
QT_MOC_LITERAL(14, 151, 11), // "sl_finished"
QT_MOC_LITERAL(15, 163, 10), // "sl_started"
QT_MOC_LITERAL(16, 174, 12) // "sl_dev_write"

    },
    "QMultioDevWorker\0sig_receive\0\0rcv_data\0"
    "sig_connect\0sig_device_error\0error\0"
    "sig_dev_wite\0data\0sl_ready_read\0"
    "sl_writed\0bytes\0sl_connected\0"
    "sl_disconnected\0sl_finished\0sl_started\0"
    "sl_dev_write"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMultioDevWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       5,    1,   75,    2, 0x06 /* Public */,
       7,    1,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   81,    2, 0x08 /* Private */,
      10,    1,   82,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,
      15,    0,   88,    2, 0x08 /* Private */,
      16,    1,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QByteArray,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    8,

       0        // eod
};

void QMultioDevWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QMultioDevWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_receive((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->sig_connect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->sig_device_error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->sig_dev_wite((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 4: _t->sl_ready_read(); break;
        case 5: _t->sl_writed((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->sl_connected(); break;
        case 7: _t->sl_disconnected(); break;
        case 8: _t->sl_finished(); break;
        case 9: _t->sl_started(); break;
        case 10: _t->sl_dev_write((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QMultioDevWorker::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMultioDevWorker::sig_receive)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QMultioDevWorker::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMultioDevWorker::sig_connect)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QMultioDevWorker::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMultioDevWorker::sig_device_error)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QMultioDevWorker::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMultioDevWorker::sig_dev_wite)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QMultioDevWorker::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QMultioDevWorker.data,
    qt_meta_data_QMultioDevWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QMultioDevWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMultioDevWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMultioDevWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QMultioDevWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QMultioDevWorker::sig_receive(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QMultioDevWorker::sig_connect(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QMultioDevWorker::sig_device_error(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMultioDevWorker::sig_dev_wite(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
