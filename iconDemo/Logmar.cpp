//void MainWindow::Logmar(){
//    qDebug()<<"LOGMAR"<<endl;
//NEW

//    QVBoxLayout *log_vl0=new QVBoxLayout;
//    QGridLayout *log_gl0=new QGridLayout;
//    log_namex[0]<<"English"<<"Hotvx"<<"Paediatric"<<"Lanc";
//    log_namex[1]<<"Language"<<"Leasymbol"<<"Number"<<"Thumbe";
//    log_namey[0]<<"English1"<<"Hotvx1"<<"Paediatric1"<<"Lanc1";
//    log_namey[1]<<"Language1"<<"Leasymbol1"<<"Number1"<<"Thumbe1";

//    for(int i=0;i<2;i++){
//        for(int j=0 ;j<4;j++){
//            qDebug()<<log_namex[i][j]<<endl;
//            QString zy0=log_namex[i][j];
//            QString zy1=log_namey[i][j];
//            QPixmap pixmap("/home/gnp/InkICONS/g4631.png");
//            logPB[i][j]=new QPushButton;
//            QIcon icon1;
//            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/LOGMAR/"+zy0), QIcon::Normal);
//            icon1.addPixmap(QPixmap("/home/gnp/InkICONS/PNG/LOGMAR/"+zy1), QIcon::Active);
//            logPB[i][j]->setIconSize(pixmap.rect().size());
////            logPB[i][j]->setStyleSheet("QPushButton { border: none; }");
//            logPB[i][j]->setIcon(icon1);
//            log_gl0->addWidget(logPB[i][j],i,j);

//        }
//    }

//    log_gl0->setVerticalSpacing(100);log_gl0->setHorizontalSpacing(100);
//    log_gl0->setContentsMargins(300, 10, 300, 10);
//    log_vl0->addLayout(log_gl0);

//    QWidget *w1=new QWidget;
//    w1->setLayout(log_vl0);
//    w1->setFixedWidth(1920);
//    w1->setFixedHeight(1080);
//    w1->setStyleSheet("background-color:lightsteelblue;");
//    w1->show();
//}
