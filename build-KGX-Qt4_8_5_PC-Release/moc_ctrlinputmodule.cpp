/****************************************************************************
** Meta object code from reading C++ file 'ctrlinputmodule.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ctrlinputmodule.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctrlinputmodule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CtrlInputModule[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      60,   16,   16,   16, 0x08,
     104,   16,   16,   16, 0x08,
     146,   16,   16,   16, 0x08,
     187,   16,   16,   16, 0x08,
     228,   16,   16,   16, 0x08,
     269,   16,   16,   16, 0x08,
     310,   16,   16,   16, 0x08,
     351,   16,   16,   16, 0x08,
     392,   16,   16,   16, 0x08,
     433,   16,   16,   16, 0x08,
     474,   16,   16,   16, 0x08,
     515,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CtrlInputModule[] = {
    "CtrlInputModule\0\0"
    "on_CtrlInputModule_Button_Num0_2_clicked()\0"
    "on_CtrlInputModule_Button_confirm_clicked()\0"
    "on_CtrlInputModule_Button_clear_clicked()\0"
    "on_CtrlInputModule_Button_Num9_clicked()\0"
    "on_CtrlInputModule_Button_Num8_clicked()\0"
    "on_CtrlInputModule_Button_Num7_clicked()\0"
    "on_CtrlInputModule_Button_Num6_clicked()\0"
    "on_CtrlInputModule_Button_Num5_clicked()\0"
    "on_CtrlInputModule_Button_Num4_clicked()\0"
    "on_CtrlInputModule_Button_Num3_clicked()\0"
    "on_CtrlInputModule_Button_Num2_clicked()\0"
    "on_CtrlInputModule_Button_Num1_clicked()\0"
    "on_CtrlInputModule_Button_Num0_clicked()\0"
};

void CtrlInputModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CtrlInputModule *_t = static_cast<CtrlInputModule *>(_o);
        switch (_id) {
        case 0: _t->on_CtrlInputModule_Button_Num0_2_clicked(); break;
        case 1: _t->on_CtrlInputModule_Button_confirm_clicked(); break;
        case 2: _t->on_CtrlInputModule_Button_clear_clicked(); break;
        case 3: _t->on_CtrlInputModule_Button_Num9_clicked(); break;
        case 4: _t->on_CtrlInputModule_Button_Num8_clicked(); break;
        case 5: _t->on_CtrlInputModule_Button_Num7_clicked(); break;
        case 6: _t->on_CtrlInputModule_Button_Num6_clicked(); break;
        case 7: _t->on_CtrlInputModule_Button_Num5_clicked(); break;
        case 8: _t->on_CtrlInputModule_Button_Num4_clicked(); break;
        case 9: _t->on_CtrlInputModule_Button_Num3_clicked(); break;
        case 10: _t->on_CtrlInputModule_Button_Num2_clicked(); break;
        case 11: _t->on_CtrlInputModule_Button_Num1_clicked(); break;
        case 12: _t->on_CtrlInputModule_Button_Num0_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CtrlInputModule::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CtrlInputModule::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CtrlInputModule,
      qt_meta_data_CtrlInputModule, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CtrlInputModule::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CtrlInputModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CtrlInputModule::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CtrlInputModule))
        return static_cast<void*>(const_cast< CtrlInputModule*>(this));
    return QWidget::qt_metacast(_clname);
}

int CtrlInputModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
