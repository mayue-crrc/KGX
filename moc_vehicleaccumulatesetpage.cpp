/****************************************************************************
** Meta object code from reading C++ file 'vehicleaccumulatesetpage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehicleaccumulatesetpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehicleaccumulatesetpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleAccumulateSetPage[] = {

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
      26,   25,   25,   25, 0x08,
      48,   25,   25,   25, 0x08,
      87,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleAccumulateSetPage[] = {
    "VehicleAccumulateSetPage\0\0"
    "on_btn_back_clicked()\0"
    "on_btn_accumulateMileConfirm_clicked()\0"
    "on_btn_accumulateMile_clicked()\0"
};

void VehicleAccumulateSetPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VehicleAccumulateSetPage *_t = static_cast<VehicleAccumulateSetPage *>(_o);
        switch (_id) {
        case 0: _t->on_btn_back_clicked(); break;
        case 1: _t->on_btn_accumulateMileConfirm_clicked(); break;
        case 2: _t->on_btn_accumulateMile_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VehicleAccumulateSetPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VehicleAccumulateSetPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleAccumulateSetPage,
      qt_meta_data_VehicleAccumulateSetPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleAccumulateSetPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleAccumulateSetPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleAccumulateSetPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleAccumulateSetPage))
        return static_cast<void*>(const_cast< VehicleAccumulateSetPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleAccumulateSetPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
