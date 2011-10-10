#include "gosound.h"

gosound::gosound(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
}

gosound::~gosound()
{

}

void	gosound::PlaySoundA()
{
	//FMOD_System_PlaySound(gosound::sys, FMOD_CHANNEL_FREE, gosound::sound, 0, gosound&::channel);
}

void	gosound::PlaySoundB()
{

	QMessageBox::information(this, "title", "Play sound from PAD B !");
}

void	gosound::PlaySoundC()
{
	QMessageBox::information(this, "title", "Play sound from PAD C !");
}

void	gosound::PlaySoundD()
{
	QMessageBox::information(this, "title", "Play sound from PAD D !");
}

void	gosound::PlaySoundE()
{
	QMessageBox::information(this, "title", "Play sound from PAD E !");
}

void	gosound::PlaySoundF()
{
	QMessageBox::information(this, "title", "Play sound from PAD F !");
}

void	gosound::PlaySoundG()
{
	QMessageBox::information(this, "title", "Play sound from PAD G !");
}

void	gosound::PlaySoundH()
{
	QMessageBox::information(this, "title", "Play sound from PAD H !");
}

void	gosound::PlaySoundI()
{
	QMessageBox::information(this, "title", "Play sound from PAD I !");
}

void	gosound::PlaySoundJ()
{
	QMessageBox::information(this, "title", "Play sound from PAD J !");
}

void	gosound::PlaySoundK()
{
	QMessageBox::information(this, "title", "Play sound from PAD K !");
}

void	gosound::PlaySoundL()
{
	QMessageBox::information(this, "title", "Play sound from PAD L !");
}

void	gosound::PlaySoundM()
{
	QMessageBox::information(this, "title", "Play sound from PAD M !");
}

void	gosound::PlaySoundN()
{
	QMessageBox::information(this, "title", "Play sound from PAD N !");
}

void	gosound::PlaySoundO()
{
	QMessageBox::information(this, "title", "Play sound from PAD O !");
}

void	gosound::PlaySoundP()
{
	QMessageBox::information(this, "title", "Play sound from PAD P !");
}