/****************************************************************************
** Meta object code from reading C++ file 'MoveBlock11.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../MoveBlock11.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MoveBlock11.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MoveBlock11_t {
    QByteArrayData data[7];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MoveBlock11_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MoveBlock11_t qt_meta_stringdata_MoveBlock11 = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MoveBlock11"
QT_MOC_LITERAL(1, 12, 9), // "MoveShang"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "flag"
QT_MOC_LITERAL(4, 28, 7), // "MoveXia"
QT_MOC_LITERAL(5, 36, 7), // "MoveZuo"
QT_MOC_LITERAL(6, 44, 7) // "MoveYou"

    },
    "MoveBlock11\0MoveShang\0\0flag\0MoveXia\0"
    "MoveZuo\0MoveYou"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MoveBlock11[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       5,    1,   40,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void MoveBlock11::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MoveBlock11 *_t = static_cast<MoveBlock11 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MoveShang((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->MoveXia((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->MoveZuo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->MoveYou((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MoveBlock11::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MoveBlock11.data,
      qt_meta_data_MoveBlock11,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MoveBlock11::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MoveBlock11::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MoveBlock11.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MoveBlock11::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
