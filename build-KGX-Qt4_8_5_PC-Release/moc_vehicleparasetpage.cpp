/****************************************************************************
** Meta object code from reading C++ file 'vehicleparasetpage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../vehicleparasetpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehicleparasetpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleParaSetPage[] = {

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
      20,   19,   19,   19, 0x08,
      42,   19,   19,   19, 0x08,
      61,   19,   19,   19, 0x08,
      91,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleParaSetPage[] = {
    "VehicleParaSetPage\0\0on_btn_back_clicked()\0"
    "InputSelectEvent()\0on_btn_wheelConfirm_clicked()\0"
    "on_btn_numberConfirm_clicked()\0"
};

void VehicleParaSetPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VehicleParaSetPage *_t = static_cast<VehicleParaSetPage *>(_o);
        switch (_id) {
        case 0: _t->on_btn_back_clicked(); break;
        case 1: _t->InputSelectEvent(); break;
        case 2: _t->on_btn_wheelConfirm_clicked(); break;
        case 3: _t->on_btn_numberConfirm_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VehicleParaSetPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VehicleParaSetPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleParaSetPage,
      qt_meta_data_VehicleParaSetPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleParaSetPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleParaSetPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleParaSetPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleParaSetPage))
        return static_cast<void*>(const_cast< VehicleParaSetPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleParaSetPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
