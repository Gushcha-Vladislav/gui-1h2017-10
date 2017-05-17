#include "addrecipe.h"
#include "ui_addrecipe.h"
#include "QtGui"
#include "QFileDialog"
#include "QGraphicsPixmapItem"


AddRecipe::AddRecipe(QWidget *parent): QMainWindow(parent), ui(new Ui::AddRecipe){

    ui->setupUi(this);
    QWidget::setWindowFlags(Qt::FramelessWindowHint);

    AddRecipe::setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            AddRecipe::size(),
            qApp->desktop()->availableGeometry()
        )
    );

    about=new About();
    ui->pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 0, 0);"));
}

AddRecipe::~AddRecipe(){

    delete ui;
}

void AddRecipe::buttonClicked(){

    emit showWindow();
    emit firstWindow();
    this->close();
}

void AddRecipe::on_pushButton_clicked(){

    connect(ui->pushButton, SIGNAL(clicked()), this->parent(), SLOT(closeApp()));
}

void AddRecipe::on_pushButton_2_clicked(){

    about->setWindowModality(Qt::ApplicationModal);
    about->show();
    about->raise();
    about->setFocus(Qt::ActiveWindowFocusReason);
}

void AddRecipe::on_pushButton_3_clicked(){

    emit showRecipe();
    this->buttonClicked();
}

void AddRecipe::on_pushButton_4_clicked(){

    emit showMyRecipe();
    this->buttonClicked();
}

void AddRecipe::on_pushButton_5_clicked(){

    emit showMyFavorite();
    this->buttonClicked();
}

void AddRecipe::on_pushButton_6_clicked(){

    emit firstWindow();
    this->close();
}

void AddRecipe::on_pushButton_7_clicked(){

    QSqlQuery query;
    QString t1;
    t1.setNum(ui->comboBox->currentIndex()+1);
    m_db.open();
    QString s="INSERT INTO recipte ( name, type_recipte, type_in, description, image, favorite ) SELECT \""+ui->textEdit->toPlainText()+"\", "+t1+", 1, \""+ui->plainTextEdit_2->toPlainText()+"\", \""+fileName+"\", 0";
    bool task=query.exec(s);
    s="SELECT id_recipte FROM recipte WHERE (name=\""+ui->textEdit->toPlainText()+"\");";
    task=query.exec(s);
    query.next();
    QString id;
    id.setNum(query.value(0).toInt());
    for(int i=0;i<ui->tableWidget->rowCount();i++){
        QString b=ui->tableWidget->item(i,0)->text();
        s="SELECT id_product FROM product WHERE (name=\""+b+"\");";
        task=query.exec(s);
        QString id_product;
        if(query.next()){
            id_product.setNum(query.value(0).toInt());

        }else{

            s="INSERT INTO product ( name ) SELECT \""+b+"\"";
            task=query.exec(s);
            s="SELECT id_product FROM product WHERE (name=\""+b+"\");";
            task=query.exec(s);
            query.next();
            id_product.setNum(query.value(0).toInt());
        }
        s="INSERT INTO recipte_profuct ( id_recipte, id_product, mass ) SELECT "+id+","+id_product+",\""+ui->tableWidget->item(i,1)->text()+"\"";
        task=query.exec(s);
    }
    m_db.close();
    ui->tableWidget->clear();
    ui->textEdit->clear();
    ui->plainTextEdit_2->clear();
    ui->graphicsView->clearMask();
}
void AddRecipe::on_pushButton_8_clicked(){

    ui->tableWidget->insertRow(1);
}

void AddRecipe::on_pushButton_9_clicked(){

    fileName= QFileDialog::getOpenFileName(this,
                                QString::fromUtf8("Открыть файл"),
                                QDir::currentPath(),
                                "Images (*.png *.xpm *.jpg);;All files (*.*)");

    QGraphicsScene *scene=new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    QGraphicsPixmapItem *pixItem= new QGraphicsPixmapItem();
    scene->addItem(pixItem);
    QPixmap pixmap(fileName);
    pixItem->setVisible(true);
    pixItem->setPixmap(pixmap);
    ui->graphicsView->fitInView(0,0,pixmap.width(),pixmap.height());
}

void AddRecipe::downlandSqllite(QSqlDatabase M_db){

    m_db=M_db;
}


