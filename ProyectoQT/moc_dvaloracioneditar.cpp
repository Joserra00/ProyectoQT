/****************************************************************************
** Meta object code from reading C++ file 'dvaloracioneditar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialogos/dvaloracioneditar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dvaloracioneditar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DValoracionEditar_t {
    QByteArrayData data[6];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DValoracionEditar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DValoracionEditar_t qt_meta_stringdata_DValoracionEditar = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DValoracionEditar"
QT_MOC_LITERAL(1, 18, 18), // "slotGuardarDialogo"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 19), // "slotCancelarDialogo"
QT_MOC_LITERAL(4, 58, 19), // "slotInsertarDialogo"
QT_MOC_LITERAL(5, 78, 17) // "slotBorrarDialogo"

    },
    "DValoracionEditar\0slotGuardarDialogo\0"
    "\0slotCancelarDialogo\0slotInsertarDialogo\0"
    "slotBorrarDialogo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DValoracionEditar[] = {

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
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DValoracionEditar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DValoracionEditar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotGuardarDialogo(); break;
        case 1: _t->slotCancelarDialogo(); break;
        case 2: _t->slotInsertarDialogo(); break;
        case 3: _t->slotBorrarDialogo(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DValoracionEditar::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_DValoracionEditar.data,
    qt_meta_data_DValoracionEditar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DValoracionEditar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DValoracionEditar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DValoracionEditar.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::DValoracionEditar"))
        return static_cast< Ui::DValoracionEditar*>(this);
    return QDialog::qt_metacast(_clname);
}

int DValoracionEditar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
