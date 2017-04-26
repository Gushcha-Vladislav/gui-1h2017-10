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
}

AddRecipe::~AddRecipe()
{
    delete ui;
}

void AddRecipe::on_pushButton_clicked()
{
    QPropertyAnimation* animation = new QPropertyAnimation(this, "windowOpacity");

    animation->setDuration(2000);

    animation->setStartValue(1);

    animation->setEndValue(0);

    animation->start();

    connect(animation, SIGNAL(finished()), this, SLOT(close()));
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
