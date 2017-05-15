#ifndef ADDRECIPE_H
#define ADDRECIPE_H

#include <QMainWindow>
#include <QDesktopWidget>
#include <QPropertyAnimation>
#include "about.h"
#include "QTableWidget"
#include "QGraphicsPixmapItem"


namespace Ui {
class AddRecipe;
}

class AddRecipe : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddRecipe(QWidget *parent = 0);
    ~AddRecipe();
    void buttonClicked();
    void clearAll();

signals:
    void firstWindow();
    void showWindow();
    void showRecipe();
    void showMyRecipe();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::AddRecipe *ui;
    About *about;
    QGraphicsScene *scene;
    QGraphicsPixmapItem *pixItem;

};

#endif // ADDRECIPE_H
