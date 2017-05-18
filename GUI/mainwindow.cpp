#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStyle>
#include <QDebug>
#include <QDesktopWidget>
#include <QPushButton>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent),ui(new Ui::MainWindow){

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

    window=new Window(parent);
    about=new About(parent);
    addRecipe=new AddRecipe(parent);

    window->hide();
    about->hide();
    addRecipe->hide();
    window->setGeometry(0,0,1149,667);
    about->setGeometry(351,187,447,293);
    addRecipe->setGeometry(0,0,1149,667);
    ui->pushButton->setEnabled(true);
    ui->listWidget->hide();

    connect(window, &Window::firstWindow, this, &MainWindow::show);
    connect(window, &Window::showWindow, this, &MainWindow::hideItemAndShowMenu);
    connect(window, &Window::showRecipe, this, &MainWindow::setRecipe);
    connect(window, &Window::showMyRecipe, this, &MainWindow::setMyRecipe);
    connect(window, &Window::showMyFavorite, this, &MainWindow::setMyFavorite);
    connect(about, &About::firstWindow, this, &MainWindow::show);  
    connect(addRecipe, &AddRecipe::firstWindow, this, &MainWindow::show);
    connect(addRecipe, &AddRecipe::showWindow, this, &MainWindow::hideItemAndShowMenu);
    connect(addRecipe, &AddRecipe::showRecipe, this, &MainWindow::setRecipe);
    connect(addRecipe, &AddRecipe::showMyRecipe, this, &MainWindow::setMyRecipe);
    connect(addRecipe, &AddRecipe::showMyFavorite, this, &MainWindow::setMyFavorite);

    m_db=QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("../GUI/baza/recipts.sqlite");
    /*QString a(QApplication::applicationDirPath());
    int i;
    for(i=a.length();a.at(i-1)!='/';i--){}
    i--;
    for(;a.at(i-1)!='/';i--){}
    a=a.remove(i-1,a.length()-1)+"/GUI/baza/recipts.sqlite";
    qDebug()<<a;
    m_db.setDatabaseName(a);*/
    setRecipe();
}

void MainWindow::on_pushButton_clicked(){

    connect(ui->pushButton, SIGNAL(clicked()), this->parent(), SLOT(closeApp()));
}

MainWindow::~MainWindow(){

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

void MainWindow::download(int Type){

    QString Condition;
    QString t;
    t.setNum(Type);
    if(recipe==0){
    Condition="(((type_recipte)="+t+") AND ((type_in)=0))";
    SetRecipts(Condition);
    }
    if(recipe==1){
    Condition="(((type_recipte)="+t+") AND ((type_in)=1))";
    SetRecipts(Condition);
    }
    if(recipe==2){
    Condition="((type_recipte="+t+") AND (favorite=1))";
    SetRecipts(Condition);
    }
    this->showItem();
}

void MainWindow::on_g_clicked(){

    download(1);
}

void MainWindow::on_desert_clicked(){

    download(2);
}

void MainWindow::on_drinks_clicked(){

   download(3);
}

void MainWindow::on_osn_clicked(){

    download(4);
}

void MainWindow::on_salad_clicked(){

    download(5);
}

void MainWindow::on_soup_clicked(){

    download(6);
}

void MainWindow::on_pushButton_2_clicked(){

    about->setWindowModality(Qt::ApplicationModal);
    about->show();
    about->raise();
    about->setFocus(Qt::ActiveWindowFocusReason);

}

void MainWindow::on_pushButton_3_clicked(){

    this->hideItemAndShowMenu();
    setRecipe();

}

void MainWindow::on_pushButton_4_clicked(){

    this->hideItemAndShowMenu();
    setMyRecipe();
}

void MainWindow::on_pushButton_5_clicked(){

    this->hideItemAndShowMenu();
    setMyFavorite();
}
void MainWindow::on_pushButton_6_clicked(){

    addRecipe->downlandSqllite(m_db);
    addRecipe->show();
    this->hide();
}

void MainWindow::on_listWidget_clicked(const QModelIndex &index){

    window->GetRecipte(recipts.at(index.row()),m_db);
    window->setRecipe(recipe);
    window->show();
    this->hide();
}

void MainWindow::SetRecipts(QString Condition){

    recipts.clear();
    QSqlQuery query;
    m_db.open();
    query.exec("SELECT id_recipte, name, type_recipte, type_in, description, image FROM recipte WHERE "+Condition+" ORDER BY name;");
    while (query.next()){

       Recipte temp;
       temp.GetId(query.value(0).toInt());
       temp.GetName(query.value(1).toString());
       temp.GetTypeRecipte(query.value(2).toInt());
       temp.GetTypeIn(query.value(3).toInt());
       temp.GetDescription(query.value(4).toString());
       temp.GetImage(query.value(5).toString());
       temp.GetFavorite(query.value(6).toInt());
       QSqlQuery query2;
       query2.exec("SELECT product.name, recipte_profuct.mass FROM product INNER JOIN recipte_profuct ON product.id_product = recipte_profuct.id_product WHERE (((recipte_profuct.id_recipte)="+query.value(0).toString()+")) ORDER BY product.name;");
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
    initListWidget();
}

void MainWindow::initListWidget(){

    ui->listWidget->clear();
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
    ui->pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
}

void MainWindow::setMyRecipe(){

    this->recipe=1;
    ui->pushButton_6->show();
    ui->pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 0, 0);"));
    ui->pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
    ui->pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
}
void MainWindow::setMyFavorite(){

    this->recipe=2;
    ui->pushButton_6->hide();
    ui->pushButton_4->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 170, 0);"));
    ui->pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
    ui->pushButton_5->setStyleSheet(QString::fromUtf8("background-color:  rgb(140, 0, 0);"));
}
