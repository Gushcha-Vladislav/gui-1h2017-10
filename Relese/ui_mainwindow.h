/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QWidget *widget_3;
    QPushButton *pushButton_3;
    QWidget *widget_4;
    QPushButton *pushButton_4;
    QWidget *widget_6;
    QPushButton *pushButton_5;
    QPushButton *salad;
    QWidget *widget_7;
    QPushButton *soup;
    QWidget *widget_8;
    QPushButton *g;
    QWidget *widget_9;
    QPushButton *osn;
    QWidget *widget_10;
    QPushButton *desert;
    QWidget *widget_11;
    QPushButton *drinks;
    QWidget *widget_12;
    QLabel *label_soup;
    QLabel *label_salad;
    QLabel *label_desert;
    QLabel *label_drinks;
    QLabel *label_g;
    QLabel *label_osn;
    QLabel *label_osn2;
    QListWidget *listWidget;
    QPushButton *pushButton_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(1149, 667);
        QFont font;
        font.setPointSize(18);
        MainWindow->setFont(font);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setAutoFillBackground(false);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 1151, 31));
        verticalLayoutWidget->setAutoFillBackground(false);
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(verticalLayoutWidget);
        widget->setObjectName(QStringLiteral("widget"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1030, -10, 51, 41));
        pushButton_2->setCursor(QCursor(Qt::WhatsThisCursor));
        pushButton_2->setAutoFillBackground(false);
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/resource/pictures/question.png);"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(1080, -10, 71, 51));
        pushButton->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/resource/pictures/close.png);"));

        verticalLayout->addWidget(widget);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 30, 1151, 71));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(verticalLayoutWidget_2);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 0);\n"
