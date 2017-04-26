#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include "window.h"
#include "about.h"
#include <QPropertyAnimation>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void hideItemAndShowMenu();
    void setRecipe();
    void setMyRecipe();
private slots:
    void on_pushButton_clicked();
    void showItem();
    void on_salad_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_soup_clicked();

    void on_g_clicked();

    void on_osn_clicked();

    void on_desert_clicked();

    void on_drinks_clicked();

    void on_listWidget_clicked(const QModelIndex &index);

    void on_pushButton_2_clicked();


private:
    Ui::MainWindow *ui;
    Window *window;
    About *about;
    int recipe;

};

#endif // MAINWINDOW_H
