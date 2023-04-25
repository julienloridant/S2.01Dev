/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LecteurVue
{
public:
    QAction *actionQuitter;
    QAction *actionVitesse_de_d_filement;
    QAction *actionEnlever_le_diaporama;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_8;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *bLancer;
    QSpacerItem *horizontalSpacer;
    QPushButton *bPrecedent;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *bSuivant;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *bArreter;
    QSpacerItem *horizontalSpacer_9;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuParam_tres;
    QMenu *menuAides;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LecteurVue)
    {
        if (LecteurVue->objectName().isEmpty())
            LecteurVue->setObjectName(QString::fromUtf8("LecteurVue"));
        LecteurVue->resize(800, 600);
        actionQuitter = new QAction(LecteurVue);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionVitesse_de_d_filement = new QAction(LecteurVue);
        actionVitesse_de_d_filement->setObjectName(QString::fromUtf8("actionVitesse_de_d_filement"));
        actionEnlever_le_diaporama = new QAction(LecteurVue);
        actionEnlever_le_diaporama->setObjectName(QString::fromUtf8("actionEnlever_le_diaporama"));
        centralwidget = new QWidget(LecteurVue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_5 = new QHBoxLayout(centralwidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);

        horizontalLayout_4->addWidget(label_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        label->setFont(font1);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bLancer = new QPushButton(centralwidget);
        bLancer->setObjectName(QString::fromUtf8("bLancer"));
        QFont font2;
        font2.setPointSize(15);
        bLancer->setFont(font2);

        horizontalLayout->addWidget(bLancer);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bPrecedent = new QPushButton(centralwidget);
        bPrecedent->setObjectName(QString::fromUtf8("bPrecedent"));
        bPrecedent->setFont(font2);

        horizontalLayout->addWidget(bPrecedent);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        bSuivant = new QPushButton(centralwidget);
        bSuivant->setObjectName(QString::fromUtf8("bSuivant"));
        bSuivant->setFont(font2);

        horizontalLayout->addWidget(bSuivant);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        bArreter = new QPushButton(centralwidget);
        bArreter->setObjectName(QString::fromUtf8("bArreter"));
        bArreter->setEnabled(true);
        bArreter->setMaximumSize(QSize(16777215, 16777215));
        bArreter->setFont(font2);

        horizontalLayout->addWidget(bArreter);

        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(5, 2);

        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout_2->setStretch(0, 20);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 1);
        verticalLayout_2->setStretch(3, 1);
        verticalLayout_2->setStretch(4, 2);
        verticalLayout_2->setStretch(5, 1);
        verticalLayout_2->setStretch(6, 1);

        horizontalLayout_5->addLayout(verticalLayout_2);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        LecteurVue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LecteurVue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuParam_tres = new QMenu(menubar);
        menuParam_tres->setObjectName(QString::fromUtf8("menuParam_tres"));
        menuAides = new QMenu(menubar);
        menuAides->setObjectName(QString::fromUtf8("menuAides"));
        LecteurVue->setMenuBar(menubar);
        statusbar = new QStatusBar(LecteurVue);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LecteurVue->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuParam_tres->menuAction());
        menubar->addAction(menuAides->menuAction());
        menuFichier->addAction(actionQuitter);
        menuParam_tres->addAction(actionVitesse_de_d_filement);
        menuParam_tres->addAction(actionEnlever_le_diaporama);

        retranslateUi(LecteurVue);

        QMetaObject::connectSlotsByName(LecteurVue);
    } // setupUi

    void retranslateUi(QMainWindow *LecteurVue)
    {
        LecteurVue->setWindowTitle(QCoreApplication::translate("LecteurVue", "LecteurVue", nullptr));
        actionQuitter->setText(QCoreApplication::translate("LecteurVue", "Quitter", nullptr));
        actionVitesse_de_d_filement->setText(QCoreApplication::translate("LecteurVue", "Vitesse de d\303\251filement", nullptr));
        actionEnlever_le_diaporama->setText(QCoreApplication::translate("LecteurVue", "Enlever le diaporama", nullptr));
        label_2->setText(QCoreApplication::translate("LecteurVue", "Titre de l'image", nullptr));
        label->setText(QCoreApplication::translate("LecteurVue", "Description de l'image", nullptr));
        bLancer->setText(QCoreApplication::translate("LecteurVue", "Lancer le diaporama", nullptr));
        bPrecedent->setText(QCoreApplication::translate("LecteurVue", "Pr\303\251c\303\251dent", nullptr));
        bSuivant->setText(QCoreApplication::translate("LecteurVue", "Suivant", nullptr));
        bArreter->setText(QCoreApplication::translate("LecteurVue", "Arr\303\252ter le diaporama", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("LecteurVue", "Fichier", nullptr));
        menuParam_tres->setTitle(QCoreApplication::translate("LecteurVue", "Param\303\250tres", nullptr));
        menuAides->setTitle(QCoreApplication::translate("LecteurVue", "Aides", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LecteurVue: public Ui_LecteurVue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVUE_H
