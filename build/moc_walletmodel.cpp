/****************************************************************************
** Meta object code from reading C++ file 'walletmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/walletmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletModel_t {
    QByteArrayData data[31];
    char stringdata0[400];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletModel_t qt_meta_stringdata_WalletModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WalletModel"
QT_MOC_LITERAL(1, 12, 14), // "balanceChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "balance"
QT_MOC_LITERAL(4, 36, 13), // "lockedbalance"
QT_MOC_LITERAL(5, 50, 5), // "stake"
QT_MOC_LITERAL(6, 56, 18), // "unconfirmedBalance"
QT_MOC_LITERAL(7, 75, 15), // "immatureBalance"
QT_MOC_LITERAL(8, 91, 16), // "watchOnlyBalance"
QT_MOC_LITERAL(9, 108, 18), // "watchUnconfBalance"
QT_MOC_LITERAL(10, 127, 20), // "watchImmatureBalance"
QT_MOC_LITERAL(11, 148, 22), // "numTransactionsChanged"
QT_MOC_LITERAL(12, 171, 5), // "count"
QT_MOC_LITERAL(13, 177, 23), // "encryptionStatusChanged"
QT_MOC_LITERAL(14, 201, 6), // "status"
QT_MOC_LITERAL(15, 208, 22), // "notifyWatchonlyChanged"
QT_MOC_LITERAL(16, 231, 14), // "fHaveWatchonly"
QT_MOC_LITERAL(17, 246, 13), // "requireUnlock"
QT_MOC_LITERAL(18, 260, 5), // "error"
QT_MOC_LITERAL(19, 266, 5), // "title"
QT_MOC_LITERAL(20, 272, 7), // "message"
QT_MOC_LITERAL(21, 280, 5), // "modal"
QT_MOC_LITERAL(22, 286, 12), // "updateStatus"
QT_MOC_LITERAL(23, 299, 17), // "updateTransaction"
QT_MOC_LITERAL(24, 317, 4), // "hash"
QT_MOC_LITERAL(25, 322, 17), // "updateAddressBook"
QT_MOC_LITERAL(26, 340, 7), // "address"
QT_MOC_LITERAL(27, 348, 5), // "label"
QT_MOC_LITERAL(28, 354, 6), // "isMine"
QT_MOC_LITERAL(29, 361, 18), // "pollBalanceChanged"
QT_MOC_LITERAL(30, 380, 19) // "updateWatchOnlyFlag"

    },
    "WalletModel\0balanceChanged\0\0balance\0"
    "lockedbalance\0stake\0unconfirmedBalance\0"
    "immatureBalance\0watchOnlyBalance\0"
    "watchUnconfBalance\0watchImmatureBalance\0"
    "numTransactionsChanged\0count\0"
    "encryptionStatusChanged\0status\0"
    "notifyWatchonlyChanged\0fHaveWatchonly\0"
    "requireUnlock\0error\0title\0message\0"
    "modal\0updateStatus\0updateTransaction\0"
    "hash\0updateAddressBook\0address\0label\0"
    "isMine\0pollBalanceChanged\0updateWatchOnlyFlag"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    8,   69,    2, 0x06 /* Public */,
      11,    1,   86,    2, 0x06 /* Public */,
      13,    1,   89,    2, 0x06 /* Public */,
      15,    1,   92,    2, 0x06 /* Public */,
      17,    0,   95,    2, 0x06 /* Public */,
      18,    3,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    0,  103,    2, 0x0a /* Public */,
      23,    2,  104,    2, 0x0a /* Public */,
      25,    4,  109,    2, 0x0a /* Public */,
      29,    0,  118,    2, 0x0a /* Public */,
      30,    1,  119,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong,    3,    4,    5,    6,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   19,   20,   21,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   24,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::Int,   26,   27,   28,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,

       0        // eod
};

void WalletModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletModel *_t = static_cast<WalletModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->balanceChanged((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])),(*reinterpret_cast< qint64(*)>(_a[4])),(*reinterpret_cast< qint64(*)>(_a[5])),(*reinterpret_cast< qint64(*)>(_a[6])),(*reinterpret_cast< qint64(*)>(_a[7])),(*reinterpret_cast< qint64(*)>(_a[8]))); break;
        case 1: _t->numTransactionsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->encryptionStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->notifyWatchonlyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->requireUnlock(); break;
        case 5: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 6: _t->updateStatus(); break;
        case 7: _t->updateTransaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->updateAddressBook((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 9: _t->pollBalanceChanged(); break;
        case 10: _t->updateWatchOnlyFlag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WalletModel::*_t)(qint64 , qint64 , qint64 , qint64 , qint64 , qint64 , qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletModel::balanceChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (WalletModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletModel::numTransactionsChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (WalletModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletModel::encryptionStatusChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (WalletModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletModel::notifyWatchonlyChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (WalletModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletModel::requireUnlock)) {
                *result = 4;
            }
        }
        {
            typedef void (WalletModel::*_t)(const QString & , const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletModel::error)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject WalletModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletModel.data,
      qt_meta_data_WalletModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletModel.stringdata0))
        return static_cast<void*>(const_cast< WalletModel*>(this));
    return QObject::qt_metacast(_clname);
}

int WalletModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void WalletModel::balanceChanged(qint64 _t1, qint64 _t2, qint64 _t3, qint64 _t4, qint64 _t5, qint64 _t6, qint64 _t7, qint64 _t8)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletModel::numTransactionsChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WalletModel::encryptionStatusChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WalletModel::notifyWatchonlyChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WalletModel::requireUnlock()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void WalletModel::error(const QString & _t1, const QString & _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
