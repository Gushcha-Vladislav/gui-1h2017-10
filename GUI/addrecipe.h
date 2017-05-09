#ifndef ADDRECIPE_H
#define ADDRECIPE_H

#include <QMainWindow>
#include <QDesktopWidget>
#include <QPropertyAnimation>
#include "about.h"
#include "QTableWidget"

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

private:
    Ui::AddRecipe *ui;
    About *about;
};

#endif // ADDRECIPE_H
