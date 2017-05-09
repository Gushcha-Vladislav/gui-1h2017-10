#include "addrecipe.h"
#include "ui_addrecipe.h"
#include "QtGui"
#include "QFileDialog"


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
    emit firstWindow();
    this->close();
}

void AddRecipe::on_pushButton_8_clicked()
{
    ui->tableWidget->insertRow(1);
}

void AddRecipe::on_pushButton_9_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                QString::fromUtf8("Открыть файл"),
                                QDir::currentPath(),
                                "Images (*.png *.xpm *.jpg);;All files (*.*)");

    QGraphicsScene *scene=new QGraphicsScene();
    scene->addPixmap(QPixmap(fileName));
    ui->graphicsView->setScene(scene);
}
