/****************************************************************************
** Meta object code from reading C++ file 'vehicledebugrefreshtimepage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehicledebugrefreshtimepage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehicledebugrefreshtimepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleDebugRefreshTimePage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x08,
      51,   28,   28,   28, 0x08,
      76,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleDebugRefreshTimePage[] = {
    "VehicleDebugRefreshTimePage\0\0"
    "on_btn_back_clicked()\0on_btn_prepage_clicked()\0"
    "on_btn_nextpage_clicked()\0"
};

void VehicleDebugRefreshTimePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VehicleDebugRefreshTimePage *_t = static_cast<VehicleDebugRefreshTimePage *>(_o);
        switch (_id) {
        case 0: _t->on_btn_back_clicked(); break;
        case 1: _t->on_btn_prepage_clicked(); break;
        case 2: _t->on_btn_nextpage_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VehicleDebugRefreshTimePage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VehicleDebugRefreshTimePage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleDebugRefreshTimePage,
      qt_meta_data_VehicleDebugRefreshTimePage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleDebugRefreshTimePage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleDebugRefreshTimePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleDebugRefreshTimePage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleDebugRefreshTimePage))
        return static_cast<void*>(const_cast< VehicleDebugRefreshTimePage*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleDebugRefreshTimePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
