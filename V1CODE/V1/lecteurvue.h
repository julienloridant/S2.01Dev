#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class LecteurVue; }
QT_END_NAMESPACE

class LecteurVue : public QMainWindow
{
    Q_OBJECT

public:
    LecteurVue(QWidget *parent = nullptr);
    ~LecteurVue();

private:
    Ui::LecteurVue *ui;

public slots:
  void avancer();
  void reculer();
  void lancerDiaporama();
  void arreterDiaporama();

};
#endif // LECTEURVUE_H
