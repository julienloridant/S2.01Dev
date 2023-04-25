#include "lecteurvue.h"
#include "ui_lecteurvue.h"
#include <QDebug>

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);
    connect(ui->bLancer,SIGNAL(trigerred()),this,SLOT(lancerDiaporama()));
    connect(ui->bArreter,SIGNAL(trigerred()),this,SLOT(quitterDiaporama()));
    connect(ui->bPrecedent,SIGNAL(trigerred()),this,SLOT(Precedent()));
    connect(ui->bSuivant,SIGNAL(trigerred()),this,SLOT(Suivant()));



}

LecteurVue::~LecteurVue()
{   
    delete ui;
}

void lancerDiaporama()
{
    qDebug()<<"lancement du diaporama";
}
