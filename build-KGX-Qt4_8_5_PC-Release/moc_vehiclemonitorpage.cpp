/****************************************************************************
** Meta object code from reading C++ file 'vehiclemonitorpage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../vehiclemonitorpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclemonitorpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleMonitorPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      41,   19,   19,   19, 0x08,
      63,   19,   19,   19, 0x08,
      84,   19,   19,   19, 0x08,
     106,   19,   19,   19, 0x08,
     126,   19,   19,   19, 0x08,
     147,   19,   19,   19, 0x08,
     167,   19,   19,   19, 0x08,
     188,   19,   19,   19, 0x08,
     210,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleMonitorPage[] = {
    "VehicleMonitorPage\0\0on_btn_mc1_pressed()\0"
    "on_btn_mc1_released()\0on_btn_mc2_pressed()\0"
    "on_btn_mc2_released()\0on_btn_t1_pressed()\0"
    "on_btn_t1_released()\0on_btn_t2_pressed()\0"
    "on_btn_t2_released()\0on_btn_poll_pressed()\0"
    "on_btn_poll_released()\0"
};

void VehicleMonitorPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VehicleMonitorPage *_t = static_cast<VehicleMonitorPage *>(_o);
        switch (_id) {
        case 0: _t->on_btn_mc1_pressed(); break;
        case 1: _t->on_btn_mc1_released(); break;
        case 2: _t->on_btn_mc2_pressed(); break;
        case 3: _t->on_btn_mc2_released(); break;
        case 4: _t->on_btn_t1_pressed(); break;
        case 5: _t->on_btn_t1_released(); break;
        case 6: _t->on_btn_t2_pressed(); break;
        case 7: _t->on_btn_t2_released(); break;
        case 8: _t->on_btn_poll_pressed(); break;
        case 9: _t->on_btn_poll_released(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VehicleMonitorPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VehicleMonitorPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleMonitorPage,
      qt_meta_data_VehicleMonitorPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleMonitorPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleMonitorPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleMonitorPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleMonitorPage))
        return static_cast<void*>(const_cast< VehicleMonitorPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleMonitorPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
