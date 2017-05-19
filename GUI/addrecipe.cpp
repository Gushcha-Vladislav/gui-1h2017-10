#include "addrecipe.h"
#include "ui_addrecipe.h"
#include "QtGui"
#include "QFileDialog"
#include "QMessageBox"
#include "QErrorMessage"

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
    scene=new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    pixItem= new QGraphicsPixmapItem();
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

void AddRecipe::on_pushButton_6_clicked()
{
    clearAll();
    emit firstWindow();
    this->close();
}

void AddRecipe::on_pushButton_7_clicked(){

    QSqlQuery query;
    QString t1;
    t1=ui->textEdit->toPlainText();
    if(t1!=QString ("") ||t1!=QString (" ")){
        t1=ui->plainTextEdit_2->toPlainText();
        if(t1!=QString ("") ||t1!=QString (" ")){
            if(ui->tableWidget->item(0,0)->text()!="" || ui->tableWidget->item(0,1)->text()!=""){
                t1.setNum(ui->comboBox->currentIndex()+1);
                m_db.open();
                QString s="INSERT INTO recipte ( name, type_recipte, type_in, description, image, favorite ) SELECT \""+ui->textEdit->toPlainText()+"\", "+t1+", 1, \""+ui->plainTextEdit_2->toPlainText()+"\", \""+"../GUI/users/"+ui->textEdit->toPlainText()+".jpg\", 0";
                query.exec(s);
                s="SELECT id_recipte FROM recipte WHERE (name=\""+ui->textEdit->toPlainText()+"\");";
                query.exec(s);
                query.next();
                QString id;
                id.setNum(query.value(0).toInt());
                for(int i=0;i<ui->tableWidget->rowCount();i++){
                    QString b=ui->tableWidget->item(i,0)->text();
                    s="SELECT id_product FROM product WHERE (name=\""+b+"\");";
                    query.exec(s);
                    QString id_product;
                    if(query.next()){
                        id_product.setNum(query.value(0).toInt());

                    }else{

                        s="INSERT INTO product ( name ) SELECT \""+b+"\"";
                        query.exec(s);
                        s="SELECT id_product FROM product WHERE (name=\""+b+"\");";
                        query.exec(s);
                        query.next();
                        id_product.setNum(query.value(0).toInt());
                    }
                    s="INSERT INTO recipte_profuct ( id_recipte, id_product, mass ) SELECT "+id+","+id_product+",\""+ui->tableWidget->item(i,1)->text()+"\"";
                    query.exec(s);
                }
                QPixmap screen=QPixmap::grabWidget(ui->graphicsView);
                screen.save("../GUI/users/"+ui->textEdit->toPlainText()+".jpg");
                m_db.close();
                clearAll();
            }else{
                (new QErrorMessage(this))->showMessage("Введите ингредиенты!");
            }
        }else{
           (new QErrorMessage(this))->showMessage("Введите описание процесса приготовления!");
        }
    }else{
        (new QErrorMessage(this))->showMessage("Введите имя!");
    }

}

void AddRecipe::on_pushButton_8_clicked(){

    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
}

void AddRecipe::on_pushButton_9_clicked()
{

    QString fileName = QFileDialog::getOpenFileName(this,
                                QString::fromUtf8("Открыть файл"),
                                QDir::currentPath(),
                                "Images (*.png *.xpm *.jpg);;All files (*.*)");
    scene->addItem(pixItem);
    QPixmap pixmap(fileName);
    pixItem->setVisible(true);
    pixItem->setPixmap(pixmap);
    ui->graphicsView->fitInView(0,0,pixmap.width(),pixmap.height());
}

void AddRecipe::downlandSqllite(QSqlDatabase M_db){

    m_db=M_db;
}

void AddRecipe::clearAll(){

    ui->tableWidget->clearContents();
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setRowCount(1);
    ui->graphicsView->scene()->removeItem(pixItem);
    ui->plainTextEdit_2->clear();
    ui->textEdit->clear();

}


