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
    QByteArrayData data[10];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PortCom_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PortCom_t qt_meta_stringdata_PortCom = {
    {
QT_MOC_LITERAL(0, 0, 7), // "PortCom"
QT_MOC_LITERAL(1, 8, 12), // "send_dev_cmd"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3), // "msg"
QT_MOC_LITERAL(4, 26, 8), // "open_com"
QT_MOC_LITERAL(5, 35, 8), // "send_msg"
QT_MOC_LITERAL(6, 44, 14), // "retry_send_msg"
QT_MOC_LITERAL(7, 59, 12), // "recv_dev_msg"
QT_MOC_LITERAL(8, 72, 12), // "analysis_msg"
QT_MOC_LITERAL(9, 85, 11) // "QByteArray&"

    },
    "PortCom\0send_dev_cmd\0\0msg\0open_com\0"
    "send_msg\0retry_send_msg\0recv_dev_msg\0"
    "analysis_msg\0QByteArray&"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PortCom[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x0a /* Public */,
       5,    1,   48,    2, 0x0a /* Public */,
       6,    0,   51,    2, 0x0a /* Public */,
       7,    0,   52,    2, 0x0a /* Public */,
       8,    1,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    3,

       0        // eod
};

void PortCom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PortCom *_t = static_cast<PortCom *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_dev_cmd((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->open_com(); break;
        case 2: _t->send_msg((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->retry_send_msg(); break;
        case 4: _t->recv_dev_msg(); break;
        case 5: _t->analysis_msg((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PortCom::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PortCom::send_dev_cmd)) {
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

// SIGNAL 0
void PortCom::send_dev_cmd(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_PortCtrl_t {
    QByteArrayData data[5];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PortCtrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PortCtrl_t qt_meta_stringdata_PortCtrl = {
    {
QT_MOC_LITERAL(0, 0, 8), // "PortCtrl"
QT_MOC_LITERAL(1, 9, 11), // "send_pc_cmd"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3), // "msg"
QT_MOC_LITERAL(4, 26, 13) // "recv_dev_data"

    },
    "PortCtrl\0send_pc_cmd\0\0msg\0recv_dev_data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PortCtrl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QByteArray,    3,

       0        // eod
};

void PortCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PortCtrl *_t = static_cast<PortCtrl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_pc_cmd((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->recv_dev_data((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PortCtrl::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PortCtrl::send_pc_cmd)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PortCtrl::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PortCtrl::recv_dev_data)) {
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
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void PortCtrl::send_pc_cmd(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PortCtrl::recv_dev_data(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
