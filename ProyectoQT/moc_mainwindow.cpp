/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[14];
    char stringdata0[303];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "slotEjemplo"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 21), // "slotDialogoValoracion"
QT_MOC_LITERAL(4, 46, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 58, 31), // "slotPeticionValoracionTerminada"
QT_MOC_LITERAL(6, 90, 31), // "slotDialogoValoracionFinalizado"
QT_MOC_LITERAL(7, 122, 20), // "slotDialogoCategoria"
QT_MOC_LITERAL(8, 143, 30), // "slotPeticionCategoriaTerminada"
QT_MOC_LITERAL(9, 174, 30), // "slotDialogoCategoriaFinalizado"
QT_MOC_LITERAL(10, 205, 19), // "slotDialogoArticulo"
QT_MOC_LITERAL(11, 225, 29), // "slotPeticionArticuloTerminada"
QT_MOC_LITERAL(12, 255, 18), // "slotDialogoMensaje"
QT_MOC_LITERAL(13, 274, 28) // "slotPeticionMensajeTerminada"

    },
    "MainWindow\0slotEjemplo\0\0slotDialogoValoracion\0"
    "QModelIndex\0slotPeticionValoracionTerminada\0"
    "slotDialogoValoracionFinalizado\0"
    "slotDialogoCategoria\0"
    "slotPeticionCategoriaTerminada\0"
    "slotDialogoCategoriaFinalizado\0"
    "slotDialogoArticulo\0slotPeticionArticuloTerminada\0"
    "slotDialogoMensaje\0slotPeticionMensajeTerminada"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    1,   70,    2, 0x0a /* Public */,
       5,    0,   73,    2, 0x0a /* Public */,
       6,    1,   74,    2, 0x0a /* Public */,
       7,    1,   77,    2, 0x0a /* Public */,
       8,    0,   80,    2, 0x0a /* Public */,
       9,    1,   81,    2, 0x0a /* Public */,
      10,    1,   84,    2, 0x0a /* Public */,
      11,    0,   87,    2, 0x0a /* Public */,
      12,    1,   88,    2, 0x0a /* Public */,
      13,    0,   91,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotEjemplo(); break;
        case 1: _t->slotDialogoValoracion((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->slotPeticionValoracionTerminada(); break;
        case 3: _t->slotDialogoValoracionFinalizado((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotDialogoCategoria((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->slotPeticionCategoriaTerminada(); break;
        case 6: _t->slotDialogoCategoriaFinalizado((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->slotDialogoArticulo((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->slotPeticionArticuloTerminada(); break;
        case 9: _t->slotDialogoMensaje((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->slotPeticionMensajeTerminada(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
