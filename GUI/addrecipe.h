#ifndef ADDRECIPE_H
#define ADDRECIPE_H

#include <QMainWindow>
#include <QDesktopWidget>
#include <QPropertyAnimation>
#include "about.h"
#include "QTableWidget"
<<<<<<< HEAD
#include <QtSql>
=======
#include "QGraphicsPixmapItem"

>>>>>>> origin/master

namespace Ui {
class AddRecipe;
}

class AddRecipe : public QMainWindow{
    Q_OBJECT

public:
    explicit AddRecipe(QWidget *parent = 0);
    ~AddRecipe();
    void buttonClicked();
<<<<<<< HEAD
    void downlandSqllite(QSqlDatabase);
=======
    void clearAll();
>>>>>>> origin/master

signals:
    void firstWindow();
    void showWindow();
    void showRecipe();
    void showMyRecipe();
    void showMyFavorite();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_7_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::AddRecipe *ui;
    About *about;
<<<<<<< HEAD
    QSqlDatabase m_db;
    QString fileName;
=======
    QGraphicsScene *scene;
    QGraphicsPixmapItem *pixItem;

>>>>>>> origin/master
};

#endif // ADDRECIPE_H
