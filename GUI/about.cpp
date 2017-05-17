#include "about.h"
#include "ui_about.h"

About::About(QWidget *parent): QMainWindow(parent), ui(new Ui::About){

    ui->setupUi(this);
    QWidget::setWindowFlags(Qt::FramelessWindowHint);

    About::setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            About::size(),
            qApp->desktop()->availableGeometry()
        )
    );
}

About::~About(){

    delete ui;
}

void About::on_pushButton_3_clicked(){

    this->close();
}
