/****************************************************************************
** Meta object code from reading C++ file 'addrecipe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GUI/addrecipe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addrecipe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddRecipe_t {
    QByteArrayData data[16];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddRecipe_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddRecipe_t qt_meta_stringdata_AddRecipe = {
    {
QT_MOC_LITERAL(0, 0, 9), // "AddRecipe"
QT_MOC_LITERAL(1, 10, 11), // "firstWindow"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 10), // "showWindow"
QT_MOC_LITERAL(4, 34, 10), // "showRecipe"
QT_MOC_LITERAL(5, 45, 12), // "showMyRecipe"
QT_MOC_LITERAL(6, 58, 14), // "showMyFavorite"
QT_MOC_LITERAL(7, 73, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(8, 95, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(9, 119, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(10, 143, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(11, 167, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(12, 191, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(13, 215, 23), // "on_pushButton_9_clicked"
QT_MOC_LITERAL(14, 239, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(15, 263, 23) // "on_pushButton_7_clicked"

    },
    "AddRecipe\0firstWindow\0\0showWindow\0"
    "showRecipe\0showMyRecipe\0showMyFavorite\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_6_clicked\0on_pushButton_8_clicked\0"
    "on_pushButton_9_clicked\0on_pushButton_5_clicked\0"
    "on_pushButton_7_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddRecipe[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    0,   86,    2, 0x06 /* Public */,
       5,    0,   87,    2, 0x06 /* Public */,
       6,    0,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

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

       0        // eod
};

void AddRecipe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddRecipe *_t = static_cast<AddRecipe *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->firstWindow(); break;
        case 1: _t->showWindow(); break;
        case 2: _t->showRecipe(); break;
        case 3: _t->showMyRecipe(); break;
        case 4: _t->showMyFavorite(); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_pushButton_2_clicked(); break;
        case 7: _t->on_pushButton_3_clicked(); break;
        case 8: _t->on_pushButton_4_clicked(); break;
        case 9: _t->on_pushButton_6_clicked(); break;
        case 10: _t->on_pushButton_8_clicked(); break;
        case 11: _t->on_pushButton_9_clicked(); break;
        case 12: _t->on_pushButton_5_clicked(); break;
        case 13: _t->on_pushButton_7_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AddRecipe::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddRecipe::firstWindow)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AddRecipe::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddRecipe::showWindow)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AddRecipe::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddRecipe::showRecipe)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AddRecipe::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddRecipe::showMyRecipe)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (AddRecipe::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddRecipe::showMyFavorite)) {
                *result = 4;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AddRecipe::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AddRecipe.data,
      qt_meta_data_AddRecipe,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddRecipe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddRecipe::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddRecipe.stringdata0))
        return static_cast<void*>(const_cast< AddRecipe*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int AddRecipe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void AddRecipe::firstWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void AddRecipe::showWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void AddRecipe::showRecipe()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void AddRecipe::showMyRecipe()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void AddRecipe::showMyFavorite()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
