/********************************************************************************
** Form generated from reading UI file 'gosound.ui'
**
** Created: Sun 9. Oct 23:26:29 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOSOUND_H
#define UI_GOSOUND_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gosoundClass
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *GosoundButtonA;
    QLineEdit *GosoundAlphaLine;
    QPushButton *GosoundButtonB;
    QPushButton *GosoundButtonN;
    QPushButton *GosoundButtonF;
    QPushButton *GosoundButtonJ;
    QPushButton *GosoundButtonM;
    QPushButton *GosoundButtonI;
    QPushButton *GosoundButtonE;
    QPushButton *GosoundButtonG;
    QPushButton *GosoundButtonC;
    QPushButton *GosoundButtonK;
    QPushButton *GosoundButttonO;
    QLabel *GosoundCopyright;
    QPushButton *GosoundButtonL;
    QPushButton *GosoundButtonH;
    QPushButton *GosoundButtonD;
    QPushButton *GosoundButtonP;
    QPushButton *pushButton;
    QMenuBar *GosoundMenu;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuDisplay;
    QMenu *menuProject;
    QMenu *menuFX;
    QMenu *menuTools;
    QMenu *menuOptions;
    QMenu *menuAbout;

    void setupUi(QMainWindow *gosoundClass)
    {
        if (gosoundClass->objectName().isEmpty())
            gosoundClass->setObjectName(QString::fromUtf8("gosoundClass"));
        gosoundClass->resize(732, 680);
        gosoundClass->setMaximumSize(QSize(732, 680));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        gosoundClass->setPalette(palette);
        gosoundClass->setCursor(QCursor(Qt::ArrowCursor));
        gosoundClass->setMouseTracking(false);
        gosoundClass->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8("./Data/Img/GosoundIcone.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        gosoundClass->setWindowIcon(icon);
        gosoundClass->setStyleSheet(QString::fromUtf8(""));
        gosoundClass->setAnimated(true);
        centralWidget = new QWidget(gosoundClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 757, 204));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8("./Data/Img/GosoundHeader.png")));

        verticalLayout->addWidget(label);

        GosoundButtonA = new QPushButton(centralWidget);
        GosoundButtonA->setObjectName(QString::fromUtf8("GosoundButtonA"));
        GosoundButtonA->setGeometry(QRect(70, 250, 71, 71));
        GosoundButtonA->setStyleSheet(QString::fromUtf8("background-color: \"#666666\";\n"
"font: 30pt \"Impact\";"));
        GosoundAlphaLine = new QLineEdit(centralWidget);
        GosoundAlphaLine->setObjectName(QString::fromUtf8("GosoundAlphaLine"));
        GosoundAlphaLine->setGeometry(QRect(150, 210, 391, 20));
        GosoundAlphaLine->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";\n"
"color: \"white\";\n"
"background-color: \"#333333\";"));
        GosoundButtonB = new QPushButton(centralWidget);
        GosoundButtonB->setObjectName(QString::fromUtf8("GosoundButtonB"));
        GosoundButtonB->setGeometry(QRect(230, 250, 71, 71));
        GosoundButtonB->setStyleSheet(QString::fromUtf8("background-color: \"#666666\";\n"
"font: 30pt \"Impact\";"));
        GosoundButtonN = new QPushButton(centralWidget);
        GosoundButtonN->setObjectName(QString::fromUtf8("GosoundButtonN"));
        GosoundButtonN->setGeometry(QRect(230, 550, 71, 71));
        GosoundButtonN->setStyleSheet(QString::fromUtf8("background-color: \"#666666\";\n"
"font: 30pt \"Impact\";"));
        GosoundButtonF = new QPushButton(centralWidget);
        GosoundButtonF->setObjectName(QString::fromUtf8("GosoundButtonF"));
        GosoundButtonF->setGeometry(QRect(230, 350, 71, 71));
        GosoundButtonF->setStyleSheet(QString::fromUtf8("background-color: \"#666666\";\n"
"font: 30pt \"Impact\";"));
        GosoundButtonJ = new QPushButton(centralWidget);
        GosoundButtonJ->setObjectName(QString::fromUtf8("GosoundButtonJ"));
        GosoundButtonJ->setGeometry(QRect(230, 450, 71, 71));
        GosoundButtonJ->setStyleSheet(QString::fromUtf8("background-color: \"#666666\";\n"
"font: 30pt \"Impact\";"));
        GosoundButtonM = new QPushButton(centralWidget);
        GosoundButtonM->setObjectName(QString::fromUtf8("GosoundButtonM"));
        GosoundButtonM->setGeometry(QRect(70, 550, 71, 71));
        GosoundButtonM->setStyleSheet(QString::fromUtf8("background-color: \"#666666\";\n"
"font: 30pt \"Impact\";"));
        GosoundButtonI = new QPushButton(centralWidget);
        GosoundButtonI->setObjectName(QString::fromUtf8("GosoundButtonI"));
        GosoundButtonI->setGeometry(QRect(70, 450, 71, 71));
        GosoundButtonI->setStyleSheet(QString::fromUtf8("background-color: \"#666666\";\n"
"font: 30pt \"Impact\";"));
        GosoundButtonE = new QPushButton(centralWidget);
        GosoundButtonE->setObjectName(QString::fromUtf8("GosoundButtonE"));
        GosoundButtonE->setGeometry(QRect(70, 350, 71, 71));
        GosoundButtonE->setStyleSheet(QString::fromUtf8("background-color: \"#666666\";\n"
"font: 30pt \"Impact\";"));
        GosoundButtonG = new QPushButton(centralWidget);
        GosoundButtonG->setObjectName(QString::fromUtf8("GosoundButtonG"));
        GosoundButtonG->setGeometry(QRect(390, 350, 71, 71));
        GosoundButtonG->setStyleSheet(QString::fromUtf8("background-color: \"#666666\";\n"
"font: 30pt \"Impact\";"));
        GosoundButtonC = new QPushButton(centralWidget);
        GosoundButtonC->setObjectName(QString::fromUtf8("GosoundButtonC"));
        GosoundButtonC->setGeometry(QRect(390, 250, 71, 71));
        GosoundButtonC->setStyleSheet(QString::fromUtf8("background-color: \"#666666\";\n"
"font: 30pt \"Impact\";"));
        GosoundButtonK = new QPushButton(centralWidget);
        GosoundButtonK->setObjectName(QString::fromUtf8("GosoundButtonK"));
        GosoundButtonK->setGeometry(QRect(390, 450, 71, 71));
        GosoundButtonK->setStyleSheet(QString::fromUtf8("background-color: \"#666666\";\n"
"font: 30pt \"Impact\";"));
        GosoundButttonO = new QPushButton(centralWidget);
        GosoundButttonO->setObjectName(QString::fromUtf8("GosoundButttonO"));
        GosoundButttonO->setGeometry(QRect(390, 550, 71, 71));
        GosoundButttonO->setStyleSheet(QString::fromUtf8("background-color: \"#666666\";\n"
"font: 30pt \"Impact\";"));
        GosoundCopyright = new QLabel(centralWidget);
        GosoundCopyright->setObjectName(QString::fromUtf8("GosoundCopyright"));
        GosoundCopyright->setGeometry(QRect(230, 630, 311, 16));
        GosoundCopyright->setStyleSheet(QString::fromUtf8("font: 8pt \"Arial\";\n"
"color: \"#0099FF\";\n"
""));
        GosoundCopyright->setIndent(-1);
        GosoundCopyright->setTextInteractionFlags(Qt::NoTextInteraction);
        GosoundButtonL = new QPushButton(centralWidget);
        GosoundButtonL->setObjectName(QString::fromUtf8("GosoundButtonL"));
        GosoundButtonL->setGeometry(QRect(550, 450, 71, 71));
        GosoundButtonL->setStyleSheet(QString::fromUtf8("background-color: \"#666666\";\n"
"font: 30pt \"Impact\";"));
        GosoundButtonH = new QPushButton(centralWidget);
        GosoundButtonH->setObjectName(QString::fromUtf8("GosoundButtonH"));
        GosoundButtonH->setGeometry(QRect(550, 350, 71, 71));
        GosoundButtonH->setStyleSheet(QString::fromUtf8("background-color: \"#666666\";\n"
"font: 30pt \"Impact\";"));
        GosoundButtonD = new QPushButton(centralWidget);
        GosoundButtonD->setObjectName(QString::fromUtf8("GosoundButtonD"));
        GosoundButtonD->setGeometry(QRect(550, 250, 71, 71));
        GosoundButtonD->setStyleSheet(QString::fromUtf8("background-color: \"#666666\";\n"
"font: 30pt \"Impact\";"));
        GosoundButtonP = new QPushButton(centralWidget);
        GosoundButtonP->setObjectName(QString::fromUtf8("GosoundButtonP"));
        GosoundButtonP->setGeometry(QRect(550, 550, 71, 71));
        GosoundButtonP->setStyleSheet(QString::fromUtf8("background-color: \"#666666\";\n"
"font: 30pt \"Impact\";"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(550, 210, 75, 23));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: \"#0099FF\";\n"
"font: 10pt \"Impact\";"));
        gosoundClass->setCentralWidget(centralWidget);
        GosoundMenu = new QMenuBar(gosoundClass);
        GosoundMenu->setObjectName(QString::fromUtf8("GosoundMenu"));
        GosoundMenu->setGeometry(QRect(0, 0, 732, 21));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        GosoundMenu->setPalette(palette1);
        GosoundMenu->setDefaultUp(true);
        GosoundMenu->setNativeMenuBar(false);
        menuFile = new QMenu(GosoundMenu);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(GosoundMenu);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuDisplay = new QMenu(GosoundMenu);
        menuDisplay->setObjectName(QString::fromUtf8("menuDisplay"));
        menuProject = new QMenu(GosoundMenu);
        menuProject->setObjectName(QString::fromUtf8("menuProject"));
        menuFX = new QMenu(GosoundMenu);
        menuFX->setObjectName(QString::fromUtf8("menuFX"));
        menuTools = new QMenu(GosoundMenu);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuOptions = new QMenu(GosoundMenu);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuAbout = new QMenu(GosoundMenu);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        gosoundClass->setMenuBar(GosoundMenu);

        GosoundMenu->addAction(menuFile->menuAction());
        GosoundMenu->addAction(menuEdit->menuAction());
        GosoundMenu->addAction(menuDisplay->menuAction());
        GosoundMenu->addAction(menuProject->menuAction());
        GosoundMenu->addAction(menuFX->menuAction());
        GosoundMenu->addAction(menuTools->menuAction());
        GosoundMenu->addAction(menuOptions->menuAction());
        GosoundMenu->addAction(menuAbout->menuAction());

        retranslateUi(gosoundClass);
        QObject::connect(GosoundButtonA, SIGNAL(clicked()), gosoundClass, SLOT(PlaySoundA()));
        QObject::connect(GosoundButtonB, SIGNAL(clicked()), gosoundClass, SLOT(PlaySoundB()));
        QObject::connect(GosoundButtonC, SIGNAL(clicked()), gosoundClass, SLOT(PlaySoundC()));
        QObject::connect(GosoundButtonD, SIGNAL(clicked()), gosoundClass, SLOT(PlaySoundD()));
        QObject::connect(GosoundButtonE, SIGNAL(clicked()), gosoundClass, SLOT(PlaySoundE()));
        QObject::connect(GosoundButtonF, SIGNAL(clicked()), gosoundClass, SLOT(PlaySoundF()));
        QObject::connect(GosoundButtonG, SIGNAL(clicked()), gosoundClass, SLOT(PlaySoundG()));
        QObject::connect(GosoundButtonH, SIGNAL(clicked()), gosoundClass, SLOT(PlaySoundH()));
        QObject::connect(GosoundButtonI, SIGNAL(clicked()), gosoundClass, SLOT(PlaySoundI()));
        QObject::connect(GosoundButtonJ, SIGNAL(clicked()), gosoundClass, SLOT(PlaySoundJ()));
        QObject::connect(GosoundButtonK, SIGNAL(clicked()), gosoundClass, SLOT(PlaySoundK()));
        QObject::connect(GosoundButtonL, SIGNAL(clicked()), gosoundClass, SLOT(PlaySoundL()));
        QObject::connect(GosoundButtonM, SIGNAL(clicked()), gosoundClass, SLOT(PlaySoundM()));
        QObject::connect(GosoundButtonN, SIGNAL(clicked()), gosoundClass, SLOT(PlaySoundN()));
        QObject::connect(GosoundButttonO, SIGNAL(clicked()), gosoundClass, SLOT(PlaySoundO()));
        QObject::connect(GosoundButtonP, SIGNAL(clicked()), gosoundClass, SLOT(PlaySoundP()));

        QMetaObject::connectSlotsByName(gosoundClass);
    } // setupUi

    void retranslateUi(QMainWindow *gosoundClass)
    {
        gosoundClass->setWindowTitle(QApplication::translate("gosoundClass", "Gosound - Alphaline VST for drummer v 1.0", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        GosoundButtonA->setText(QApplication::translate("gosoundClass", "A", 0, QApplication::UnicodeUTF8));
        GosoundAlphaLine->setText(QString());
        GosoundButtonB->setText(QApplication::translate("gosoundClass", "B", 0, QApplication::UnicodeUTF8));
        GosoundButtonN->setText(QApplication::translate("gosoundClass", "N", 0, QApplication::UnicodeUTF8));
        GosoundButtonF->setText(QApplication::translate("gosoundClass", "F", 0, QApplication::UnicodeUTF8));
        GosoundButtonJ->setText(QApplication::translate("gosoundClass", "J", 0, QApplication::UnicodeUTF8));
        GosoundButtonM->setText(QApplication::translate("gosoundClass", "M", 0, QApplication::UnicodeUTF8));
        GosoundButtonI->setText(QApplication::translate("gosoundClass", "I", 0, QApplication::UnicodeUTF8));
        GosoundButtonE->setText(QApplication::translate("gosoundClass", "E", 0, QApplication::UnicodeUTF8));
        GosoundButtonG->setText(QApplication::translate("gosoundClass", "G", 0, QApplication::UnicodeUTF8));
        GosoundButtonC->setText(QApplication::translate("gosoundClass", "C", 0, QApplication::UnicodeUTF8));
        GosoundButtonK->setText(QApplication::translate("gosoundClass", "K", 0, QApplication::UnicodeUTF8));
        GosoundButttonO->setText(QApplication::translate("gosoundClass", "O", 0, QApplication::UnicodeUTF8));
        GosoundCopyright->setText(QApplication::translate("gosoundClass", "Copyright All rights \302\251 reserved - Gosound 2011-2012", 0, QApplication::UnicodeUTF8));
        GosoundButtonL->setText(QApplication::translate("gosoundClass", "L", 0, QApplication::UnicodeUTF8));
        GosoundButtonH->setText(QApplication::translate("gosoundClass", "H", 0, QApplication::UnicodeUTF8));
        GosoundButtonD->setText(QApplication::translate("gosoundClass", "D", 0, QApplication::UnicodeUTF8));
        GosoundButtonP->setText(QApplication::translate("gosoundClass", "P", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("gosoundClass", "Drum it !", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("gosoundClass", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("gosoundClass", "Edit", 0, QApplication::UnicodeUTF8));
        menuDisplay->setTitle(QApplication::translate("gosoundClass", "Display", 0, QApplication::UnicodeUTF8));
        menuProject->setTitle(QApplication::translate("gosoundClass", "Project", 0, QApplication::UnicodeUTF8));
        menuFX->setTitle(QApplication::translate("gosoundClass", "FX", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("gosoundClass", "Tools", 0, QApplication::UnicodeUTF8));
        menuOptions->setTitle(QApplication::translate("gosoundClass", "Options", 0, QApplication::UnicodeUTF8));
        menuAbout->setTitle(QApplication::translate("gosoundClass", "About", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class gosoundClass: public Ui_gosoundClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOSOUND_H