""));
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(0, 0, 381, 71));
        pushButton_3 = new QPushButton(widget_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(-10, -8, 401, 81));
        QPalette palette;
        QBrush brush(QColor(255, 170, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_3->setPalette(palette);
        QFont font1;
        font1.setFamily(QStringLiteral("Avdira"));
        font1.setPointSize(26);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton_3->setFont(font1);
        pushButton_3->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(380, 0, 381, 71));
        pushButton_4 = new QPushButton(widget_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setEnabled(true);
        pushButton_4->setGeometry(QRect(-6, -8, 401, 81));
        QFont font2;
        font2.setFamily(QStringLiteral("Avdira"));
        font2.setPointSize(26);
        pushButton_4->setFont(font2);
        pushButton_4->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_4->setAutoFillBackground(false);
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        widget_6 = new QWidget(widget_2);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(760, 0, 391, 71));
        pushButton_5 = new QPushButton(widget_6);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(-10, -10, 401, 91));
        pushButton_5->setFont(font2);
        pushButton_5->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_5->setAutoFillBackground(false);
        pushButton_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));

        verticalLayout_2->addWidget(widget_2);

        salad = new QPushButton(centralWidget);
        salad->setObjectName(QStringLiteral("salad"));
        salad->setGeometry(QRect(90, 140, 181, 151));
        salad->setCursor(QCursor(Qt::OpenHandCursor));
        salad->setAutoFillBackground(false);
        salad->setStyleSheet(QLatin1String("QPushButton#salad {border-image: url(:/resource/pictures/sticker.png);}\n"
"#salad:hover{\n"
"	border-style: solid;\n"
"	border-width: 5px;\n"
"	border-radius: 1px;\n"
"	border-image: url(:/resource/pictures/sticker.png);\n"
"}"));
        widget_7 = new QWidget(salad);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setGeometry(QRect(30, 20, 131, 80));
        widget_7->setCursor(QCursor(Qt::OpenHandCursor));
        widget_7->setAutoFillBackground(false);
        widget_7->setStyleSheet(QStringLiteral("border-image: url(:/resource/pictures/salad.jpg);"));
        soup = new QPushButton(centralWidget);
        soup->setObjectName(QStringLiteral("soup"));
        soup->setGeometry(QRect(360, 140, 181, 151));
        soup->setCursor(QCursor(Qt::OpenHandCursor));
        soup->setAutoFillBackground(false);
        soup->setStyleSheet(QLatin1String("QPushButton#soup {border-image: url(:/resource/pictures/sticker.png);}\n"
"#soup:hover{\n"
"	border-style: solid;\n"
"	border-width: 5px;\n"
"	border-radius: 1px;\n"
"	border-image: url(:/resource/pictures/sticker.png);\n"
"}"));
        widget_8 = new QWidget(soup);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setGeometry(QRect(30, 20, 131, 80));
        widget_8->setCursor(QCursor(Qt::OpenHandCursor));
        widget_8->setAutoFillBackground(false);
        widget_8->setStyleSheet(QStringLiteral("border-image: url(:/resource/pictures/soup.jpg);"));
        g = new QPushButton(centralWidget);
        g->setObjectName(QStringLiteral("g"));
        g->setGeometry(QRect(90, 310, 181, 151));
        g->setCursor(QCursor(Qt::OpenHandCursor));
        g->setAutoFillBackground(false);
        g->setStyleSheet(QLatin1String("QPushButton#g {border-image: url(:/resource/pictures/sticker.png);}\n"
"#g:hover{\n"
"	border-style: solid;\n"
"	border-width: 5px;\n"
"	border-radius: 1px;\n"
"	border-image: url(:/resource/pictures/sticker.png);\n"
"}"));
        widget_9 = new QWidget(g);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setGeometry(QRect(30, 20, 131, 80));
        widget_9->setCursor(QCursor(Qt::OpenHandCursor));
        widget_9->setAutoFillBackground(false);
        widget_9->setStyleSheet(QStringLiteral("border-image: url(:/resource/pictures/g.jpg);"));
        osn = new QPushButton(centralWidget);
        osn->setObjectName(QStringLiteral("osn"));
        osn->setGeometry(QRect(360, 310, 181, 151));
        osn->setCursor(QCursor(Qt::OpenHandCursor));
        osn->setAutoFillBackground(false);
        osn->setStyleSheet(QLatin1String("QPushButton#osn {border-image: url(:/resource/pictures/sticker.png);}\n"
"#osn:hover{\n"
"	border-style: solid;\n"
"	border-width: 5px;\n"
"	border-radius: 1px;\n"
"	border-image: url(:/resource/pictures/sticker.png);\n"
"}"));
        widget_10 = new QWidget(osn);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setGeometry(QRect(30, 20, 131, 80));
        widget_10->setCursor(QCursor(Qt::OpenHandCursor));
        widget_10->setAutoFillBackground(false);
        widget_10->setStyleSheet(QStringLiteral("border-image: url(:/resource/pictures/osn.jpg);"));
        desert = new QPushButton(centralWidget);
        desert->setObjectName(QStringLiteral("desert"));
        desert->setGeometry(QRect(90, 480, 181, 151));
        desert->setCursor(QCursor(Qt::OpenHandCursor));
        desert->setAutoFillBackground(false);
        desert->setStyleSheet(QLatin1String("QPushButton#desert {border-image: url(:/resource/pictures/sticker.png);}\n"
"#desert:hover{\n"
"	border-style: solid;\n"
"	border-width: 5px;\n"
"	border-radius: 1px;\n"
"	border-image: url(:/resource/pictures/sticker.png);\n"
"}"));
        widget_11 = new QWidget(desert);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        widget_11->setGeometry(QRect(30, 20, 131, 80));
        widget_11->setCursor(QCursor(Qt::OpenHandCursor));
        widget_11->setAutoFillBackground(false);
        widget_11->setStyleSheet(QStringLiteral("border-image: url(:/resource/pictures/des.jpg);"));
        drinks = new QPushButton(centralWidget);
        drinks->setObjectName(QStringLiteral("drinks"));
        drinks->setGeometry(QRect(360, 480, 181, 151));
        drinks->setCursor(QCursor(Qt::OpenHandCursor));
        drinks->setAutoFillBackground(false);
        drinks->setStyleSheet(QLatin1String("QPushButton#drinks {border-image: url(:/resource/pictures/sticker.png);}\n"
"#drinks:hover{\n"
"	border-style: solid;\n"
"	border-width: 5px;\n"
"	border-radius: 1px;\n"
"	border-image: url(:/resource/pictures/sticker.png);\n"
"}"));
        widget_12 = new QWidget(drinks);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        widget_12->setGeometry(QRect(30, 20, 131, 80));
        widget_12->setCursor(QCursor(Qt::OpenHandCursor));
        widget_12->setAutoFillBackground(false);
        widget_12->setStyleSheet(QLatin1String("border-image: url(:/resource/pictures/drinks.jpg);\n"
""));
        label_soup = new QLabel(centralWidget);
        label_soup->setObjectName(QStringLiteral("label_soup"));
        label_soup->setGeometry(QRect(420, 250, 81, 30));
        QFont font3;
        font3.setFamily(QStringLiteral("Avdira"));
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setWeight(75);
        label_soup->setFont(font3);
        label_soup->setCursor(QCursor(Qt::OpenHandCursor));
        label_salad = new QLabel(centralWidget);
        label_salad->setObjectName(QStringLiteral("label_salad"));
        label_salad->setGeometry(QRect(130, 240, 111, 35));
        label_salad->setFont(font3);
        label_salad->setCursor(QCursor(Qt::OpenHandCursor));
        label_desert = new QLabel(centralWidget);
        label_desert->setObjectName(QStringLiteral("label_desert"));
        label_desert->setGeometry(QRect(130, 590, 121, 30));
        label_desert->setFont(font3);
        label_desert->setCursor(QCursor(Qt::OpenHandCursor));
        label_drinks = new QLabel(centralWidget);
        label_drinks->setObjectName(QStringLiteral("label_drinks"));
        label_drinks->setGeometry(QRect(390, 590, 131, 20));
        label_drinks->setFont(font3);
        label_drinks->setCursor(QCursor(Qt::OpenHandCursor));
        label_g = new QLabel(centralWidget);
        label_g->setObjectName(QStringLiteral("label_g"));
        label_g->setGeometry(QRect(130, 420, 121, 25));
        label_g->setFont(font3);
        label_g->setCursor(QCursor(Qt::OpenHandCursor));
        label_osn = new QLabel(centralWidget);
        label_osn->setObjectName(QStringLiteral("label_osn"));
        label_osn->setGeometry(QRect(400, 420, 111, 20));
        QFont font4;
        font4.setFamily(QStringLiteral("Avdira"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        label_osn->setFont(font4);
        label_osn->setCursor(QCursor(Qt::OpenHandCursor));
        label_osn2 = new QLabel(centralWidget);
        label_osn2->setObjectName(QStringLiteral("label_osn2"));
        label_osn2->setGeometry(QRect(450, 430, 81, 20));
        label_osn2->setFont(font4);
        label_osn2->setCursor(QCursor(Qt::OpenHandCursor));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(70, 130, 481, 511));
        QFont font5;
        font5.setFamily(QStringLiteral("Bookman Old Style"));
        font5.setPointSize(12);
        font5.setBold(false);
        font5.setWeight(50);
        listWidget->setFont(font5);
        listWidget->setContextMenuPolicy(Qt::ActionsContextMenu);
        listWidget->setAutoFillBackground(false);
        listWidget->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 255, 255, 162), stop:1 rgba(255, 255, 255, 176));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 255, 255, 162), stop:1 rgba(255, 255, 255, 176));"));
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        listWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(540, 520, 221, 111));
        QFont font6;
        font6.setFamily(QStringLiteral("Avdira"));
        font6.setPointSize(13);
        font6.setBold(true);
        font6.setWeight(75);
        pushButton_6->setFont(font6);
        pushButton_6->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_6->setAutoFillBackground(false);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        centralWidget->setStyleSheet(QApplication::translate("MainWindow", "QWidget#centralWidget {background-image: url(:/resource/pictures/main_background.png);}", Q_NULLPTR));
        verticalLayoutWidget->setStyleSheet(QApplication::translate("MainWindow", "QWidget#widget {background-color: rgb(170, 0, 0);}", Q_NULLPTR));
        pushButton_2->setText(QString());
        pushButton->setText(QString());
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\240\320\265\321\206\320\265\320\277\321\202\321\213", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "\320\234\320\276\320\270 \321\200\320\265\321\206\320\265\320\277\321\202\321\213", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\261\321\200\320\260\320\275\320\275\320\276\320\265", Q_NULLPTR));
        label_soup->setText(QApplication::translate("MainWindow", "\320\241\321\203\320\277\321\213", Q_NULLPTR));
        label_salad->setText(QApplication::translate("MainWindow", "\320\241\320\260\320\273\320\260\321\202\321\213", Q_NULLPTR));
        label_desert->setText(QApplication::translate("MainWindow", "\320\224\320\265\321\201\320\265\321\200\321\202\321\213", Q_NULLPTR));
        label_drinks->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\277\320\270\321\202\320\272\320\270", Q_NULLPTR));
        label_g->setText(QApplication::translate("MainWindow", "\320\223\320\260\321\200\320\275\320\270\321\200\321\213", Q_NULLPTR));
        label_osn->setText(QApplication::translate("MainWindow", "\320\236\321\201\320\275\320\276\320\262\320\275\321\213\320\265", Q_NULLPTR));
        label_osn2->setText(QApplication::translate("MainWindow", "\320\261\320\273\321\216\320\264\320\260", Q_NULLPTR));
        pushButton_6->setStyleSheet(QApplication::translate("MainWindow", "QPushButton#pushButton_6 {border-image: url(:/resource/pictures/button.png);}", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270 \321\200\320\265\321\206\320\265\320\277\321\202", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
