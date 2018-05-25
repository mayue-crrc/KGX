/****************************************************************************
** Meta object code from reading C++ file 'vehiclesettingpage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehiclesettingpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclesettingpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleSettingPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      57,   19,   19,   19, 0x08,
      92,   19,   19,   19, 0x08,
     126,   19,   19,   19, 0x08,
     160,   19,   19,   19, 0x08,
     194,   19,   19,   19, 0x08,
     228,   19,   19,   19, 0x08,
     262,   19,   19,   19, 0x08,
     296,   19,   19,   19, 0x08,
     330,   19,   19,   19, 0x08,
     364,   19,   19,   19, 0x08,
     398,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleSettingPage[] = {
    "VehicleSettingPage\0\0"
    "on_VSetting_Button_confirm_pressed()\0"
    "on_VSetting_Button_clear_pressed()\0"
    "on_VSetting_Button_Num9_pressed()\0"
    "on_VSetting_Button_Num8_pressed()\0"
    "on_VSetting_Button_Num7_pressed()\0"
    "on_VSetting_Button_Num6_pressed()\0"
    "on_VSetting_Button_Num5_pressed()\0"
    "on_VSetting_Button_Num4_pressed()\0"
    "on_VSetting_Button_Num3_pressed()\0"
    "on_VSetting_Button_Num2_pressed()\0"
    "on_VSetting_Button_Num1_pressed()\0"
    "on_VSetting_Button_Num0_pressed()\0"
};

void VehicleSettingPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VehicleSettingPage *_t = static_cast<VehicleSettingPage *>(_o);
        switch (_id) {
        case 0: _t->on_VSetting_Button_confirm_pressed(); break;
        case 1: _t->on_VSetting_Button_clear_pressed(); break;
        case 2: _t->on_VSetting_Button_Num9_pressed(); break;
        case 3: _t->on_VSetting_Button_Num8_pressed(); break;
        case 4: _t->on_VSetting_Button_Num7_pressed(); break;
        case 5: _t->on_VSetting_Button_Num6_pressed(); break;
        case 6: _t->on_VSetting_Button_Num5_pressed(); break;
        case 7: _t->on_VSetting_Button_Num4_pressed(); break;
        case 8: _t->on_VSetting_Button_Num3_pressed(); break;
        case 9: _t->on_VSetting_Button_Num2_pressed(); break;
        case 10: _t->on_VSetting_Button_Num1_pressed(); break;
        case 11: _t->on_VSetting_Button_Num0_pressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VehicleSettingPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VehicleSettingPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleSettingPage,
      qt_meta_data_VehicleSettingPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleSettingPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleSettingPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleSettingPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleSettingPage))
        return static_cast<void*>(const_cast< VehicleSettingPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleSettingPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
