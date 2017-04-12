#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>

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
    ~Window();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Window *ui;
};

#endif // WINDOW_H
