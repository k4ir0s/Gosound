#include "gosound.h"
#include "sound.h"
#include <QtGui/QApplication>
#include <QSplashScreen>
#include <Windows.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QPixmap		 pixmap("./Data/Img/splash.png");
	gosound		 w;
	sound_mgr	sound;

	QSplashScreen	splash(pixmap);
	splash.show();
	a.processEvents();
	w.show();
	splash.finish(&w);
	return a.exec();
}
