#include "window.h"
#include "mainwindow.h"
#include "ui_window.h"
#include <QStyle>
#include <QDesktopWidget>
#include <QPushButton>
#include <QDebug>
#include <QPropertyAnimation>


Window::Window(QWidget *parent): QMainWindow(parent), ui(new Ui::Window){

    ui->setupUi(this);

    QWidget::setWindowFlags(Qt::FramelessWindowHint);
    about=new About();

    Window::setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            Window::size(),
            qApp->desktop()->availableGeometry()
        )
    );

    ui->starButton->setToolTip("Добавить в избранное");
    ui->pushButton->setEnabled(true);
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);  
    ui->label->setStyleSheet("qproperty-alignment: AlignCenter;");
    ui->tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
}

void Window::on_pushButton_clicked(){

    connect(ui->pushButton, SIGNAL(clicked()), this->parent(), SLOT(closeApp()));
}

Window::~Window(){

    delete ui;
}



void Window::on_pushButton_6_clicked(){

    this->close();
    emit firstWindow();
}

void Window::on_pushButton_2_clicked(){

    about->setWindowModality(Qt::ApplicationModal);
    about->show();
    about->raise();
    about->setFocus(Qt::ActiveWindowFocusReason);
}

void Window::GetRecipte(Recipte Temp,QSqlDatabase M_db){

    m_db=M_db;
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
}

void Window::buttonClicked(){

    emit showWindow();
    emit firstWindow();
    this->close();
}

void Window::on_pushButton_3_clicked(){

    emit showRecipe();
    this->buttonClicked();
}

void Window::on_pushButton_4_clicked(){

    emit showMyRecipe();
    this->buttonClicked();
}

void Window::on_pushButton_5_clicked(){

    emit showMyFavorite();
    this->buttonClicked();
}

void Window::setRecipe(int r){

    this->recipe=r;
    if(recipe==0){
        ui->pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 0, 0);"));
        ui->pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        ui->pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
    }
    if(recipe==1){
        ui->pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 0, 0);"));
        ui->pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        ui->pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
    }
    if(recipe==2){
        ui->pushButton_4->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 170, 0);"));
        ui->pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        ui->pushButton_5->setStyleSheet(QString::fromUtf8("background-color:  rgb(140, 0, 0);"));
    }
}

int Window::getRecipe(){

    return this->recipe;
}


void Window::on_starButton_clicked(){

    QSqlQuery query;
    QString t1;
    t1.setNum(temp.SetId());
    m_db.open();
    query.exec("UPDATE recipte SET favorite = 1 WHERE (((id_recipte)="+t1+"));");
    m_db.close();
}
