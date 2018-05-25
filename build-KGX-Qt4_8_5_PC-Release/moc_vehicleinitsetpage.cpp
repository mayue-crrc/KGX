/****************************************************************************
** Meta object code from reading C++ file 'vehicleinitsetpage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../vehicleinitsetpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehicleinitsetpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleInitsetPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      42,   19,   19,   19, 0x08,
      63,   19,   19,   19, 0x08,
      85,   19,   19,   19, 0x08,
     106,   19,   19,   19, 0x08,
     128,   19,   19,   19, 0x08,
     155,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleInitsetPage[] = {
    "VehicleInitsetPage\0\0on_btn_back_clicked()\0"
    "on_btn_MC1_pressed()\0on_btn_MC1_released()\0"
    "on_btn_MC2_pressed()\0on_btn_MC2_released()\0"
    "on_btn_rebootHMI_pressed()\0"
    "on_btn_rebootHMI_released()\0"
};

void VehicleInitsetPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VehicleInitsetPage *_t = static_cast<VehicleInitsetPage *>(_o);
        switch (_id) {
        case 0: _t->on_btn_back_clicked(); break;
        case 1: _t->on_btn_MC1_pressed(); break;
        case 2: _t->on_btn_MC1_released(); break;
        case 3: _t->on_btn_MC2_pressed(); break;
        case 4: _t->on_btn_MC2_released(); break;
        case 5: _t->on_btn_rebootHMI_pressed(); break;
        case 6: _t->on_btn_rebootHMI_released(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VehicleInitsetPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VehicleInitsetPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleInitsetPage,
      qt_meta_data_VehicleInitsetPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleInitsetPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleInitsetPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleInitsetPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleInitsetPage))
        return static_cast<void*>(const_cast< VehicleInitsetPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleInitsetPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
