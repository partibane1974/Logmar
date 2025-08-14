#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Logmar.cpp"
#include "Snellen.cpp"

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
   connect(qPB[0][1], &QPushButton::clicked, this, &MainWindow::Snellen);
   connect(qPB[0][2], &QPushButton::clicked, this, &MainWindow::Language);
   connect(qPB[0][3], &QPushButton::clicked, this, &MainWindow::Column);
   connect(qPB[0][4], &QPushButton::clicked, this, &MainWindow::SingleRow);
   connect(qPB[0][5], &QPushButton::clicked, this, &MainWindow::SingleLetter);
   connect(qPB[1][2], &QPushButton::clicked, this, &MainWindow::Worth4Dot);
   connect(qPB[1][3], &QPushButton::clicked, this, &MainWindow::Duo);
   connect(qPB[1][4], &QPushButton::clicked, this, &MainWindow::CrowdBar);
   connect(qPB[1][5], &QPushButton::clicked, this, &MainWindow::Contrast);
   connect(qPB[2][1], &QPushButton::clicked, this, &MainWindow::Astig);
   connect(qPB[2][2], &QPushButton::clicked, this, &MainWindow::CrossCyl);
   connect(qPB[2][2], &QPushButton::clicked, this, &MainWindow::CrossCyl);
   connect(qPB[2][4], &QPushButton::clicked, this, &MainWindow::Fixation);
   connect(qPB[3][1], &QPushButton::clicked, this, &MainWindow::Madx);

//   connect(dec, &QPushButton::clicked, this, &MainWindow::Decrease);SingleLetter

   QWidget *w=new QWidget;
   w->setLayout(vl0);
   w->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
   w->setFixedWidth(1920);w->setFixedHeight(1080);
   w->setStyleSheet("background-color:lightsteelblue;");
   w->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Logmar(){
    qDebug()<<"LOGMAR"<<endl;
    QVBoxLayout *log_vl0=new QVBoxLayout;
    QGridLayout *log_gl0=new QGridLayout;
    log_namex[0]<<"English"<<"Hotvx"<<"Paediatric"<<"Lanc";
    log_namex[1]<<"Language"<<"Leasymbol"<<"Number"<<"Thumbe";
    log_namey[0]<<"English1"<<"Hotvx1"<<"Paediatric1"<<"Lanc1";
    log_namey[1]<<"Language1"<<"Leasymbol1"<<"Number1"<<"Thumbe1";

    for(int i=0;i<2;i++){
        for(int j=0 ;j<4;j++){
            qDebug()<<log_namex[i][j]<<endl;
            QString zy0=log_namex[i][j];
            QString zy1=log_namey[i][j];
            QPixmap pixmap("/home/gnp/InkICONS/g4631.png");
            logPB[i][j]=new QPushButton;
            QIcon icon1;
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/LOGMAR/"+zy0), QIcon::Normal);
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/LOGMAR/"+zy1), QIcon::Active);
            logPB[i][j]->setIconSize(pixmap.rect().size());
//            logPB[i][j]->setStyleSheet("QPushButton { border: none; }");
            logPB[i][j]->setIcon(icon1);
            log_gl0->addWidget(logPB[i][j],i,j);

        }
    }

    log_gl0->setVerticalSpacing(100);log_gl0->setHorizontalSpacing(100);
    log_gl0->setContentsMargins(300, 10, 300, 10);
    log_vl0->addLayout(log_gl0);

    QWidget *w1=new QWidget;
    w1->setLayout(log_vl0);
    w1->setFixedWidth(1920);
    w1->setFixedHeight(1080);
    w1->setStyleSheet("background-color:lightsteelblue;");
    w1->show();
}

