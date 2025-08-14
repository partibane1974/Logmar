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
    QPushButton *logPB[10][10];
    QPushButton *langPB[10][10];
    QPushButton *colPB[10][10];
    QPushButton *rowPB[10][10];
    QPushButton *s_letterPB[10][10];
    QPushButton *wdotPB[10][10];
    QPushButton *duoPB[10][10];
    QPushButton *cbarPB[10][10];
    QPushButton *conPB[10][10];
    QPushButton *astPB[10][10];
    QPushButton *cylPB[10][10];
    QPushButton *fixPB[10][10];
    QPushButton *madPB[10][10];

public:
    QStringList namex[100];
    QStringList namey[100];
    QString icon[100][100];
    QPixmap pixmap[100][100];

    QStringList log_namex[100];
    QStringList log_namey[100];

    QStringList lang_namex[100];
    QStringList lang_namey[100];
    QStringList lang_namez[100];

    QStringList col_namex[100];
    QStringList col_namey[100];

    QStringList row_namex[100];
    QStringList row_namey[100];

    QStringList s_letter_namex[100];
    QStringList s_letter_namey[100];

    QStringList wdot_namex[100];
    QStringList wdot_namey[100];

    QStringList duo_namex[100];
    QStringList duo_namey[100];

    QStringList cbar_namex[100];
    QStringList cbar_namey[100];

    QStringList con_namex[100];
    QStringList con_namey[100];


    QStringList ast_namex[100];
    QStringList ast_namey[100];

    QStringList cyl_namex[100];
    QStringList cyl_namey[100];

    QStringList fix_namex[100];
    QStringList fix_namey[100];

    QStringList mad_namex[100];
    QStringList mad_namey[100];




};
#endif // MAINWINDOW_H
