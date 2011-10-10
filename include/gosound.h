#ifndef GOSOUND_H
#define GOSOUND_H

#include <QtGui/QMainWindow>
#include <QtGui/QMessageBox>
#include "ui_gosound.h"
#include <fmod.h>
#include "sound.h"

class gosound: public QMainWindow, public sound_mgr
{
	Q_OBJECT

public:
	gosound(QWidget *parent = 0, Qt::WFlags flags = 0);
	~gosound();

private:
	 Ui::gosoundClass ui;

private slots:
	void	PlaySoundA();
	void	PlaySoundB();
	void	PlaySoundC();
	void	PlaySoundD();
	void	PlaySoundE();
	void	PlaySoundF();
	void	PlaySoundG();
	void	PlaySoundH();
	void	PlaySoundI();
	void	PlaySoundJ();
	void	PlaySoundK();
	void	PlaySoundL();
	void	PlaySoundM();
	void	PlaySoundN();
	void	PlaySoundO();
	void	PlaySoundP();
};

#endif // GOSOUND_H
