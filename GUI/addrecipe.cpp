#include "addrecipe.h"
#include "ui_addrecipe.h"
#include "QtGui"
#include "QFileDialog"
#include "QMessageBox"



AddRecipe::AddRecipe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddRecipe)
{
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
    ui->comboBox->addItem("Салаты");
    ui->comboBox->addItem("Супы");
    ui->comboBox->addItem("Гарниры");
    ui->comboBox->addItem("Основные блюда");
    ui->comboBox->addItem("Десерты");
    ui->comboBox->addItem("Напитки");
    ui->pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 0, 0);"));
    scene=new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    pixItem= new QGraphicsPixmapItem();

}

AddRecipe::~AddRecipe()
{
    delete ui;
}

void AddRecipe::on_pushButton_clicked()
{
    connect(ui->pushButton, SIGNAL(clicked()), this->parent(), SLOT(closeApp()));
}

void AddRecipe::on_pushButton_2_clicked()
{
    about->setWindowModality(Qt::ApplicationModal);
    about->show();
    about->raise();
    about->setFocus(Qt::ActiveWindowFocusReason);
}

void AddRecipe::on_pushButton_3_clicked()
{
    emit showRecipe();
    this->buttonClicked();
}

void AddRecipe::on_pushButton_4_clicked()
{
    emit showMyRecipe();
    this->buttonClicked();
}

void AddRecipe::buttonClicked(){
    emit showWindow();
    emit firstWindow();
    this->close();
}

void AddRecipe::on_pushButton_6_clicked()
{
    clearAll();
    emit firstWindow();
    this->close();
}

void AddRecipe::on_pushButton_8_clicked()
{
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

void AddRecipe::clearAll(){
    ui->tableWidget->clearContents();
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setRowCount(1);
    ui->graphicsView->scene()->removeItem(pixItem);
    ui->plainTextEdit_2->clear();
    ui->textEdit->clear();

}

void AddRecipe::on_pushButton_7_clicked()
{

    clearAll();
}
