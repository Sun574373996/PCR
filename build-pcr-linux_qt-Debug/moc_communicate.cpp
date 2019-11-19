/****************************************************************************
** Meta object code from reading C++ file 'communicate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pcr/communicate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'communicate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PortCom_t {
    QByteArrayData data[11];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PortCom_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PortCom_t qt_meta_stringdata_PortCom = {
    {
QT_MOC_LITERAL(0, 0, 7), // "PortCom"
QT_MOC_LITERAL(1, 8, 18), // "dispatch_recv_data"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "QByteArray&"
QT_MOC_LITERAL(4, 40, 4), // "data"
QT_MOC_LITERAL(5, 45, 8), // "open_com"
QT_MOC_LITERAL(6, 54, 13), // "transmit_data"
QT_MOC_LITERAL(7, 68, 18), // "wait_transmit_data"
QT_MOC_LITERAL(8, 87, 19), // "retry_transmit_data"
QT_MOC_LITERAL(9, 107, 9), // "recv_data"
QT_MOC_LITERAL(10, 117, 13) // "analysis_data"

    },
    "PortCom\0dispatch_recv_data\0\0QByteArray&\0"
    "data\0open_com\0transmit_data\0"
    "wait_transmit_data\0retry_transmit_data\0"
    "recv_data\0analysis_data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PortCom[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   52,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x0a /* Public */,
       7,    1,   56,    2, 0x0a /* Public */,
       8,    0,   59,    2, 0x0a /* Public */,
       9,    0,   60,    2, 0x0a /* Public */,
      10,    1,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void PortCom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PortCom *_t = static_cast<PortCom *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dispatch_recv_data((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->open_com(); break;
        case 2: _t->transmit_data((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->wait_transmit_data((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 4: _t->retry_transmit_data(); break;
        case 5: _t->recv_data(); break;
        case 6: _t->analysis_data((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PortCom::*_t)(QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PortCom::dispatch_recv_data)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PortCom::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PortCom.data,
      qt_meta_data_PortCom,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PortCom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PortCom::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PortCom.stringdata0))
        return static_cast<void*>(const_cast< PortCom*>(this));
    return QObject::qt_metacast(_clname);
}

int PortCom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void PortCom::dispatch_recv_data(QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_PortCtrl_t {
    QByteArrayData data[7];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PortCtrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PortCtrl_t qt_meta_stringdata_PortCtrl = {
    {
QT_MOC_LITERAL(0, 0, 8), // "PortCtrl"
QT_MOC_LITERAL(1, 9, 12), // "transmit_msg"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "QByteArray&"
QT_MOC_LITERAL(4, 35, 3), // "msg"
QT_MOC_LITERAL(5, 39, 17), // "wait_transmit_msg"
QT_MOC_LITERAL(6, 57, 17) // "dispatch_recv_msg"

    },
    "PortCtrl\0transmit_msg\0\0QByteArray&\0"
    "msg\0wait_transmit_msg\0dispatch_recv_msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PortCtrl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void PortCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PortCtrl *_t = static_cast<PortCtrl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->transmit_msg((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->wait_transmit_msg((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->dispatch_recv_msg((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PortCtrl::*_t)(QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PortCtrl::transmit_msg)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PortCtrl::*_t)(QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PortCtrl::wait_transmit_msg)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject PortCtrl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PortCtrl.data,
      qt_meta_data_PortCtrl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PortCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PortCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PortCtrl.stringdata0))
        return static_cast<void*>(const_cast< PortCtrl*>(this));
    return QObject::qt_metacast(_clname);
}

int PortCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PortCtrl::transmit_msg(QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PortCtrl::wait_transmit_msg(QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
