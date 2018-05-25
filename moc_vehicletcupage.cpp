/****************************************************************************
** Meta object code from reading C++ file 'vehicletcupage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehicletcupage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehicletcupage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleTCUPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      41,   15,   15,   15, 0x08,
      67,   15,   15,   15, 0x08,
      93,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleTCUPage[] = {
    "VehicleTCUPage\0\0on_btn_prePage_pressed()\0"
    "on_btn_prePage_released()\0"
    "on_btn_nextPage_pressed()\0"
    "on_btn_nextPage_released()\0"
};

void VehicleTCUPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VehicleTCUPage *_t = static_cast<VehicleTCUPage *>(_o);
        switch (_id) {
        case 0: _t->on_btn_prePage_pressed(); break;
        case 1: _t->on_btn_prePage_released(); break;
        case 2: _t->on_btn_nextPage_pressed(); break;
        case 3: _t->on_btn_nextPage_released(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VehicleTCUPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VehicleTCUPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleTCUPage,
      qt_meta_data_VehicleTCUPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleTCUPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleTCUPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleTCUPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleTCUPage))
        return static_cast<void*>(const_cast< VehicleTCUPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleTCUPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
