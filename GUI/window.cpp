#include "window.h"
#include "mainwindow.h"
#include "ui_window.h"
#include <QStyle>
#include <QDesktopWidget>
#include <QPushButton>
#include <QPropertyAnimation>


Window::Window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Window)
{
    ui->setupUi(this);

    QWidget::setWindowFlags(Qt::FramelessWindowHint);

    Window::setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            Window::size(),
            qApp->desktop()->availableGeometry()
        )
    );
    ui->pushButton->setEnabled(true);
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    about=new About();
}


void Window::on_pushButton_clicked(){
    QPropertyAnimation* animation = new QPropertyAnimation(this, "windowOpacity");

    animation->setDuration(2000);

    animation->setStartValue(1);

    animation->setEndValue(0);

    animation->start();

    connect(animation, SIGNAL(finished()), this, SLOT(close()));
}


Window::~Window()
{
    delete ui;
}



void Window::on_pushButton_6_clicked()
{

    this->close();
    emit firstWindow();

}

void Window::on_pushButton_2_clicked()
{
    about->setWindowModality(Qt::ApplicationModal);
    about->show();
    about->raise();
    about->setFocus(Qt::ActiveWindowFocusReason);
}
<<<<<<< HEAD
void Window::GetRecipte(Recipte Temp){
    temp=Temp;
    ui->textBrowser->clear();
    ui->textBrowser->append(temp.SetDescription());
    ui->widget_5->setStyleSheet("border-image: url("+Temp.SetImage()+");");
    ui->label->setText(Temp.SetName());
    ui->tableWidget->setRowCount(temp.SetProduct().size());
    for(int i=0;i<temp.SetProduct().size();i++){
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(temp.SetProduct().at(i)));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(temp.SetMassa().at(i)));
    }

=======


void Window::buttonClicked(){
    emit showWindow();
    emit firstWindow();
    this->close();
}

void Window::on_pushButton_3_clicked()
{
    emit showRecipe();
    this->buttonClicked();
}

void Window::on_pushButton_4_clicked()
{
    emit showMyRecipe();
    this->buttonClicked();
>>>>>>> origin/master
}
