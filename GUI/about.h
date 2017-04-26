#ifndef ABOUT_H
#define ABOUT_H

#include <QMainWindow>
#include <QDesktopWidget>

namespace Ui {
class About;
}

class About : public QMainWindow
{
    Q_OBJECT
signals:
    void firstWindow();
public:
    explicit About(QWidget *parent = 0);
    ~About();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::About *ui;

};

#endif // ABOUT_H
