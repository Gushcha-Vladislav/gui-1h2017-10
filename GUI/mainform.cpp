#include "mainform.h"
#include "ui_mainform.h"
#include "mainwindow.h"
#include "QWidget"

MainForm::MainForm(QWidget *parent): QMainWindow(parent), ui(new Ui::MainForm){

    ui->setupUi(this);

    QPropertyAnimation* animation = new QPropertyAnimation(this, "windowOpacity");
    animation->setDuration(2000);
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start();

    QWidget::setWindowFlags(Qt::FramelessWindowHint);

    MainForm::setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            MainForm::size(),
            qApp->desktop()->availableGeometry()
        )
    );

    MainWindow *w=new MainWindow(this);
    w->setGeometry(0,0,1149,667);
    QIcon(":/resource/images/favicon.ico");
}

void MainForm::closeApp(){

    QPropertyAnimation* animation = new QPropertyAnimation(this, "windowOpacity");
    animation->setDuration(2000);
    animation->setStartValue(1);
    animation->setEndValue(0);
    animation->start();
    connect(animation, SIGNAL(finished()), this, SLOT(close()));
}


MainForm::~MainForm(){

    delete ui;
}
