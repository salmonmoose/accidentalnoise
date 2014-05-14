/****************************************************************************
** Meta object code from reading C++ file 'accidentalnoisesequence.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "accidentalnoisesequence.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accidentalnoisesequence.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AccidentalNoiseSequence_t {
    QByteArrayData data[10];
    char stringdata[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AccidentalNoiseSequence_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AccidentalNoiseSequence_t qt_meta_stringdata_AccidentalNoiseSequence = {
    {
QT_MOC_LITERAL(0, 0, 23),
QT_MOC_LITERAL(1, 24, 15),
QT_MOC_LITERAL(2, 40, 0),
QT_MOC_LITERAL(3, 41, 20),
QT_MOC_LITERAL(4, 62, 5),
QT_MOC_LITERAL(5, 68, 17),
QT_MOC_LITERAL(6, 86, 19),
QT_MOC_LITERAL(7, 106, 11),
QT_MOC_LITERAL(8, 118, 4),
QT_MOC_LITERAL(9, 123, 4)
    },
    "AccidentalNoiseSequence\0getLayerOptions\0"
    "\0getLayerDoubleInputs\0layer\0"
    "getLayerIntInputs\0getLayerNoiseInputs\0"
    "createLayer\0type\0name\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccidentalNoiseSequence[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x02,
       3,    1,   40,    2, 0x02,
       5,    1,   43,    2, 0x02,
       6,    1,   46,    2, 0x02,
       7,    2,   49,    2, 0x02,

 // methods: parameters
    QMetaType::QStringList,
    QMetaType::QStringList, QMetaType::QString,    4,
    QMetaType::QStringList, QMetaType::QString,    4,
    QMetaType::QStringList, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,

       0        // eod
};

void AccidentalNoiseSequence::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AccidentalNoiseSequence *_t = static_cast<AccidentalNoiseSequence *>(_o);
        switch (_id) {
        case 0: { QStringList _r = _t->getLayerOptions();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 1: { QStringList _r = _t->getLayerDoubleInputs((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 2: { QStringList _r = _t->getLayerIntInputs((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 3: { QStringList _r = _t->getLayerNoiseInputs((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 4: _t->createLayer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject AccidentalNoiseSequence::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AccidentalNoiseSequence.data,
      qt_meta_data_AccidentalNoiseSequence,  qt_static_metacall, 0, 0}
};


const QMetaObject *AccidentalNoiseSequence::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccidentalNoiseSequence::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AccidentalNoiseSequence.stringdata))
        return static_cast<void*>(const_cast< AccidentalNoiseSequence*>(this));
    return QObject::qt_metacast(_clname);
}

int AccidentalNoiseSequence::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
