/****************************************************************************
** Meta object code from reading C++ file 'vehiclehistoryfaultpage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../vehiclehistoryfaultpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclehistoryfaultpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleHistoryFaultPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      58,   24,   24,   24, 0x08,
      91,   24,   24,   24, 0x08,
     124,   24,   24,   24, 0x08,
     156,   24,   24,   24, 0x08,
     188,   24,   24,   24, 0x08,
     220,   24,   24,   24, 0x08,
     252,   24,   24,   24, 0x08,
     284,   24,   24,   24, 0x08,
     316,   24,   24,   24, 0x08,
     348,   24,   24,   24, 0x08,
     380,   24,   24,   24, 0x08,
     412,   24,   24,   24, 0x08,
     461,   24,   24,   24, 0x08,
     513,   24,   24,   24, 0x08,
     566,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleHistoryFaultPage[] = {
    "VehicleHistoryFaultPage\0\0"
    "on_VF_button_F12_intro_pressed()\0"
    "on_VF_button_F11_intro_pressed()\0"
    "on_VF_button_F10_intro_pressed()\0"
    "on_VF_button_F9_intro_pressed()\0"
    "on_VF_button_F8_intro_pressed()\0"
    "on_VF_button_F7_intro_pressed()\0"
    "on_VF_button_F6_intro_pressed()\0"
    "on_VF_button_F5_intro_pressed()\0"
    "on_VF_button_F4_intro_pressed()\0"
    "on_VF_button_F3_intro_pressed()\0"
    "on_VF_button_F2_intro_pressed()\0"
    "on_VF_button_F1_intro_pressed()\0"
    "on_VehicleHistoryFaultPage_Button_quit_pressed()\0"
    "on_VehicleHistoryFaultPage_Button_PrePage_pressed()\0"
    "on_VehicleHistoryFaultPage_Button_NextPage_pressed()\0"
    "on_btn_currentFault_clicked()\0"
};

void VehicleHistoryFaultPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VehicleHistoryFaultPage *_t = static_cast<VehicleHistoryFaultPage *>(_o);
        switch (_id) {
        case 0: _t->on_VF_button_F12_intro_pressed(); break;
        case 1: _t->on_VF_button_F11_intro_pressed(); break;
        case 2: _t->on_VF_button_F10_intro_pressed(); break;
        case 3: _t->on_VF_button_F9_intro_pressed(); break;
        case 4: _t->on_VF_button_F8_intro_pressed(); break;
        case 5: _t->on_VF_button_F7_intro_pressed(); break;
        case 6: _t->on_VF_button_F6_intro_pressed(); break;
        case 7: _t->on_VF_button_F5_intro_pressed(); break;
        case 8: _t->on_VF_button_F4_intro_pressed(); break;
        case 9: _t->on_VF_button_F3_intro_pressed(); break;
        case 10: _t->on_VF_button_F2_intro_pressed(); break;
        case 11: _t->on_VF_button_F1_intro_pressed(); break;
        case 12: _t->on_VehicleHistoryFaultPage_Button_quit_pressed(); break;
        case 13: _t->on_VehicleHistoryFaultPage_Button_PrePage_pressed(); break;
        case 14: _t->on_VehicleHistoryFaultPage_Button_NextPage_pressed(); break;
        case 15: _t->on_btn_currentFault_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VehicleHistoryFaultPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VehicleHistoryFaultPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleHistoryFaultPage,
      qt_meta_data_VehicleHistoryFaultPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleHistoryFaultPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleHistoryFaultPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleHistoryFaultPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleHistoryFaultPage))
        return static_cast<void*>(const_cast< VehicleHistoryFaultPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleHistoryFaultPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
