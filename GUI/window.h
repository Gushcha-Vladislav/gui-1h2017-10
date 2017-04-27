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
public:
    explicit Window(QWidget *parent = 0);
    void GetRecipte(Recipte);
    ~Window();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Window *ui;
    About *about;
    Recipte temp;
};

#endif // WINDOW_H
