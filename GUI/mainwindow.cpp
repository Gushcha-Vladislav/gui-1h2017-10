#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStyle>
#include <QDesktopWidget>
#include <QPushButton>
#include <QMessageBox>


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
    m_db=QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("D:/recipts.sqlite");

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
    SetRecipts(5,0);
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
    SetRecipts(6,0);
    this->showItem();
}

void MainWindow::on_g_clicked()
{
    SetRecipts(1,0);
    this->showItem();
}

void MainWindow::on_osn_clicked()
{
    SetRecipts(4,0);
    this->showItem();
}

void MainWindow::on_desert_clicked()
{
    SetRecipts(2,0);
    this->showItem();
}

void MainWindow::on_drinks_clicked()
{
    SetRecipts(3,0);
    this->showItem();
}

void MainWindow::on_listWidget_clicked(const QModelIndex &index)
{
    window->GetRecipte(recipts.at(index.row()));
    window->show();
    this->close();
}

void MainWindow::on_pushButton_2_clicked()
{

    about->setWindowModality(Qt::ApplicationModal);
    about->show();
    about->raise();
    about->setFocus(Qt::ActiveWindowFocusReason);

}
void MainWindow::SetRecipts(int Type_Recipte,int Type_In){
    ui->listWidget->clear();
    recipts.clear();


    if (!m_db.open())
       {
          qDebug() << "Error: connection with database fail";
       }
       else
       {
          qDebug() << "Database: connection ok";
       }
    QSqlQuery query;
    QString t1,t2;
    t1.setNum(Type_Recipte);
    t2.setNum(Type_In);
    bool task=query.exec("SELECT id_recipte, name, type_recipte, type_in, description, image FROM recipte WHERE ((type_recipte="+t1+") AND (type_in)="+t2+"); ");
    if(!task){
        qDebug() << "Error";
     }
     else
     {
        qDebug() << "Complite";
     }
    while (query.next())
    {
       Recipte temp;

       temp.GetId(query.value(0).toInt());
       temp.GetName(query.value(1).toString());
       temp.GetTypeRecipte(query.value(2).toInt());
       temp.GetTypeIn(query.value(3).toInt());
       temp.GetDescription(query.value(4).toString());
       temp.GetImage(query.value(5).toString());
       QSqlQuery query2;
       bool task2=query2.exec("SELECT product.name, recipte_profuct.mass FROM product INNER JOIN recipte_profuct ON product.id_product = recipte_profuct.id_product WHERE (((recipte_profuct.id_recipte)="+query.value(0).toString()+"));");
       if(!task2){
           qDebug() << "Error 1";
        }
        else
        {
           qDebug() << "Complite";
        }
       QVector<QString> massa;
       QVector<QString> product;
       while(query2.next()){
          massa.push_back(query2.value(1).toString());
          product.push_back(query2.value(0).toString());
       }
       temp.GetMassa(massa);
       temp.GetProduct(product);
       recipts.push_back(temp);
    }
    m_db.close();
    for(int i=0;i<recipts.size();i++){
        ui->listWidget->addItem(recipts.at(i).SetName());
        ui->listWidget->item(i)->setTextAlignment(Qt::AlignHCenter);
    }
}
