/****************************************************************************
** Meta object code from reading C++ file 'vehiclesettingselectpage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../vehiclesettingselectpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclesettingselectpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleSettingSelectPage[] = {

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
      26,   25,   25,   25, 0x08,
      53,   25,   25,   25, 0x08,
      81,   25,   25,   25, 0x08,
     114,   25,   25,   25, 0x08,
     141,   25,   25,   25, 0x08,
     168,   25,   25,   25, 0x08,
     199,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleSettingSelectPage[] = {
    "VehicleSettingSelectPage\0\0"
    "on_btn_set1_para_clicked()\0"
    "on_btn_set7_debug_clicked()\0"
    "on_btn_set2_accumulate_clicked()\0"
    "on_btn_set3_init_clicked()\0"
    "on_btn_set4_time_clicked()\0"
    "on_btn_set5_password_clicked()\0"
    "on_btn_set6_version_clicked()\0"
};

void VehicleSettingSelectPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VehicleSettingSelectPage *_t = static_cast<VehicleSettingSelectPage *>(_o);
        switch (_id) {
        case 0: _t->on_btn_set1_para_clicked(); break;
        case 1: _t->on_btn_set7_debug_clicked(); break;
        case 2: _t->on_btn_set2_accumulate_clicked(); break;
        case 3: _t->on_btn_set3_init_clicked(); break;
        case 4: _t->on_btn_set4_time_clicked(); break;
        case 5: _t->on_btn_set5_password_clicked(); break;
        case 6: _t->on_btn_set6_version_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VehicleSettingSelectPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VehicleSettingSelectPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleSettingSelectPage,
      qt_meta_data_VehicleSettingSelectPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleSettingSelectPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleSettingSelectPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleSettingSelectPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleSettingSelectPage))
        return static_cast<void*>(const_cast< VehicleSettingSelectPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleSettingSelectPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
