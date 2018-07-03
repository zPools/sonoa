/****************************************************************************
** Meta object code from reading C++ file 'bitcoingui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/bitcoingui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitcoingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ActiveLabel_t {
    QByteArrayData data[3];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActiveLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActiveLabel_t qt_meta_stringdata_ActiveLabel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ActiveLabel"
QT_MOC_LITERAL(1, 12, 7), // "clicked"
QT_MOC_LITERAL(2, 20, 0) // ""

    },
    "ActiveLabel\0clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActiveLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void ActiveLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ActiveLabel *_t = static_cast<ActiveLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ActiveLabel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ActiveLabel::clicked)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ActiveLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_ActiveLabel.data,
      qt_meta_data_ActiveLabel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ActiveLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActiveLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ActiveLabel.stringdata0))
        return static_cast<void*>(const_cast< ActiveLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int ActiveLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ActiveLabel::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_BitcoinGUI_t {
    QByteArrayData data[64];
    char stringdata0[898];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BitcoinGUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BitcoinGUI_t qt_meta_stringdata_BitcoinGUI = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BitcoinGUI"
QT_MOC_LITERAL(1, 11, 17), // "setNumConnections"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "count"
QT_MOC_LITERAL(4, 36, 12), // "setNumBlocks"
QT_MOC_LITERAL(5, 49, 12), // "nTotalBlocks"
QT_MOC_LITERAL(6, 62, 19), // "setEncryptionStatus"
QT_MOC_LITERAL(7, 82, 6), // "status"
QT_MOC_LITERAL(8, 89, 5), // "error"
QT_MOC_LITERAL(9, 95, 5), // "title"
QT_MOC_LITERAL(10, 101, 7), // "message"
QT_MOC_LITERAL(11, 109, 5), // "modal"
QT_MOC_LITERAL(12, 115, 6), // "askFee"
QT_MOC_LITERAL(13, 122, 12), // "nFeeRequired"
QT_MOC_LITERAL(14, 135, 5), // "bool*"
QT_MOC_LITERAL(15, 141, 6), // "payFee"
QT_MOC_LITERAL(16, 148, 9), // "handleURI"
QT_MOC_LITERAL(17, 158, 6), // "strURI"
QT_MOC_LITERAL(18, 165, 22), // "mainToolbarOrientation"
QT_MOC_LITERAL(19, 188, 15), // "Qt::Orientation"
QT_MOC_LITERAL(20, 204, 11), // "orientation"
QT_MOC_LITERAL(21, 216, 27), // "secondaryToolbarOrientation"
QT_MOC_LITERAL(22, 244, 16), // "gotoMultisigPage"
QT_MOC_LITERAL(23, 261, 16), // "gotoOverviewPage"
QT_MOC_LITERAL(24, 278, 18), // "gotoStatisticsPage"
QT_MOC_LITERAL(25, 297, 16), // "gotoBlockBrowser"
QT_MOC_LITERAL(26, 314, 17), // "gotoMarketBrowser"
QT_MOC_LITERAL(27, 332, 15), // "gotoMintingPage"
QT_MOC_LITERAL(28, 348, 15), // "gotoHistoryPage"
QT_MOC_LITERAL(29, 364, 19), // "gotoAddressBookPage"
QT_MOC_LITERAL(30, 384, 20), // "gotoReceiveCoinsPage"
QT_MOC_LITERAL(31, 405, 17), // "gotoSendCoinsPage"
QT_MOC_LITERAL(32, 423, 15), // "gotoMessagePage"
QT_MOC_LITERAL(33, 439, 25), // "gotoMasternodeManagerPage"
QT_MOC_LITERAL(34, 465, 20), // "gotoProofOfImagePage"
QT_MOC_LITERAL(35, 486, 18), // "gotoSignMessageTab"
QT_MOC_LITERAL(36, 505, 4), // "addr"
QT_MOC_LITERAL(37, 510, 20), // "gotoVerifyMessageTab"
QT_MOC_LITERAL(38, 531, 15), // "showDebugWindow"
QT_MOC_LITERAL(39, 547, 8), // "showInfo"
QT_MOC_LITERAL(40, 556, 11), // "showConsole"
QT_MOC_LITERAL(41, 568, 9), // "showGraph"
QT_MOC_LITERAL(42, 578, 14), // "showConfEditor"
QT_MOC_LITERAL(43, 593, 16), // "showMNConfEditor"
QT_MOC_LITERAL(44, 610, 14), // "optionsClicked"
QT_MOC_LITERAL(45, 625, 12), // "aboutClicked"
QT_MOC_LITERAL(46, 638, 17), // "trayIconActivated"
QT_MOC_LITERAL(47, 656, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(48, 690, 6), // "reason"
QT_MOC_LITERAL(49, 697, 19), // "incomingTransaction"
QT_MOC_LITERAL(50, 717, 6), // "parent"
QT_MOC_LITERAL(51, 724, 5), // "start"
QT_MOC_LITERAL(52, 730, 3), // "end"
QT_MOC_LITERAL(53, 734, 15), // "incomingMessage"
QT_MOC_LITERAL(54, 750, 13), // "encryptWallet"
QT_MOC_LITERAL(55, 764, 12), // "backupWallet"
QT_MOC_LITERAL(56, 777, 16), // "changePassphrase"
QT_MOC_LITERAL(57, 794, 12), // "unlockWallet"
QT_MOC_LITERAL(58, 807, 10), // "lockWallet"
QT_MOC_LITERAL(59, 818, 21), // "showNormalIfMinimized"
QT_MOC_LITERAL(60, 840, 13), // "fToggleHidden"
QT_MOC_LITERAL(61, 854, 12), // "toggleHidden"
QT_MOC_LITERAL(62, 867, 12), // "updateWeight"
QT_MOC_LITERAL(63, 880, 17) // "updateStakingIcon"

    },
    "BitcoinGUI\0setNumConnections\0\0count\0"
    "setNumBlocks\0nTotalBlocks\0setEncryptionStatus\0"
    "status\0error\0title\0message\0modal\0"
    "askFee\0nFeeRequired\0bool*\0payFee\0"
    "handleURI\0strURI\0mainToolbarOrientation\0"
    "Qt::Orientation\0orientation\0"
    "secondaryToolbarOrientation\0"
    "gotoMultisigPage\0gotoOverviewPage\0"
    "gotoStatisticsPage\0gotoBlockBrowser\0"
    "gotoMarketBrowser\0gotoMintingPage\0"
    "gotoHistoryPage\0gotoAddressBookPage\0"
    "gotoReceiveCoinsPage\0gotoSendCoinsPage\0"
    "gotoMessagePage\0gotoMasternodeManagerPage\0"
    "gotoProofOfImagePage\0gotoSignMessageTab\0"
    "addr\0gotoVerifyMessageTab\0showDebugWindow\0"
    "showInfo\0showConsole\0showGraph\0"
    "showConfEditor\0showMNConfEditor\0"
    "optionsClicked\0aboutClicked\0"
    "trayIconActivated\0QSystemTrayIcon::ActivationReason\0"
    "reason\0incomingTransaction\0parent\0"
    "start\0end\0incomingMessage\0encryptWallet\0"
    "backupWallet\0changePassphrase\0"
    "unlockWallet\0lockWallet\0showNormalIfMinimized\0"
    "fToggleHidden\0toggleHidden\0updateWeight\0"
    "updateStakingIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BitcoinGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  244,    2, 0x0a /* Public */,
       4,    2,  247,    2, 0x0a /* Public */,
       6,    1,  252,    2, 0x0a /* Public */,
       8,    3,  255,    2, 0x0a /* Public */,
      12,    2,  262,    2, 0x0a /* Public */,
      16,    1,  267,    2, 0x0a /* Public */,
      18,    1,  270,    2, 0x0a /* Public */,
      21,    1,  273,    2, 0x0a /* Public */,
      22,    0,  276,    2, 0x0a /* Public */,
      23,    0,  277,    2, 0x08 /* Private */,
      24,    0,  278,    2, 0x08 /* Private */,
      25,    0,  279,    2, 0x08 /* Private */,
      26,    0,  280,    2, 0x08 /* Private */,
      27,    0,  281,    2, 0x08 /* Private */,
      28,    0,  282,    2, 0x08 /* Private */,
      29,    0,  283,    2, 0x08 /* Private */,
      30,    0,  284,    2, 0x08 /* Private */,
      31,    0,  285,    2, 0x08 /* Private */,
      32,    0,  286,    2, 0x08 /* Private */,
      33,    0,  287,    2, 0x08 /* Private */,
      34,    0,  288,    2, 0x08 /* Private */,
      35,    1,  289,    2, 0x08 /* Private */,
      35,    0,  292,    2, 0x28 /* Private | MethodCloned */,
      37,    1,  293,    2, 0x08 /* Private */,
      37,    0,  296,    2, 0x28 /* Private | MethodCloned */,
      38,    0,  297,    2, 0x08 /* Private */,
      39,    0,  298,    2, 0x08 /* Private */,
      40,    0,  299,    2, 0x08 /* Private */,
      41,    0,  300,    2, 0x08 /* Private */,
      42,    0,  301,    2, 0x08 /* Private */,
      43,    0,  302,    2, 0x08 /* Private */,
      44,    0,  303,    2, 0x08 /* Private */,
      45,    0,  304,    2, 0x08 /* Private */,
      46,    1,  305,    2, 0x08 /* Private */,
      49,    3,  308,    2, 0x08 /* Private */,
      53,    3,  315,    2, 0x08 /* Private */,
      54,    1,  322,    2, 0x08 /* Private */,
      55,    0,  325,    2, 0x08 /* Private */,
      56,    0,  326,    2, 0x08 /* Private */,
      57,    0,  327,    2, 0x08 /* Private */,
      58,    0,  328,    2, 0x08 /* Private */,
      59,    1,  329,    2, 0x08 /* Private */,
      59,    0,  332,    2, 0x28 /* Private | MethodCloned */,
      61,    0,  333,    2, 0x08 /* Private */,
      62,    0,  334,    2, 0x08 /* Private */,
      63,    0,  335,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    9,   10,   11,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 14,   13,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 19,   20,
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
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   50,   51,   52,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   50,   51,   52,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   60,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BitcoinGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BitcoinGUI *_t = static_cast<BitcoinGUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setEncryptionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->askFee((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 5: _t->handleURI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->mainToolbarOrientation((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        case 7: _t->secondaryToolbarOrientation((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        case 8: _t->gotoMultisigPage(); break;
        case 9: _t->gotoOverviewPage(); break;
        case 10: _t->gotoStatisticsPage(); break;
        case 11: _t->gotoBlockBrowser(); break;
        case 12: _t->gotoMarketBrowser(); break;
        case 13: _t->gotoMintingPage(); break;
        case 14: _t->gotoHistoryPage(); break;
        case 15: _t->gotoAddressBookPage(); break;
        case 16: _t->gotoReceiveCoinsPage(); break;
        case 17: _t->gotoSendCoinsPage(); break;
        case 18: _t->gotoMessagePage(); break;
        case 19: _t->gotoMasternodeManagerPage(); break;
        case 20: _t->gotoProofOfImagePage(); break;
        case 21: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->gotoSignMessageTab(); break;
        case 23: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->gotoVerifyMessageTab(); break;
        case 25: _t->showDebugWindow(); break;
        case 26: _t->showInfo(); break;
        case 27: _t->showConsole(); break;
        case 28: _t->showGraph(); break;
        case 29: _t->showConfEditor(); break;
        case 30: _t->showMNConfEditor(); break;
        case 31: _t->optionsClicked(); break;
        case 32: _t->aboutClicked(); break;
        case 33: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 34: _t->incomingTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 35: _t->incomingMessage((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 36: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->backupWallet(); break;
        case 38: _t->changePassphrase(); break;
        case 39: _t->unlockWallet(); break;
        case 40: _t->lockWallet(); break;
        case 41: _t->showNormalIfMinimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->showNormalIfMinimized(); break;
        case 43: _t->toggleHidden(); break;
        case 44: _t->updateWeight(); break;
        case 45: _t->updateStakingIcon(); break;
        default: ;
        }
    }
}

const QMetaObject BitcoinGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BitcoinGUI.data,
      qt_meta_data_BitcoinGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BitcoinGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BitcoinGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BitcoinGUI.stringdata0))
        return static_cast<void*>(const_cast< BitcoinGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BitcoinGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 46;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
