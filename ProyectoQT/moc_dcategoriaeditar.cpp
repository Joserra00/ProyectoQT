/****************************************************************************
** Meta object code from reading C++ file 'dcategoriaeditar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "dialogos/dcategoriaeditar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dcategoriaeditar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DCategoriaEditar_t {
    QByteArrayData data[7];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DCategoriaEditar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DCategoriaEditar_t qt_meta_stringdata_DCategoriaEditar = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DCategoriaEditar"
QT_MOC_LITERAL(1, 17, 18), // "slotGuardarDialogo"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 19), // "slotCancelarDialogo"
QT_MOC_LITERAL(4, 57, 19), // "slotInsertarDialogo"
QT_MOC_LITERAL(5, 77, 17), // "slotBorrarDialogo"
QT_MOC_LITERAL(6, 95, 16) // "slotEmitirAccept"

    },
    "DCategoriaEditar\0slotGuardarDialogo\0"
    "\0slotCancelarDialogo\0slotInsertarDialogo\0"
    "slotBorrarDialogo\0slotEmitirAccept"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DCategoriaEditar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DCategoriaEditar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DCategoriaEditar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotGuardarDialogo(); break;
        case 1: _t->slotCancelarDialogo(); break;
        case 2: _t->slotInsertarDialogo(); break;
        case 3: _t->slotBorrarDialogo(); break;
        case 4: _t->slotEmitirAccept(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject DCategoriaEditar::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DCategoriaEditar.data,
    qt_meta_data_DCategoriaEditar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DCategoriaEditar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DCategoriaEditar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DCategoriaEditar.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::DCategoriaEditar"))
        return static_cast< Ui::DCategoriaEditar*>(this);
    return QDialog::qt_metacast(_clname);
}

int DCategoriaEditar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
