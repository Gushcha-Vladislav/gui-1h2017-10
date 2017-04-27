#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include "about.h"
#include <recipte.h>

namespace Ui {
class Window;
}

class Window : public QMainWindow
{
    Q_OBJECT
signals:
    void firstWindow();
    void showWindow();
    void showRecipe();
    void showMyRecipe();
public:
    explicit Window(QWidget *parent = 0);
    void GetRecipte(Recipte);
    ~Window();
    void buttonClicked();

private slots:
    void on_pushButton_clicked();


    void on_pushButton_6_clicked();

    void on_pushButton_2_clicked();



    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Window *ui;
    About *about;
    Recipte temp;
};

#endif // WINDOW_H
