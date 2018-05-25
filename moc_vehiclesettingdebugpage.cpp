/****************************************************************************
** Meta object code from reading C++ file 'vehiclesettingdebugpage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehiclesettingdebugpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclesettingdebugpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleSettingDebugPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      47,   24,   24,   24, 0x08,
      72,   24,   24,   24, 0x08,
      99,   24,   24,   24, 0x08,
     133,   24,   24,   24, 0x08,
     164,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleSettingDebugPage[] = {
    "VehicleSettingDebugPage\0\0on_btn_back_clicked()\0"
    "on_btn_set1_IO_clicked()\0"
    "on_btn_set2_RIOM_clicked()\0"
    "on_btn_set3_refreshTime_clicked()\0"
    "on_btn_set4_portData_clicked()\0"
    "on_btn_set5_level_clicked()\0"
};

void VehicleSettingDebugPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VehicleSettingDebugPage *_t = static_cast<VehicleSettingDebugPage *>(_o);
        switch (_id) {
        case 0: _t->on_btn_back_clicked(); break;
        case 1: _t->on_btn_set1_IO_clicked(); break;
        case 2: _t->on_btn_set2_RIOM_clicked(); break;
        case 3: _t->on_btn_set3_refreshTime_clicked(); break;
        case 4: _t->on_btn_set4_portData_clicked(); break;
        case 5: _t->on_btn_set5_level_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VehicleSettingDebugPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VehicleSettingDebugPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleSettingDebugPage,
      qt_meta_data_VehicleSettingDebugPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleSettingDebugPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleSettingDebugPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleSettingDebugPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleSettingDebugPage))
        return static_cast<void*>(const_cast< VehicleSettingDebugPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleSettingDebugPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
