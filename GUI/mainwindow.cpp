#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStyle>
#include <QDebug>
#include <QDesktopWidget>
#include <QPushButton>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QWidget::setWindowFlags(Qt::FramelessWindowHint);

    MainWindow::setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            MainWindow::size(),
            qApp->desktop()->availableGeometry()
        )
    );
    recipe=0;
    ui->pushButton->setEnabled(true);
    ui->listWidget->hide();
    window=new Window(parent);
    about=new About(parent);
    setRecipe();
    addRecipe=new AddRecipe(parent);
    window->hide();
    about->hide();
    addRecipe->hide();
    window->setGeometry(0,0,1149,667);
    about->setGeometry(351,187,447,293);
    addRecipe->setGeometry(0,0,1149,667);
    connect(window, &Window::firstWindow, this, &MainWindow::show);
    connect(window, &Window::showWindow, this, &MainWindow::hideItemAndShowMenu);
    connect(window, &Window::showRecipe, this, &MainWindow::setRecipe);
    connect(window, &Window::showMyRecipe, this, &MainWindow::setMyRecipe);
    connect(about, &About::firstWindow, this, &MainWindow::show);
    m_db=QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("D:/recipts.sqlite");
    connect(addRecipe, &AddRecipe::firstWindow, this, &MainWindow::show);
    connect(addRecipe, &AddRecipe::showWindow, this, &MainWindow::hideItemAndShowMenu);
    connect(addRecipe, &AddRecipe::showRecipe, this, &MainWindow::setRecipe);
    connect(addRecipe, &AddRecipe::showMyRecipe, this, &MainWindow::setMyRecipe);
}

void MainWindow::on_pushButton_clicked(){

    connect(ui->pushButton, SIGNAL(clicked()), this->parent(), SLOT(closeApp()));

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
    if(!recipe){
    SetRecipts(5,0);
    }
    this->showItem();

}

void MainWindow::on_pushButton_3_clicked()
{
    this->hideItemAndShowMenu();
    setRecipe();
}

void MainWindow::on_pushButton_4_clicked()
{
    this->hideItemAndShowMenu();
    setMyRecipe();
}

void MainWindow::on_soup_clicked()
{
    if(!recipe){
    SetRecipts(6,0);
    }
    this->showItem();
}

void MainWindow::on_g_clicked()
{
    if(!recipe){
    SetRecipts(1,0);
    }
    this->showItem();
}

void MainWindow::on_osn_clicked()
{
    if(!recipe){
    SetRecipts(4,0);
    }
    this->showItem();
}

void MainWindow::on_desert_clicked()
{
    if(!recipe){
    SetRecipts(2,0);
    }
    this->showItem();
}

void MainWindow::on_drinks_clicked()
{
    if(!recipe){
    SetRecipts(3,0); 
    }
    this->showItem();
}

void MainWindow::on_listWidget_clicked(const QModelIndex &index)
{

    window->GetRecipte(recipts.at(index.row()));
    window->setRecipe(recipe);
    window->show();
    this->hide();
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
void MainWindow::setRecipe(){
    this->recipe=0;
    ui->pushButton_6->hide();
    ui->pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 0, 0);"));
    ui->pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));

}

void MainWindow::setMyRecipe(){
    this->recipe=1;
    ui->pushButton_6->show();
    ui->pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 0, 0);"));
    ui->pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
}


void MainWindow::on_pushButton_6_clicked()
{
    addRecipe->show();
    this->hide();
}
