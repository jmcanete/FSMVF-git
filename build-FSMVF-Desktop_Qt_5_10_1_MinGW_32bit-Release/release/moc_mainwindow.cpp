/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FSMVF/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[26];
    char stringdata0[487];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "closeEvent"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "QCloseEvent*"
QT_MOC_LITERAL(4, 36, 5), // "event"
QT_MOC_LITERAL(5, 42, 11), // "log_to_file"
QT_MOC_LITERAL(6, 54, 14), // "connect_serial"
QT_MOC_LITERAL(7, 69, 17), // "check_serial_port"
QT_MOC_LITERAL(8, 87, 20), // "update_serial_status"
QT_MOC_LITERAL(9, 108, 17), // "update_freq_value"
QT_MOC_LITERAL(10, 126, 10), // "reset_lcds"
QT_MOC_LITERAL(11, 137, 16), // "read_serial_port"
QT_MOC_LITERAL(12, 154, 17), // "write_serial_port"
QT_MOC_LITERAL(13, 172, 23), // "on_reset_button_clicked"
QT_MOC_LITERAL(14, 196, 21), // "on_set_button_clicked"
QT_MOC_LITERAL(15, 218, 22), // "on_exit_button_clicked"
QT_MOC_LITERAL(16, 241, 24), // "on_checkBox_stateChanged"
QT_MOC_LITERAL(17, 266, 4), // "arg1"
QT_MOC_LITERAL(18, 271, 25), // "on_connect_button_clicked"
QT_MOC_LITERAL(19, 297, 26), // "on_send_cmd_button_clicked"
QT_MOC_LITERAL(20, 324, 27), // "on_reset_dds_button_clicked"
QT_MOC_LITERAL(21, 352, 24), // "on_ignite_button_clicked"
QT_MOC_LITERAL(22, 377, 23), // "on_spark_button_clicked"
QT_MOC_LITERAL(23, 401, 24), // "on_extend_button_clicked"
QT_MOC_LITERAL(24, 426, 26), // "on_contract_button_clicked"
QT_MOC_LITERAL(25, 453, 33) // "on_auto_ignite_check_stateCha..."

    },
    "MainWindow\0closeEvent\0\0QCloseEvent*\0"
    "event\0log_to_file\0connect_serial\0"
    "check_serial_port\0update_serial_status\0"
    "update_freq_value\0reset_lcds\0"
    "read_serial_port\0write_serial_port\0"
    "on_reset_button_clicked\0on_set_button_clicked\0"
    "on_exit_button_clicked\0on_checkBox_stateChanged\0"
    "arg1\0on_connect_button_clicked\0"
    "on_send_cmd_button_clicked\0"
    "on_reset_dds_button_clicked\0"
    "on_ignite_button_clicked\0"
    "on_spark_button_clicked\0"
    "on_extend_button_clicked\0"
    "on_contract_button_clicked\0"
    "on_auto_ignite_check_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x08 /* Private */,
       5,    0,  122,    2, 0x08 /* Private */,
       6,    0,  123,    2, 0x08 /* Private */,
       7,    0,  124,    2, 0x08 /* Private */,
       8,    0,  125,    2, 0x08 /* Private */,
       9,    1,  126,    2, 0x08 /* Private */,
      10,    0,  129,    2, 0x08 /* Private */,
      11,    0,  130,    2, 0x08 /* Private */,
      12,    1,  131,    2, 0x08 /* Private */,
      13,    0,  134,    2, 0x08 /* Private */,
      14,    0,  135,    2, 0x08 /* Private */,
      15,    0,  136,    2, 0x08 /* Private */,
      16,    1,  137,    2, 0x08 /* Private */,
      18,    0,  140,    2, 0x08 /* Private */,
      19,    0,  141,    2, 0x08 /* Private */,
      20,    0,  142,    2, 0x08 /* Private */,
      21,    0,  143,    2, 0x08 /* Private */,
      22,    0,  144,    2, 0x08 /* Private */,
      23,    0,  145,    2, 0x08 /* Private */,
      24,    0,  146,    2, 0x08 /* Private */,
      25,    1,  147,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 1: _t->log_to_file(); break;
        case 2: _t->connect_serial(); break;
        case 3: _t->check_serial_port(); break;
        case 4: _t->update_serial_status(); break;
        case 5: _t->update_freq_value((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->reset_lcds(); break;
        case 7: _t->read_serial_port(); break;
        case 8: _t->write_serial_port((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->on_reset_button_clicked(); break;
        case 10: _t->on_set_button_clicked(); break;
        case 11: _t->on_exit_button_clicked(); break;
        case 12: _t->on_checkBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_connect_button_clicked(); break;
        case 14: _t->on_send_cmd_button_clicked(); break;
        case 15: _t->on_reset_dds_button_clicked(); break;
        case 16: _t->on_ignite_button_clicked(); break;
        case 17: _t->on_spark_button_clicked(); break;
        case 18: _t->on_extend_button_clicked(); break;
        case 19: _t->on_contract_button_clicked(); break;
        case 20: _t->on_auto_ignite_check_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
