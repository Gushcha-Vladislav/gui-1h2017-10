/********************************************************************************
** Form generated from reading UI file 'addrecipe.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRECIPE_H
#define UI_ADDRECIPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddRecipe
{
public:
    QWidget *centralwidget;
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
    QLabel *label;
    QPushButton *pushButton_6;
    QTextEdit *textEdit;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit_2;
    QLabel *label_3;
    QLabel *label_4;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_7;
    QLabel *label_5;
    QComboBox *comboBox;
    QTableWidget *tableWidget;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;

    void setupUi(QMainWindow *AddRecipe)
    {
        if (AddRecipe->objectName().isEmpty())
            AddRecipe->setObjectName(QStringLiteral("AddRecipe"));
        AddRecipe->resize(1149, 667);
        centralwidget = new QWidget(AddRecipe);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setAutoFillBackground(false);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 1151, 31));
        verticalLayoutWidget->setAutoFillBackground(false);
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
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

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 30, 1151, 71));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
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
        QFont font;
        font.setFamily(QStringLiteral("Avdira"));
        font.setPointSize(26);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        pushButton_3->setFont(font);
        pushButton_3->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(380, 0, 381, 71));
        pushButton_4 = new QPushButton(widget_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(-6, -8, 401, 81));
        QFont font1;
        font1.setFamily(QStringLiteral("Avdira"));
        font1.setPointSize(26);
        pushButton_4->setFont(font1);
        pushButton_4->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_4->setAutoFillBackground(false);
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        widget_6 = new QWidget(widget_2);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(760, 0, 391, 71));
        pushButton_5 = new QPushButton(widget_6);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(-10, -10, 401, 91));
        pushButton_5->setFont(font1);
        pushButton_5->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_5->setAutoFillBackground(false);
        pushButton_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));

        verticalLayout_2->addWidget(widget_2);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 280, 221, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("Avdira"));
        font2.setPointSize(15);
        label->setFont(font2);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(550, 570, 191, 61));
        QFont font3;
        font3.setFamily(QStringLiteral("Avdira"));
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton_6->setFont(font3);
        pushButton_6->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_6->setAutoFillBackground(false);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(210, 280, 351, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 360, 221, 16));
        label_2->setFont(font2);
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        plainTextEdit_2 = new QPlainTextEdit(centralwidget);
        plainTextEdit_2->setObjectName(QStringLiteral("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(210, 490, 351, 141));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 490, 221, 16));
        label_3->setFont(font2);
        label_3->setAutoFillBackground(false);
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 130, 221, 16));
        label_4->setFont(font2);
        label_4->setAutoFillBackground(false);
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(300, 130, 161, 131));
        graphicsView->setAutoFillBackground(false);
        graphicsView->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 255, 255, 70), stop:1 rgba(255, 255, 255, 46));"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(550, 490, 191, 61));
        pushButton_7->setFont(font3);
        pushButton_7->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_7->setMouseTracking(false);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 320, 221, 16));
        label_5->setFont(font2);
        label_5->setAutoFillBackground(false);
        label_5->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(210, 320, 351, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("Avdira"));
        font4.setPointSize(10);
        comboBox->setFont(font4);
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font4);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font4);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QFont font5;
        font5.setPointSize(11);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font5);
        tableWidget->setItem(0, 0, __qtablewidgetitem3);
        QFont font6;
        font6.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font6);
        tableWidget->setItem(0, 1, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEnabled(true);
        tableWidget->setGeometry(QRect(210, 360, 351, 121));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(460, 410, 51, 51));
        pushButton_8->setStyleSheet(QStringLiteral("border-image: url(:/resource/pictures/add.png);"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(460, 210, 111, 51));
        QFont font7;
        font7.setFamily(QStringLiteral("Avdira"));
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setWeight(75);
        pushButton_9->setFont(font7);
        pushButton_9->setCursor(QCursor(Qt::OpenHandCursor));
        AddRecipe->setCentralWidget(centralwidget);

        retranslateUi(AddRecipe);

        QMetaObject::connectSlotsByName(AddRecipe);
    } // setupUi

    void retranslateUi(QMainWindow *AddRecipe)
    {
        AddRecipe->setWindowTitle(QApplication::translate("AddRecipe", "MainWindow", Q_NULLPTR));
        centralwidget->setStyleSheet(QApplication::translate("AddRecipe", "QWidget#centralwidget {background-image: url(:/resource/pictures/main_background.png);}", Q_NULLPTR));
        verticalLayoutWidget->setStyleSheet(QApplication::translate("AddRecipe", "QWidget#widget {background-color: rgb(170, 0, 0);}", Q_NULLPTR));
        pushButton_2->setText(QString());
        pushButton->setText(QString());
        pushButton_3->setText(QApplication::translate("AddRecipe", "\320\240\320\265\321\206\320\265\320\277\321\202\321\213", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("AddRecipe", "\320\234\320\276\320\270 \321\200\320\265\321\206\320\265\320\277\321\202\321\213", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("AddRecipe", "\320\230\320\267\320\261\321\200\320\260\320\275\320\275\320\276\320\265", Q_NULLPTR));
        label->setText(QApplication::translate("AddRecipe", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\261\320\273\321\216\320\264\320\260", Q_NULLPTR));
        pushButton_6->setStyleSheet(QApplication::translate("AddRecipe", "QPushButton#pushButton_6 {border-image: url(:/resource/pictures/button.png);}", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("AddRecipe", "\320\235\320\260\320\267\320\260\320\264", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddRecipe", "\320\230\320\275\320\263\321\200\320\265\320\264\320\270\320\265\320\275\321\202\321\213", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddRecipe", "\320\240\320\265\321\206\320\265\320\277\321\202", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddRecipe", "\320\230\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", Q_NULLPTR));
        pushButton_7->setStyleSheet(QApplication::translate("AddRecipe", "QPushButton#pushButton_7 {border-image: url(:/resource/pictures/button.png);}", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("AddRecipe", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        label_5->setText(QApplication::translate("AddRecipe", "\320\240\320\260\320\267\320\264\320\265\320\273", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("AddRecipe", "\320\223\320\260\321\200\320\275\320\270\321\200\321\213", Q_NULLPTR)
         << QApplication::translate("AddRecipe", "\320\224\320\265\321\201\320\265\321\200\321\202\321\213", Q_NULLPTR)
         << QApplication::translate("AddRecipe", "\320\235\320\260\320\277\320\270\321\202\320\272\320\270", Q_NULLPTR)
         << QApplication::translate("AddRecipe", "\320\236\321\201\320\275\320\276\320\262\320\275\321\213\320\265 \320\261\320\273\321\216\320\264\320\260", Q_NULLPTR)
         << QApplication::translate("AddRecipe", "\320\241\320\260\320\273\320\260\321\202\321\213", Q_NULLPTR)
         << QApplication::translate("AddRecipe", "\320\241\321\203\320\277\321\213", Q_NULLPTR)
        );
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("AddRecipe", "\320\237\321\200\320\276\320\264\321\203\320\272\321\202", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("AddRecipe", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("AddRecipe", "1", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        pushButton_8->setText(QString());
        pushButton_9->setStyleSheet(QApplication::translate("AddRecipe", "QPushButton#pushButton_9 {border-image: url(:/resource/pictures/button.png);}", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("AddRecipe", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddRecipe: public Ui_AddRecipe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRECIPE_H
