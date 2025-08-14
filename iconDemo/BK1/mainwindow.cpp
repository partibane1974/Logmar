#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QVBoxLayout *vl0=new QVBoxLayout;
    QGridLayout *gl0=new QGridLayout;



   namex[0]<<"Logmar"<<"Snellen"<<"Language"<<"Column"<<"SingleRow"<<"SingleLetter";
   namex[1]<<"Ishihara"<<"Anesikonia"<<"Worth4Dot"<<"Duo"<<"CrowdBar"<<"Contrast";
   namex[2]<<"EDTRS"<<"Astig"<<"CrossCyl"<<"Polarization"<<"Fixation"<<"NumberPit";
   namex[3]<<"Amsler"<<"Madx"<<"Multimedia"<<"Info"<<"Settings"<<"FavouriteCharts";

   namey[0]<<"Logmar1"<<"Snellen1"<<"Language1"<<"Column1"<<"SingleRow1"<<"SingleLetter1";
   namey[1]<<"Ishihara1"<<"Anesikonia1"<<"Worth4Dot1"<<"Duo1"<<"CrowdBar1"<<"Contrast1";
   namey[2]<<"EDTRS1"<<"Astig1"<<"CrossCyl1"<<"Polarization1"<<"Fixation1"<<"NumberPit1";
   namey[3]<<"Amsler1"<<"Madx1"<<"Multimedia1"<<"Info1"<<"Settings1"<<"FavouriteCharts1";
   qDebug()<<namex[0][0][0]<<endl;
   QPixmap pixmap("/home/gnp/InkICONS/g4631.png");
   for (int i=0;i<4;i++){
       for(int j=0;j<6;j++){
           qDebug()<<namex[i][j]<<endl;
           QString zx0=namex[i][j];
           QString zx1=namey[i][j];
           QPixmap pixmap("/home/gnp/InkICONS/g4631.png");
           qPB[i][j]=new QPushButton;
           QIcon icon;
           QString l="Logmar";
           icon.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/"+zx0), QIcon::Normal);
           icon.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/"+zx1), QIcon::Active);
           qPB[i][j]->setIconSize(pixmap.rect().size());
           qPB[i][j]->setStyleSheet("QPushButton { border: none; }");
           qPB[i][j]->setIcon(icon);
           gl0->addWidget(qPB[i][j],i,j);
       }
   }
   gl0->setVerticalSpacing(20);
   vl0->addLayout(gl0);

   connect(qPB[0][0], &QPushButton::clicked, this, &MainWindow::Logmar);
//   connect(dec, &QPushButton::clicked, this, &MainWindow::Decrease);

   QWidget *w=new QWidget;
   w->setLayout(vl0);
   w->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
   w->setFixedWidth(1920);w->setFixedHeight(1080);
   w->setStyleSheet("background-color: blue;");
   w->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Logmar(){
    QVBoxLayout *log_vl0=new QVBoxLayout;
    QGridLayout *log_gl0=new QGridLayout;
    log_namex[0]<<"ENGLISH"<<"HOTVX"<<"PAEDIATRIC"<<"LANC";
    log_namex[1]<<"LANGUAGE"<<"LEASYMBOL"<<"NUMBER"<<"THUMBE"<<"CrowdBar"<<"Contrast";
    for(int i=0;i<2;i++){
        for(int j=o;j<4;j++){

        }
    }



    QWidget *w1=new QWidget;
    w1->setFixedWidth(1920);
    w1->setFixedHeight(1080);
    w1->show();
}

void MainWindow::Snellen(){

}
void MainWindow::Language(){

}
void MainWindow::Column(){

}
void MainWindow::SingleRow(){

}
void MainWindow::SingleLetter(){

}
void MainWindow::Ishihara(){

}
void MainWindow::Anesikonia(){

}
void MainWindow::Worth4Dot(){

}
void MainWindow::Duo(){

}
void MainWindow::CrowdBar(){

}
void MainWindow::Contrast(){

}
void MainWindow::EDTRS(){

}
void MainWindow::Astig(){

}
void MainWindow::CrossCyl(){

}
void MainWindow::Polarization(){

}
void MainWindow::Fixation(){

}
void MainWindow::NumberPit(){

}
void MainWindow::Amsler(){

}
void MainWindow::Madx(){

}
void MainWindow::Multimedia(){

}
void MainWindow::Info(){

}
void MainWindow::Settings(){

}
void MainWindow::FavouriteCharts(){

}



