void MainWindow::Snellen(){
    qDebug()<<"SNELLEN"<<endl;
    QVBoxLayout *log_vl0=new QVBoxLayout;
    QGridLayout *log_gl0=new QGridLayout;
    log_namex[0]<<"English"<<"Hotvx"<<"Paediatric"<<"Lanc";
    log_namex[1]<<"Language"<<"Leasymbol"<<"Number"<<"Thumbe";
    log_namey[0]<<"English1"<<"Hotvx1"<<"Paediatric1"<<"Lanc1";
    log_namey[1]<<"Language1"<<"Leasymbol1"<<"Number1"<<"Thumbe1";

    for(int i=0;i<2;i++){
        for(int j=0 ;j<4;j++){
            qDebug()<<log_namex[i][j]<<endl;
            QString zy0=log_namex[i][j];
            QString zy1=log_namey[i][j];
            QPixmap pixmap("/home/gnp/InkICONS/g4631.png");
            logPB[i][j]=new QPushButton;
            QIcon icon1;
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/SNELLEN/"+zy0), QIcon::Normal);
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/SNELLEN/"+zy1), QIcon::Active);
            logPB[i][j]->setIconSize(pixmap.rect().size());
//            logPB[i][j]->setStyleSheet("QPushButton { border: none; }");
            logPB[i][j]->setIcon(icon1);
            log_gl0->addWidget(logPB[i][j],i,j);

        }
    }

    log_gl0->setVerticalSpacing(100);log_gl0->setHorizontalSpacing(100);
    log_gl0->setContentsMargins(300, 10, 300, 10);
    log_vl0->addLayout(log_gl0);

    QWidget *w1=new QWidget;
    w1->setLayout(log_vl0);
    w1->setFixedWidth(1920);
    w1->setFixedHeight(1080);
    w1->setStyleSheet("background-color:lightsteelblue;");
    w1->show();

}
void MainWindow::Language(){
    qDebug()<<"LANGUAGE"<<endl;
    QVBoxLayout *lang_vl0=new QVBoxLayout;
    QGridLayout *lang_gl0=new QGridLayout;
    lang_namex[0]<<"Bengali"<<"Gujarathi"<<"Hindi"<<"Kanada"<<"Malayalam";
    lang_namex[1]<<"Marathi"<<"Oriya"<<"Punjabi"<<"Russian"<<"Tamil";
    lang_namex[2]<<"Telugu"<<"Urudu"<<"Arabic"<<"Amharic"<<"Spare";

    lang_namey[0]<<"Bengali1"<<"Gujarathi1"<<"Hindi1"<<"Kanada1"<<"Malayalam1";
    lang_namey[1]<<""<<"Marathi1"<<"Oriya1"<<"Punjabi1"<<"Russian1"<<"Tamil1";
    lang_namey[2]<<"Telugu1"<<"Urudu1"<<"Arabic1"<<"Amharic1"<<"Spare1";


    for(int i=0;i<3;i++){
        for(int j=0 ;j<5;j++){

            qDebug()<<lang_namex[i][j]<<endl;
            QString zy0=lang_namex[i][j];
            QString zy1=lang_namey[i][j];
            QPixmap pixmap("/home/gnp/InkICONS/g4631.png");
            langPB[i][j]=new QPushButton;
            QIcon icon1;
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/LANGUAGE/"+zy0), QIcon::Normal);
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/LANGUAGE/"+zy1), QIcon::Active);
            langPB[i][j]->setIconSize(pixmap.rect().size());
//            logPB[i][j]->setStyleSheet("QPushButton { border: none; }");
            langPB[i][j]->setIcon(icon1);
            lang_gl0->addWidget(langPB[i][j],i,j);

        }
    }

    lang_gl0->setVerticalSpacing(100);lang_gl0->setHorizontalSpacing(100);
    lang_gl0->setContentsMargins(300, 10, 300, 10);
    lang_vl0->addLayout(lang_gl0);

    QWidget *w2=new QWidget;
    w2->setLayout(lang_vl0);
    w2->setFixedWidth(1920);
    w2->setFixedHeight(1080);
    w2->setStyleSheet("background-color:lightsteelblue;");
    w2->show();

}
void MainWindow::Column(){
    qDebug()<<"SingleColumn"<<endl;
    QVBoxLayout *col_vl0=new QVBoxLayout;
    QGridLayout *col_gl0=new QGridLayout;
    col_namex[0]<<"English"<<"Hotvx"<<"Paediatric"<<"Lanc";
    col_namex[1]<<"Language"<<"Leasymbol"<<"Number"<<"Thumbe";

    col_namey[0]<<"English1"<<"Hotvx1"<<"Paediatric1"<<"Lanc1";
    col_namey[1]<<"Language1"<<"Leasymbol1"<<"Number1"<<"Thumbe1";

    for(int i=0;i<2;i++){
        for(int j=0 ;j<4;j++){

            qDebug()<<col_namex[i][j]<<endl;
            QString zy0=col_namex[i][j];
            QString zy1=col_namey[i][j];
            QPixmap pixmap("/home/gnp/InkICONS/g4631.png");
            colPB[i][j]=new QPushButton;
            QIcon icon1;
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/COLUMN/"+zy0), QIcon::Normal);
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/COLUMN/"+zy1), QIcon::Active);
            colPB[i][j]->setIconSize(pixmap.rect().size());
////            logPB[i][j]->setStyleSheet("QPushButton { border: none; }");
            colPB[i][j]->setIcon(icon1);
            col_gl0->addWidget(colPB[i][j],i,j);

        }
    }

    col_gl0->setVerticalSpacing(100);col_gl0->setHorizontalSpacing(100);
    col_gl0->setContentsMargins(300, 10, 300, 10);
    col_vl0->addLayout(col_gl0);

    QWidget *w3=new QWidget;
    w3->setLayout(col_vl0);
    w3->setFixedWidth(1920);
    w3->setFixedHeight(1080);
    w3->setStyleSheet("background-color:lightsteelblue;");
    w3->show();

}
void MainWindow::SingleRow(){
    qDebug()<<"SingleRow"<<endl;
    QVBoxLayout *row_vl0=new QVBoxLayout;
    QGridLayout *row_gl0=new QGridLayout;
    row_namex[0]<<"English"<<"Hotvx"<<"Paediatric"<<"Lanc";
    row_namex[1]<<"Language"<<"Leasymbol"<<"Number"<<"Thumbe";

    row_namey[0]<<"English1"<<"Hotvx1"<<"Paediatric1"<<"Lanc1";
    row_namey[1]<<"Language1"<<"Leasymbol1"<<"Number1"<<"Thumbe1";

    for(int i=0;i<2;i++){
        for(int j=0 ;j<4;j++){

            qDebug()<<col_namex[i][j]<<endl;
            QString zy0=row_namex[i][j];
            QString zy1=row_namey[i][j];
            QPixmap pixmap("/home/gnp/InkICONS/g4631.png");
            rowPB[i][j]=new QPushButton;
            QIcon icon1;
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/ROW/"+zy0), QIcon::Normal);
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/ROW/"+zy1), QIcon::Active);
            rowPB[i][j]->setIconSize(pixmap.rect().size());
////            logPB[i][j]->setStyleSheet("QPushButton { border: none; }");
            rowPB[i][j]->setIcon(icon1);
            row_gl0->addWidget(rowPB[i][j],i,j);

        }
    }

    row_gl0->setVerticalSpacing(100);row_gl0->setHorizontalSpacing(100);
    row_gl0->setContentsMargins(300, 10, 300, 10);
    row_vl0->addLayout(row_gl0);

    QWidget *w4=new QWidget;
    w4->setLayout(row_vl0);
    w4->setFixedWidth(1920);
    w4->setFixedHeight(1080);
    w4->setStyleSheet("background-color:lightsteelblue;");
    w4->show();


}
void MainWindow::SingleLetter(){
    qDebug()<<"SingleLetter"<<endl;
    QVBoxLayout *s_letter_vl0=new QVBoxLayout;
    QGridLayout *s_letter_gl0=new QGridLayout;
    s_letter_namex[0]<<"English"<<"Hotvx"<<"Paediatric"<<"Lanc";
    s_letter_namex[1]<<"Language"<<"Leasymbol"<<"Number"<<"Thumbe";

    s_letter_namey[0]<<"English1"<<"Hotvx1"<<"Paediatric1"<<"Lanc1";
    s_letter_namey[1]<<"Language1"<<"Leasymbol1"<<"Number1"<<"Thumbe1";

    for(int i=0;i<2;i++){
        for(int j=0 ;j<4;j++){

            qDebug()<<s_letter_namex[i][j]<<endl;
            QString zy0=s_letter_namex[i][j];
            QString zy1=s_letter_namey[i][j];
            QPixmap pixmap("/home/gnp/InkICONS/g4631.png");
            s_letterPB[i][j]=new QPushButton;
            QIcon icon1;
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/Letter/"+zy0), QIcon::Normal);
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/Letter/"+zy1), QIcon::Active);
            s_letterPB[i][j]->setIconSize(pixmap.rect().size());
//            logPB[i][j]->setStyleSheet("QPushButton { border: none; }");
            s_letterPB[i][j]->setIcon(icon1);
            s_letter_gl0->addWidget(s_letterPB[i][j],i,j);

        }
    }

    s_letter_gl0->setVerticalSpacing(100);s_letter_gl0->setHorizontalSpacing(100);
    s_letter_gl0->setContentsMargins(300, 10, 300, 10);
    s_letter_vl0->addLayout(s_letter_gl0);

    QWidget *w5=new QWidget;
    w5->setLayout(s_letter_vl0);
    w5->setFixedWidth(1920);
    w5->setFixedHeight(1080);
    w5->setStyleSheet("background-color:lightsteelblue;");
    w5->show();




}
void MainWindow::Ishihara(){

}
void MainWindow::Anesikonia(){

}
void MainWindow::Worth4Dot(){
    qDebug()<<"SingleLetter"<<endl;
    QVBoxLayout *wdot_vl0=new QVBoxLayout;
    QGridLayout *wdot_gl0=new QGridLayout;
    wdot_namex[0]<<"Railway"<<"Worth4Dot"<<"SingleTest";

    wdot_namey[0]<<"Railway1"<<"Worth4Dot1"<<"SingleTest1";


    for(int i=0;i<1;i++){
        for(int j=0 ;j<3;j++){

            qDebug()<<wdot_namex[i][j]<<endl;
            QString zy0=wdot_namex[i][j];
            QString zy1=wdot_namey[i][j];
            QPixmap pixmap("/home/gnp/InkICONS/g4631.png");
            wdotPB[i][j]=new QPushButton;
            QIcon icon1;
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/Worth4Dot/"+zy0), QIcon::Normal);
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/Worth4Dot/"+zy1), QIcon::Active);
            wdotPB[i][j]->setIconSize(pixmap.rect().size());
//            logPB[i][j]->setStyleSheet("QPushButton { border: none; }");
            wdotPB[i][j]->setIcon(icon1);
            wdot_gl0->addWidget(wdotPB[i][j],i,j);

        }
    }

    wdot_gl0->setVerticalSpacing(100);wdot_gl0->setHorizontalSpacing(100);
    wdot_gl0->setContentsMargins(300, 10, 300, 10);
    wdot_vl0->addLayout(wdot_gl0);

    QWidget *w6=new QWidget;
    w6->setLayout(wdot_vl0);
    w6->setFixedWidth(1920);
    w6->setFixedHeight(1080);
    w6->setStyleSheet("background-color:lightsteelblue;");
    w6->show();

}
void MainWindow::Duo(){
    qDebug()<<"DUO"<<endl;
    QVBoxLayout *duo_vl0=new QVBoxLayout;
    QGridLayout *duo_gl0=new QGridLayout;
    duo_namex[0]<<"DuoChrome"<<"DuoDot";

    duo_namey[0]<<"DuoChrome1"<<"DuoDot";


    for(int i=0;i<1;i++){
        for(int j=0 ;j<2;j++){

            qDebug()<<duo_namex[i][j]<<endl;
            QString zy0=duo_namex[i][j];
            QString zy1=duo_namey[i][j];
            QPixmap pixmap("/home/gnp/InkICONS/g4631.png");
            duoPB[i][j]=new QPushButton;
            QIcon icon1;
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/Duo/"+zy0), QIcon::Normal);
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/Duo/"+zy1), QIcon::Active);
            duoPB[i][j]->setIconSize(pixmap.rect().size());
//            logPB[i][j]->setStyleSheet("QPushButton { border: none; }");
            duoPB[i][j]->setIcon(icon1);
            duo_gl0->addWidget(duoPB[i][j],i,j);

        }
    }

    duo_gl0->setVerticalSpacing(100);duo_gl0->setHorizontalSpacing(100);
    duo_gl0->setContentsMargins(300, 10, 300, 10);
    duo_vl0->addLayout(duo_gl0);

    QWidget *w7=new QWidget;
    w7->setLayout(duo_vl0);
    w7->setFixedWidth(1920);
    w7->setFixedHeight(1080);
    w7->setStyleSheet("background-color:lightsteelblue;");
    w7->show();

}
void MainWindow::CrowdBar(){
    qDebug()<<"CROWDBAR"<<endl;
    QVBoxLayout *cbar_vl0=new QVBoxLayout;
    QGridLayout *cbar_gl0=new QGridLayout;
    cbar_namex[0]<<"English"<<"Hotvx"<<"Paediatric"<<"Lanc";
    cbar_namex[1]<<"Language"<<"Leasymbol"<<"Number"<<"Thumbe";
    cbar_namey[0]<<"English1"<<"Hotvx1"<<"Paediatric1"<<"Lanc1";
    cbar_namey[1]<<"Language1"<<"Leasymbol1"<<"Number1"<<"Thumbe1";

    for(int i=0;i<2;i++){
        for(int j=0 ;j<4;j++){
            qDebug()<<cbar_namex[i][j]<<endl;
            QString zy0=cbar_namex[i][j];
            QString zy1=cbar_namey[i][j];
            QPixmap pixmap("/home/gnp/InkICONS/g4631.png");
            cbarPB[i][j]=new QPushButton;
            QIcon icon1;
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/CrowdBar/"+zy0), QIcon::Normal);
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/CrowdBar/"+zy1), QIcon::Active);
            cbarPB[i][j]->setIconSize(pixmap.rect().size());
//            cbarPB[i][j]->setStyleSheet("QPushButton { border: none; }");
            cbarPB[i][j]->setIcon(icon1);
            cbar_gl0->addWidget(cbarPB[i][j],i,j);

        }
    }

    cbar_gl0->setVerticalSpacing(100);cbar_gl0->setHorizontalSpacing(100);
    cbar_gl0->setContentsMargins(300, 10, 300, 10);
    cbar_vl0->addLayout(cbar_gl0);

    QWidget *w8=new QWidget;
    w8->setLayout(cbar_vl0);
    w8->setFixedWidth(1920);
    w8->setFixedHeight(1080);
    w8->setStyleSheet("background-color:lightsteelblue;");
    w8->show();


}
void MainWindow::Contrast(){
    qDebug()<<"CROWDBAR"<<endl;
    QVBoxLayout *con_vl0=new QVBoxLayout;
    QGridLayout *con_gl0=new QGridLayout;
    con_namex[0]<<"English"<<"Hotvx"<<"Paediatric"<<"Lanc";
    con_namex[1]<<"Language"<<"Leasymbol"<<"Number"<<"Thumbe";
    con_namey[0]<<"English1"<<"Hotvx1"<<"Paediatric1"<<"Lanc1";
    con_namey[1]<<"Language1"<<"Leasymbol1"<<"Number1"<<"Thumbe1";

    for(int i=0;i<2;i++){
        for(int j=0 ;j<4;j++){
            qDebug()<<con_namex[i][j]<<endl;
            QString zy0=con_namex[i][j];
            QString zy1=con_namey[i][j];
            QPixmap pixmap("/home/gnp/InkICONS/g4631.png");
            conPB[i][j]=new QPushButton;
            QIcon icon1;
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/CONTRAST/"+zy0), QIcon::Normal);
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/CONTRAST/"+zy1), QIcon::Active);
            conPB[i][j]->setIconSize(pixmap.rect().size());
//            conPB[i][j]->setStyleSheet("QPushButton { border: none; }");
            conPB[i][j]->setIcon(icon1);
            con_gl0->addWidget(conPB[i][j],i,j);

        }
    }

    con_gl0->setVerticalSpacing(100);con_gl0->setHorizontalSpacing(100);
    con_gl0->setContentsMargins(300, 10, 300, 10);
    con_vl0->addLayout(con_gl0);

    QWidget *w9=new QWidget;
    w9->setLayout(con_vl0);
    w9->setFixedWidth(1920);
    w9->setFixedHeight(1080);
    w9->setStyleSheet("background-color:lightsteelblue;");
    w9->show();


}
void MainWindow::EDTRS(){

}
void MainWindow::Astig(){
    qDebug()<<"SingleLetter"<<endl;
    QVBoxLayout *ast_vl0=new QVBoxLayout;
    QGridLayout *ast_gl0=new QGridLayout;
    ast_namex[0]<<"AstigBar"<<"AstigFan";

    ast_namey[0]<<"AstigBar1"<<"AstigFan1";


    for(int i=0;i<1;i++){
        for(int j=0 ;j<2;j++){

            qDebug()<<ast_namex[i][j]<<endl;
            QString zy0=ast_namex[i][j];
            QString zy1=ast_namey[i][j];
            QPixmap pixmap("/home/gnp/InkICONS/g4631.png");
            astPB[i][j]=new QPushButton;
            QIcon icon1;
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/ASTIG/"+zy0), QIcon::Normal);
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/ASTIG/"+zy1), QIcon::Active);
            astPB[i][j]->setIconSize(pixmap.rect().size());
//            logPB[i][j]->setStyleSheet("QPushButton { border: none; }");
            astPB[i][j]->setIcon(icon1);
            ast_gl0->addWidget(astPB[i][j],i,j);

        }
    }

    ast_gl0->setVerticalSpacing(100);ast_gl0->setHorizontalSpacing(100);
    ast_gl0->setContentsMargins(300, 10, 300, 10);
    ast_vl0->addLayout(ast_gl0);

    QWidget *w10=new QWidget;
    w10->setLayout(ast_vl0);
    w10->setFixedWidth(1920);
    w10->setFixedHeight(1080);
    w10->setStyleSheet("background-color:lightsteelblue;");
    w10->show();

}
void MainWindow::CrossCyl(){
    qDebug()<<"SingleLetter"<<endl;
    QVBoxLayout *cyl_vl0=new QVBoxLayout;
    QGridLayout *cyl_gl0=new QGridLayout;
    cyl_namex[0]<<"CrossCylinder"<<"Dot";

    cyl_namey[0]<<"CrossCylinder1"<<"Dot1";


    for(int i=0;i<1;i++){
        for(int j=0 ;j<2;j++){

            qDebug()<<cyl_namex[i][j]<<endl;
            QString zy0=cyl_namex[i][j];
            QString zy1=cyl_namey[i][j];
            QPixmap pixmap("/home/gnp/InkICONS/g4631.png");
            cylPB[i][j]=new QPushButton;
            QIcon icon1;
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/CROSSCYL/"+zy0), QIcon::Normal);
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/CROSSCYL/"+zy1), QIcon::Active);
            cylPB[i][j]->setIconSize(pixmap.rect().size());
//            logPB[i][j]->setStyleSheet("QPushButton { border: none; }");
            cylPB[i][j]->setIcon(icon1);
            cyl_gl0->addWidget(cylPB[i][j],i,j);

        }
    }

    cyl_gl0->setVerticalSpacing(100);cyl_gl0->setHorizontalSpacing(100);
    cyl_gl0->setContentsMargins(300, 10, 300, 10);
    cyl_vl0->addLayout(cyl_gl0);

    QWidget *w11=new QWidget;
    w11->setLayout(cyl_vl0);
    w11->setFixedWidth(1920);
    w11->setFixedHeight(1080);
    w11->setStyleSheet("background-color:lightsteelblue;");
    w11->show();

}
void MainWindow::Polarization(){

}
void MainWindow::Fixation(){
    qDebug()<<"SingleLetter"<<endl;
    QVBoxLayout *fix_vl0=new QVBoxLayout;
    QGridLayout *fix_gl0=new QGridLayout;
    fix_namex[0]<<"FixationDisparity"<<"FixationTarget";

    fix_namey[0]<<"FixationDisparity1"<<"FixationTarget1";


    for(int i=0;i<1;i++){
        for(int j=0 ;j<2;j++){

            qDebug()<<fix_namex[i][j]<<endl;
            QString zy0=fix_namex[i][j];
            QString zy1=fix_namey[i][j];
            QPixmap pixmap("/home/gnp/InkICONS/g4631.png");
            fixPB[i][j]=new QPushButton;
            QIcon icon1;
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/FIXATION/"+zy0), QIcon::Normal);
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/FIXATION/"+zy1), QIcon::Active);
            fixPB[i][j]->setIconSize(pixmap.rect().size());
//            logPB[i][j]->setStyleSheet("QPushButton { border: none; }");
            fixPB[i][j]->setIcon(icon1);
            fix_gl0->addWidget(fixPB[i][j],i,j);

        }
    }

    fix_gl0->setVerticalSpacing(100);fix_gl0->setHorizontalSpacing(100);
    fix_gl0->setContentsMargins(300, 10, 300, 10);
    fix_vl0->addLayout(fix_gl0);

    QWidget *w13=new QWidget;
    w13->setLayout(fix_vl0);
    w13->setFixedWidth(1920);
    w13->setFixedHeight(1080);
    w13->setStyleSheet("background-color:lightsteelblue;");
    w13->show();


}
void MainWindow::NumberPit(){

}
void MainWindow::Amsler(){

}
void MainWindow::Madx(){
    qDebug()<<"SingleLetter"<<endl;
    QVBoxLayout *mad_vl0=new QVBoxLayout;
    QGridLayout *mad_gl0=new QGridLayout;
    mad_namex[0]<<"Madvt"<<"MadRod"<<"MadHz";

    mad_namey[0]<<"Madvt1"<<"MadRod1"<<"MadHz1";


    for(int i=0;i<1;i++){
        for(int j=0 ;j<3;j++){

            qDebug()<<mad_namex[i][j]<<endl;
            QString zy0=mad_namex[i][j];
            QString zy1=mad_namey[i][j];
            QPixmap pixmap("/home/gnp/InkICONS/g4631.png");
            madPB[i][j]=new QPushButton;
            QIcon icon1;
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/MADX/"+zy0), QIcon::Normal);
            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/MADX/"+zy1), QIcon::Active);
            madPB[i][j]->setIconSize(pixmap.rect().size());
//            logPB[i][j]->setStyleSheet("QPushButton { border: none; }");
            madPB[i][j]->setIcon(icon1);
            mad_gl0->addWidget(madPB[i][j],i,j);

        }
    }

    mad_gl0->setVerticalSpacing(100);mad_gl0->setHorizontalSpacing(100);
    mad_gl0->setContentsMargins(300, 10, 300, 10);
    mad_vl0->addLayout(mad_gl0);

    QWidget *w14=new QWidget;
    w14->setLayout(mad_vl0);
    w14->setFixedWidth(1920);
    w14->setFixedHeight(1080);
    w14->setStyleSheet("background-color:lightsteelblue;");
    w14->show();

}
void MainWindow::Multimedia(){

}
void MainWindow::Info(){

}
void MainWindow::Settings(){

}
void MainWindow::FavouriteCharts(){

}



















