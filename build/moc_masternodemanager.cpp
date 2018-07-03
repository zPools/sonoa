/****************************************************************************
** Meta object code from reading C++ file 'masternodemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/masternodemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'masternodemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MasternodeManager_t {
    QByteArrayData data[17];
    char stringdata0[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MasternodeManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MasternodeManager_t qt_meta_stringdata_MasternodeManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MasternodeManager"
QT_MOC_LITERAL(1, 18, 14), // "updateNodeList"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 20), // "updateAdrenalineNode"
QT_MOC_LITERAL(4, 55, 5), // "alias"
QT_MOC_LITERAL(5, 61, 4), // "addr"
QT_MOC_LITERAL(6, 66, 7), // "privkey"
QT_MOC_LITERAL(7, 74, 28), // "on_copyAddressButton_clicked"
QT_MOC_LITERAL(8, 103, 23), // "on_createButton_clicked"
QT_MOC_LITERAL(9, 127, 21), // "on_editButton_clicked"
QT_MOC_LITERAL(10, 149, 26), // "on_getConfigButton_clicked"
QT_MOC_LITERAL(11, 176, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(12, 199, 21), // "on_stopButton_clicked"
QT_MOC_LITERAL(13, 221, 25), // "on_startAllButton_clicked"
QT_MOC_LITERAL(14, 247, 24), // "on_stopAllButton_clicked"
QT_MOC_LITERAL(15, 272, 23), // "on_removeButton_clicked"
QT_MOC_LITERAL(16, 296, 37) // "on_tableWidget_2_itemSelectio..."

    },
    "MasternodeManager\0updateNodeList\0\0"
    "updateAdrenalineNode\0alias\0addr\0privkey\0"
    "on_copyAddressButton_clicked\0"
    "on_createButton_clicked\0on_editButton_clicked\0"
    "on_getConfigButton_clicked\0"
    "on_startButton_clicked\0on_stopButton_clicked\0"
    "on_startAllButton_clicked\0"
    "on_stopAllButton_clicked\0"
    "on_removeButton_clicked\0"
    "on_tableWidget_2_itemSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MasternodeManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    3,   75,    2, 0x0a /* Public */,
       7,    0,   82,    2, 0x08 /* Private */,
       8,    0,   83,    2, 0x08 /* Private */,
       9,    0,   84,    2, 0x08 /* Private */,
      10,    0,   85,    2, 0x08 /* Private */,
      11,    0,   86,    2, 0x08 /* Private */,
      12,    0,   87,    2, 0x08 /* Private */,
      13,    0,   88,    2, 0x08 /* Private */,
      14,    0,   89,    2, 0x08 /* Private */,
      15,    0,   90,    2, 0x08 /* Private */,
      16,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,    5,    6,
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

       0        // eod
};

void MasternodeManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MasternodeManager *_t = static_cast<MasternodeManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateNodeList(); break;
        case 1: _t->updateAdrenalineNode((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->on_copyAddressButton_clicked(); break;
        case 3: _t->on_createButton_clicked(); break;
        case 4: _t->on_editButton_clicked(); break;
        case 5: _t->on_getConfigButton_clicked(); break;
        case 6: _t->on_startButton_clicked(); break;
        case 7: _t->on_stopButton_clicked(); break;
        case 8: _t->on_startAllButton_clicked(); break;
        case 9: _t->on_stopAllButton_clicked(); break;
        case 10: _t->on_removeButton_clicked(); break;
        case 11: _t->on_tableWidget_2_itemSelectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObject MasternodeManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MasternodeManager.data,
      qt_meta_data_MasternodeManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MasternodeManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasternodeManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MasternodeManager.stringdata0))
        return static_cast<void*>(const_cast< MasternodeManager*>(this));
    return QWidget::qt_metacast(_clname);
}

int MasternodeManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
