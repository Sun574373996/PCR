/****************************************************************************
** Meta object code from reading C++ file 'page2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pcr/page2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'page2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Page2_t {
    QByteArrayData data[10];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Page2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Page2_t qt_meta_stringdata_Page2 = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Page2"
QT_MOC_LITERAL(1, 6, 10), // "jump_page1"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 14), // "dir_btn_change"
QT_MOC_LITERAL(4, 33, 2), // "id"
QT_MOC_LITERAL(5, 36, 9), // "copy_file"
QT_MOC_LITERAL(6, 46, 9), // "move_file"
QT_MOC_LITERAL(7, 56, 16), // "rename_file_open"
QT_MOC_LITERAL(8, 73, 19), // "rename_file_confirm"
QT_MOC_LITERAL(9, 93, 18) // "rename_file_cancel"

    },
    "Page2\0jump_page1\0\0dir_btn_change\0id\0"
    "copy_file\0move_file\0rename_file_open\0"
    "rename_file_confirm\0rename_file_cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Page2[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    1,   50,    2, 0x0a /* Public */,
       5,    0,   53,    2, 0x0a /* Public */,
       6,    0,   54,    2, 0x0a /* Public */,
       7,    0,   55,    2, 0x0a /* Public */,
       8,    0,   56,    2, 0x0a /* Public */,
       9,    0,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Page2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Page2 *_t = static_cast<Page2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->jump_page1(); break;
        case 1: _t->dir_btn_change((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->copy_file(); break;
        case 3: _t->move_file(); break;
        case 4: _t->rename_file_open(); break;
        case 5: _t->rename_file_confirm(); break;
        case 6: _t->rename_file_cancel(); break;
        default: ;
        }
    }
}

const QMetaObject Page2::staticMetaObject = {
    { &Widget::staticMetaObject, qt_meta_stringdata_Page2.data,
      qt_meta_data_Page2,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Page2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Page2::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Page2.stringdata0))
        return static_cast<void*>(const_cast< Page2*>(this));
    return Widget::qt_metacast(_clname);
}

int Page2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Widget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
