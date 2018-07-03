/****************************************************************************
** Meta object code from reading C++ file 'mintingview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/mintingview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mintingview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MintingView_t {
    QByteArrayData data[13];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MintingView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MintingView_t qt_meta_stringdata_MintingView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MintingView"
QT_MOC_LITERAL(1, 12, 13), // "exportClicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 21), // "chooseMintingInterval"
QT_MOC_LITERAL(4, 49, 3), // "idx"
QT_MOC_LITERAL(5, 53, 8), // "copyTxID"
QT_MOC_LITERAL(6, 62, 11), // "copyAddress"
QT_MOC_LITERAL(7, 74, 15), // "showHideAddress"
QT_MOC_LITERAL(8, 90, 12), // "showHideTxID"
QT_MOC_LITERAL(9, 103, 14), // "contextualMenu"
QT_MOC_LITERAL(10, 118, 5), // "point"
QT_MOC_LITERAL(11, 124, 13), // "changedPrefix"
QT_MOC_LITERAL(12, 138, 6) // "prefix"

    },
    "MintingView\0exportClicked\0\0"
    "chooseMintingInterval\0idx\0copyTxID\0"
    "copyAddress\0showHideAddress\0showHideTxID\0"
    "contextualMenu\0point\0changedPrefix\0"
    "prefix"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MintingView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    1,   55,    2, 0x0a /* Public */,
       5,    0,   58,    2, 0x0a /* Public */,
       6,    0,   59,    2, 0x0a /* Public */,
       7,    0,   60,    2, 0x0a /* Public */,
       8,    0,   61,    2, 0x0a /* Public */,
       9,    1,   62,    2, 0x0a /* Public */,
      11,    1,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   10,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void MintingView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MintingView *_t = static_cast<MintingView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->exportClicked(); break;
        case 1: _t->chooseMintingInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->copyTxID(); break;
        case 3: _t->copyAddress(); break;
        case 4: _t->showHideAddress(); break;
        case 5: _t->showHideTxID(); break;
        case 6: _t->contextualMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: _t->changedPrefix((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MintingView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MintingView.data,
      qt_meta_data_MintingView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MintingView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MintingView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MintingView.stringdata0))
        return static_cast<void*>(const_cast< MintingView*>(this));
    return QWidget::qt_metacast(_clname);
}

int MintingView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
