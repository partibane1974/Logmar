#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;


public slots:
    void Logmar();void Snellen();void Language();void Column();void SingleRow();void SingleLetter();
    void Ishihara();void Anesikonia();void Worth4Dot();void Duo();void CrowdBar();void Contrast();
    void EDTRS();void Astig();void CrossCyl();void Polarization();void Fixation();void NumberPit();
    void Amsler();void Madx();void Multimedia();void Info();void Settings();void FavouriteCharts();


private:
    QPushButton *qPB[100][100];
    QPushButton *logpb[10][10];
public:
    QStringList namex[100];
    QStringList namey[100];
    QString icon[100][100];
    QPixmap pixmap[100][100];

    QStringList log_namex[100];
    QStringList log_namey[100];



};
#endif // MAINWINDOW_H
