/****************************************************************************
** Meta object code from reading C++ file 'AnalysisModule.h'
**
** Created: Sat May 19 14:40:29 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../source/include/AnalysisModule.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AnalysisModule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AnalysisModule[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   16,   15,   15, 0x05,
      50,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      61,   16,   15,   15, 0x0a,
      94,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AnalysisModule[] = {
    "AnalysisModule\0\0type,message\0"
    "log(QString,QString)\0finished()\0"
    "RedirectMessage(QString,QString)\0"
    "Stop()\0"
};

const QMetaObject AnalysisModule::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_AnalysisModule,
      qt_meta_data_AnalysisModule, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AnalysisModule::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AnalysisModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AnalysisModule::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AnalysisModule))
        return static_cast<void*>(const_cast< AnalysisModule*>(this));
    return QThread::qt_metacast(_clname);
}

int AnalysisModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: log((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: finished(); break;
        case 2: RedirectMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: Stop(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void AnalysisModule::log(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AnalysisModule::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE