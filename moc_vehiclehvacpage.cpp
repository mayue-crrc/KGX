/****************************************************************************
** Meta object code from reading C++ file 'vehiclehvacpage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehiclehvacpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclehvacpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleHVACPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      42,   16,   16,   16, 0x08,
      68,   16,   16,   16, 0x08,
      94,   16,   16,   16, 0x08,
     121,   16,   16,   16, 0x08,
     153,   16,   16,   16, 0x08,
     185,   16,   16,   16, 0x08,
     221,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleHVACPage[] = {
    "VehicleHVACPage\0\0on_btn_prePage_pressed()\0"
    "on_btn_nextPage_pressed()\0"
    "on_btn_prePage_released()\0"
    "on_btn_nextPage_released()\0"
    "on_VHVAC_Button_heat1_clicked()\0"
    "on_VHVAC_Button_heat2_clicked()\0"
    "on_VHVAC_Button_Tempplus2_pressed()\0"
    "on_VHVAC_Button_Tempplus2_released()\0"
};

void VehicleHVACPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VehicleHVACPage *_t = static_cast<VehicleHVACPage *>(_o);
        switch (_id) {
        case 0: _t->on_btn_prePage_pressed(); break;
        case 1: _t->on_btn_nextPage_pressed(); break;
        case 2: _t->on_btn_prePage_released(); break;
        case 3: _t->on_btn_nextPage_released(); break;
        case 4: _t->on_VHVAC_Button_heat1_clicked(); break;
        case 5: _t->on_VHVAC_Button_heat2_clicked(); break;
        case 6: _t->on_VHVAC_Button_Tempplus2_pressed(); break;
        case 7: _t->on_VHVAC_Button_Tempplus2_released(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VehicleHVACPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VehicleHVACPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleHVACPage,
      qt_meta_data_VehicleHVACPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleHVACPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleHVACPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleHVACPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleHVACPage))
        return static_cast<void*>(const_cast< VehicleHVACPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleHVACPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
