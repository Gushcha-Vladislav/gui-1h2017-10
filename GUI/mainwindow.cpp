#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStyle>
#include <QDesktopWidget>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //QWidget::setWindowFlags(Qt::FramelessWindowHint);

    MainWindow::setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            MainWindow::size(),
            qApp->desktop()->availableGeometry()
        )
    );


//QObject::connect(ui->pushButton, SIGNAL(clicked()), qApp, SLOT(quit()));


}

void MainWindow::on_pushButton_clicked(){

}

MainWindow::~MainWindow()
{
    delete ui;
}
