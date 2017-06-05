#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include "about.h"
#include <recipte.h>
#include <QtSql>

namespace Ui {
class Window;
}

class Window : public QMainWindow{
    Q_OBJECT
signals:
    void firstWindow();
    void showWindow();
    void showRecipe();
    void showMyRecipe();
    void showMyFavorite();

public:
    explicit Window(QWidget *parent = 0);
    void GetRecipte(Recipte,QSqlDatabase);
    ~Window();
    void buttonClicked();
    void setRecipe(int r);
    int getRecipe();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_starButton_clicked();

private:
    Ui::Window *ui;
    About *about;
    Recipte temp;
    int recipe=0;
    QSqlDatabase m_db;

};

#endif // WINDOW_H
