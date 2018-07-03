/****************************************************************************
** Meta object code from reading C++ file 'marketbrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/marketbrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'marketbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MarketBrowser_t {
    QByteArrayData data[10];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MarketBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MarketBrowser_t qt_meta_stringdata_MarketBrowser = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MarketBrowser"
QT_MOC_LITERAL(1, 14, 12), // "networkError"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(4, 56, 3), // "err"
QT_MOC_LITERAL(5, 60, 20), // "parseNetworkResponse"
QT_MOC_LITERAL(6, 81, 14), // "QNetworkReply*"
QT_MOC_LITERAL(7, 96, 8), // "finished"
QT_MOC_LITERAL(8, 105, 8), // "requests"
QT_MOC_LITERAL(9, 114, 6) // "update"

    },
    "MarketBrowser\0networkError\0\0"
    "QNetworkReply::NetworkError\0err\0"
    "parseNetworkResponse\0QNetworkReply*\0"
    "finished\0requests\0update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MarketBrowser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   37,    2, 0x0a /* Public */,
       8,    0,   40,    2, 0x0a /* Public */,
       9,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MarketBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MarketBrowser *_t = static_cast<MarketBrowser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->networkError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 1: _t->parseNetworkResponse((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->requests(); break;
        case 3: _t->update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 1:
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
            typedef void (MarketBrowser::*_t)(QNetworkReply::NetworkError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MarketBrowser::networkError)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject MarketBrowser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MarketBrowser.data,
      qt_meta_data_MarketBrowser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MarketBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MarketBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MarketBrowser.stringdata0))
        return static_cast<void*>(const_cast< MarketBrowser*>(this));
    return QWidget::qt_metacast(_clname);
}

int MarketBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MarketBrowser::networkError(QNetworkReply::NetworkError _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
