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
    QPropertyAnimation* animation = new QPropertyAnimation(this, "windowOpacity");

    animation->setDuration(2000);

    animation->setStartValue(0);

    animation->setEndValue(1);

    animation->start();
    QWidget::setWindowFlags(Qt::FramelessWindowHint);

    MainWindow::setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            MainWindow::size(),
            qApp->desktop()->availableGeometry()
        )
    );
    ui->pushButton->setEnabled(true);
    ui->listWidget->hide();
    window= new Window();
    about=new About();
    connect(window, &Window::firstWindow, this, &MainWindow::show);
    connect(about, &About::firstWindow, this, &MainWindow::show);
}

void MainWindow::on_pushButton_clicked(){
    QPropertyAnimation* animation = new QPropertyAnimation(this, "windowOpacity");

    animation->setDuration(2000);

    animation->setStartValue(1);

    animation->setEndValue(0);

    animation->start();

    connect(animation, SIGNAL(finished()), this, SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showItem(){
    ui->desert->hide();
    ui->drinks->hide();
    ui->g->hide();
    ui->salad->hide();
    ui->osn->hide();
    ui->soup->hide();
    ui->label_desert->hide();
    ui->label_drinks->hide();
    ui->label_g->hide();
    ui->label_osn->hide();
    ui->label_osn2->hide();
    ui->label_salad->hide();
    ui->label_soup->hide();
    ui->listWidget->show();
}

void MainWindow::hideItemAndShowMenu(){
    ui->desert->show();
    ui->drinks->show();
    ui->g->show();
    ui->salad->show();
    ui->osn->show();
    ui->soup->show();
    ui->label_desert->show();
    ui->label_drinks->show();
    ui->label_g->show();
    ui->label_osn->show();
    ui->label_osn2->show();
    ui->label_salad->show();
    ui->label_soup->show();
    ui->listWidget->hide();
}

void MainWindow::on_salad_clicked()
{
    this->showItem();

}

void MainWindow::on_pushButton_3_clicked()
{
    this->hideItemAndShowMenu();
}

void MainWindow::on_pushButton_4_clicked()
{
    this->hideItemAndShowMenu();
}

void MainWindow::on_soup_clicked()
{
    this->showItem();
}

void MainWindow::on_g_clicked()
{
    this->showItem();
}

void MainWindow::on_osn_clicked()
{
    this->showItem();
}

void MainWindow::on_desert_clicked()
{
    this->showItem();
}

void MainWindow::on_drinks_clicked()
{
    this->showItem();
}

void MainWindow::on_listWidget_clicked(const QModelIndex &index)
{
    window->show();
    this->close();
}

void MainWindow::on_pushButton_2_clicked()
{

    about->show();

}
