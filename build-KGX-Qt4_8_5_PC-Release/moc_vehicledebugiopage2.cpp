/****************************************************************************
** Meta object code from reading C++ file 'vehicledebugiopage2.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../vehicledebugiopage2.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehicledebugiopage2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleDebugIOPage2[] = {

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
      21,   20,   20,   20, 0x08,
      43,   20,   20,   20, 0x08,
      68,   20,   20,   20, 0x08,
      94,   20,   20,   20, 0x08,
     115,   20,   20,   20, 0x08,
     136,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleDebugIOPage2[] = {
    "VehicleDebugIOPage2\0\0on_btn_back_clicked()\0"
    "on_btn_prepage_clicked()\0"
    "on_btn_nextpage_clicked()\0"
    "on_btn_MC1_clicked()\0on_btn_MC2_clicked()\0"
    "on_btn_T_clicked()\0"
};

void VehicleDebugIOPage2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VehicleDebugIOPage2 *_t = static_cast<VehicleDebugIOPage2 *>(_o);
        switch (_id) {
        case 0: _t->on_btn_back_clicked(); break;
        case 1: _t->on_btn_prepage_clicked(); break;
        case 2: _t->on_btn_nextpage_clicked(); break;
        case 3: _t->on_btn_MC1_clicked(); break;
        case 4: _t->on_btn_MC2_clicked(); break;
        case 5: _t->on_btn_T_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VehicleDebugIOPage2::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VehicleDebugIOPage2::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleDebugIOPage2,
      qt_meta_data_VehicleDebugIOPage2, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleDebugIOPage2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleDebugIOPage2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleDebugIOPage2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleDebugIOPage2))
        return static_cast<void*>(const_cast< VehicleDebugIOPage2*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleDebugIOPage2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
