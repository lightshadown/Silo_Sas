/****************************************************************************
** Meta object code from reading C++ file 'Pantalla_Principal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Pantalla_Principal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Pantalla_Principal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Silo_t {
    QByteArrayData data[17];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Silo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Silo_t qt_meta_stringdata_Silo = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Silo"
QT_MOC_LITERAL(1, 5, 5), // "About"
QT_MOC_LITERAL(2, 11, 0), // ""
QT_MOC_LITERAL(3, 12, 5), // "C_Ent"
QT_MOC_LITERAL(4, 18, 5), // "C_Sal"
QT_MOC_LITERAL(5, 24, 5), // "C_Ade"
QT_MOC_LITERAL(6, 30, 5), // "C_Pro"
QT_MOC_LITERAL(7, 36, 6), // "C_Comp"
QT_MOC_LITERAL(8, 43, 10), // "Puerto_USB"
QT_MOC_LITERAL(9, 54, 5), // "Salir"
QT_MOC_LITERAL(10, 60, 9), // "Productor"
QT_MOC_LITERAL(11, 70, 13), // "Productor_New"
QT_MOC_LITERAL(12, 84, 11), // "TablaRegInd"
QT_MOC_LITERAL(13, 96, 11), // "TablaRegGen"
QT_MOC_LITERAL(14, 108, 7), // "mostrar"
QT_MOC_LITERAL(15, 116, 4), // "fila"
QT_MOC_LITERAL(16, 121, 7) // "columna"

    },
    "Silo\0About\0\0C_Ent\0C_Sal\0C_Ade\0C_Pro\0"
    "C_Comp\0Puerto_USB\0Salir\0Productor\0"
    "Productor_New\0TablaRegInd\0TablaRegGen\0"
    "mostrar\0fila\0columna"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Silo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x0a /* Public */,
       8,    0,   85,    2, 0x0a /* Public */,
       9,    0,   86,    2, 0x0a /* Public */,
      10,    0,   87,    2, 0x0a /* Public */,
      11,    0,   88,    2, 0x0a /* Public */,
      12,    0,   89,    2, 0x0a /* Public */,
      13,    0,   90,    2, 0x0a /* Public */,
      14,    2,   91,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,

       0        // eod
};

void Silo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Silo *_t = static_cast<Silo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->About(); break;
        case 1: _t->C_Ent(); break;
        case 2: _t->C_Sal(); break;
        case 3: _t->C_Ade(); break;
        case 4: _t->C_Pro(); break;
        case 5: _t->C_Comp(); break;
        case 6: _t->Puerto_USB(); break;
        case 7: _t->Salir(); break;
        case 8: _t->Productor(); break;
        case 9: _t->Productor_New(); break;
        case 10: _t->TablaRegInd(); break;
        case 11: _t->TablaRegGen(); break;
        case 12: _t->mostrar((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Silo::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Silo.data,
      qt_meta_data_Silo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Silo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Silo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Silo.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Silo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
