/****************************************************************************
** Meta object code from reading C++ file 'overviewpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/overviewpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overviewpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OverviewPage_t {
    QByteArrayData data[24];
    char stringdata0[352];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OverviewPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OverviewPage_t qt_meta_stringdata_OverviewPage = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OverviewPage"
QT_MOC_LITERAL(1, 13, 18), // "transactionClicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "index"
QT_MOC_LITERAL(4, 39, 12), // "networkError"
QT_MOC_LITERAL(5, 52, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(6, 80, 3), // "err"
QT_MOC_LITERAL(7, 84, 10), // "setBalance"
QT_MOC_LITERAL(8, 95, 7), // "balance"
QT_MOC_LITERAL(9, 103, 13), // "lockedbalance"
QT_MOC_LITERAL(10, 117, 5), // "stake"
QT_MOC_LITERAL(11, 123, 18), // "unconfirmedBalance"
QT_MOC_LITERAL(12, 142, 15), // "immatureBalance"
QT_MOC_LITERAL(13, 158, 16), // "watchOnlyBalance"
QT_MOC_LITERAL(14, 175, 18), // "watchUnconfBalance"
QT_MOC_LITERAL(15, 194, 20), // "watchImmatureBalance"
QT_MOC_LITERAL(16, 215, 20), // "parseNetworkResponse"
QT_MOC_LITERAL(17, 236, 14), // "QNetworkReply*"
QT_MOC_LITERAL(18, 251, 8), // "finished"
QT_MOC_LITERAL(19, 260, 12), // "PriceRequest"
QT_MOC_LITERAL(20, 273, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(21, 291, 24), // "handleTransactionClicked"
QT_MOC_LITERAL(22, 316, 21), // "updateWatchOnlyLabels"
QT_MOC_LITERAL(23, 338, 13) // "showWatchOnly"

    },
    "OverviewPage\0transactionClicked\0\0index\0"
    "networkError\0QNetworkReply::NetworkError\0"
    "err\0setBalance\0balance\0lockedbalance\0"
    "stake\0unconfirmedBalance\0immatureBalance\0"
    "watchOnlyBalance\0watchUnconfBalance\0"
    "watchImmatureBalance\0parseNetworkResponse\0"
    "QNetworkReply*\0finished\0PriceRequest\0"
    "updateDisplayUnit\0handleTransactionClicked\0"
    "updateWatchOnlyLabels\0showWatchOnly"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OverviewPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    8,   60,    2, 0x0a /* Public */,
      16,    1,   77,    2, 0x0a /* Public */,
      19,    0,   80,    2, 0x0a /* Public */,
      20,    0,   81,    2, 0x08 /* Private */,
      21,    1,   82,    2, 0x08 /* Private */,
      22,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong,    8,    9,   10,   11,   12,   13,   14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::Bool,   23,

       0        // eod
};

void OverviewPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OverviewPage *_t = static_cast<OverviewPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->transactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->networkError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 2: _t->setBalance((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])),(*reinterpret_cast< qint64(*)>(_a[4])),(*reinterpret_cast< qint64(*)>(_a[5])),(*reinterpret_cast< qint64(*)>(_a[6])),(*reinterpret_cast< qint64(*)>(_a[7])),(*reinterpret_cast< qint64(*)>(_a[8]))); break;
        case 3: _t->parseNetworkResponse((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: _t->PriceRequest(); break;
        case 5: _t->updateDisplayUnit(); break;
        case 6: _t->handleTransactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->updateWatchOnlyLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OverviewPage::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverviewPage::transactionClicked)) {
                *result = 0;
            }
        }
        {
            typedef void (OverviewPage::*_t)(QNetworkReply::NetworkError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverviewPage::networkError)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OverviewPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OverviewPage.data,
      qt_meta_data_OverviewPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OverviewPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OverviewPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OverviewPage.stringdata0))
        return static_cast<void*>(const_cast< OverviewPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int OverviewPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void OverviewPage::transactionClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OverviewPage::networkError(QNetworkReply::NetworkError _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
