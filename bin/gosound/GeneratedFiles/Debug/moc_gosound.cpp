/****************************************************************************
** Meta object code from reading C++ file 'gosound.h'
**
** Created: Mon 10. Oct 10:59:51 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gosound.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gosound.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gosound[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      22,    8,    8,    8, 0x08,
      35,    8,    8,    8, 0x08,
      48,    8,    8,    8, 0x08,
      61,    8,    8,    8, 0x08,
      74,    8,    8,    8, 0x08,
      87,    8,    8,    8, 0x08,
     100,    8,    8,    8, 0x08,
     113,    8,    8,    8, 0x08,
     126,    8,    8,    8, 0x08,
     139,    8,    8,    8, 0x08,
     152,    8,    8,    8, 0x08,
     165,    8,    8,    8, 0x08,
     178,    8,    8,    8, 0x08,
     191,    8,    8,    8, 0x08,
     204,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gosound[] = {
    "gosound\0\0PlaySoundA()\0PlaySoundB()\0"
    "PlaySoundC()\0PlaySoundD()\0PlaySoundE()\0"
    "PlaySoundF()\0PlaySoundG()\0PlaySoundH()\0"
    "PlaySoundI()\0PlaySoundJ()\0PlaySoundK()\0"
    "PlaySoundL()\0PlaySoundM()\0PlaySoundN()\0"
    "PlaySoundO()\0PlaySoundP()\0"
};

const QMetaObject gosound::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_gosound,
      qt_meta_data_gosound, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gosound::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gosound::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gosound::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gosound))
        return static_cast<void*>(const_cast< gosound*>(this));
    if (!strcmp(_clname, "sound_mgr"))
        return static_cast< sound_mgr*>(const_cast< gosound*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int gosound::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: PlaySoundA(); break;
        case 1: PlaySoundB(); break;
        case 2: PlaySoundC(); break;
        case 3: PlaySoundD(); break;
        case 4: PlaySoundE(); break;
        case 5: PlaySoundF(); break;
        case 6: PlaySoundG(); break;
        case 7: PlaySoundH(); break;
        case 8: PlaySoundI(); break;
        case 9: PlaySoundJ(); break;
        case 10: PlaySoundK(); break;
        case 11: PlaySoundL(); break;
        case 12: PlaySoundM(); break;
        case 13: PlaySoundN(); break;
        case 14: PlaySoundO(); break;
        case 15: PlaySoundP(); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
