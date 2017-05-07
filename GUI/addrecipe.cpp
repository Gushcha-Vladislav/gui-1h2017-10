#include "addrecipe.h"
#include "ui_addrecipe.h"

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
