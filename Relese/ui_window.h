/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window
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
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QTextBrowser *textBrowser;
    QLabel *label;
    QTableWidget *tableWidget;
    QWidget *widget_7;
    QWidget *widget_5;
    QPushButton *pushButton_6;
    QPushButton *starButton;

    void setupUi(QMainWindow *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QStringLiteral("Window"));
        Window->setWindowModality(Qt::ApplicationModal);
        Window->setEnabled(true);
        Window->resize(1149, 667);
        QFont font;
        font.setPointSize(18);
        Window->setFont(font);
        Window->setAutoFillBackground(false);
        Window->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(Window);
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

        verticalLayoutWidget_4 = new QWidget(centralWidget);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(50, 360, 531, 281));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(verticalLayoutWidget_4);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        textBrowser->setMinimumSize(QSize(500, 0));
        QPalette palette1;
        QLinearGradient gradient(0, 0, 1, 0);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(255, 255, 255, 162));
        gradient.setColorAt(1, QColor(255, 255, 255, 176));
        QBrush brush3(gradient);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush4);
        QLinearGradient gradient1(0, 0, 1, 0);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(255, 255, 255, 162));
        gradient1.setColorAt(1, QColor(255, 255, 255, 176));
        QBrush brush5(gradient1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush5);
        QLinearGradient gradient2(0, 0, 1, 0);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(255, 255, 255, 162));
        gradient2.setColorAt(1, QColor(255, 255, 255, 176));
        QBrush brush6(gradient2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        QLinearGradient gradient3(0, 0, 1, 0);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(255, 255, 255, 162));
        gradient3.setColorAt(1, QColor(255, 255, 255, 176));
        QBrush brush8(gradient3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        QLinearGradient gradient4(0, 0, 1, 0);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(255, 255, 255, 162));
        gradient4.setColorAt(1, QColor(255, 255, 255, 176));
        QBrush brush9(gradient4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        QBrush brush10(QColor(0, 0, 0, 255));
        brush10.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        QLinearGradient gradient5(0, 0, 1, 0);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(255, 255, 255, 162));
        gradient5.setColorAt(1, QColor(255, 255, 255, 176));
        QBrush brush11(gradient5);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        textBrowser->setPalette(palette1);
        QFont font3;
        font3.setFamily(QStringLiteral("Segoe Print"));
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        textBrowser->setFont(font3);
        textBrowser->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 255, 255, 162), stop:1 rgba(255, 255, 255, 176));"));

        verticalLayout_4->addWidget(textBrowser);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 110, 531, 41));
        QPalette palette2;
        QBrush brush12(QColor(255, 255, 255, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label->setPalette(palette2);
        QFont font4;
        font4.setFamily(QStringLiteral("Avdira"));
        font4.setPointSize(17);
        label->setFont(font4);
        label->setLayoutDirection(Qt::RightToLeft);
        label->setAutoFillBackground(false);
        label->setTextFormat(Qt::AutoText);
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(360, 160, 221, 181));
        QPalette palette3;
        QLinearGradient gradient6(0, 0, 1, 0);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(255, 255, 255, 162));
        gradient6.setColorAt(1, QColor(255, 255, 255, 176));
        QBrush brush13(gradient6);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush13);
        QBrush brush14(QColor(255, 255, 255, 200));
        brush14.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush14);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush14);
        QBrush brush15(QColor(0, 0, 0, 255));
        brush15.setStyle(Qt::NoBrush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush15);
        QLinearGradient gradient7(0, 0, 1, 0);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(255, 255, 255, 162));
        gradient7.setColorAt(1, QColor(255, 255, 255, 176));
        QBrush brush16(gradient7);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush16);
        palette3.setBrush(QPalette::Active, QPalette::HighlightedText, brush14);
        QLinearGradient gradient8(0, 0, 1, 0);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(255, 255, 255, 162));
        gradient8.setColorAt(1, QColor(255, 255, 255, 176));
        QBrush brush17(gradient8);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush14);
        QBrush brush18(QColor(0, 0, 0, 255));
        brush18.setStyle(Qt::NoBrush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush18);
        QLinearGradient gradient9(0, 0, 1, 0);
        gradient9.setSpread(QGradient::PadSpread);
        gradient9.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient9.setColorAt(0, QColor(255, 255, 255, 162));
        gradient9.setColorAt(1, QColor(255, 255, 255, 176));
        QBrush brush19(gradient9);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush19);
        palette3.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush14);
        QLinearGradient gradient10(0, 0, 1, 0);
        gradient10.setSpread(QGradient::PadSpread);
        gradient10.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient10.setColorAt(0, QColor(255, 255, 255, 162));
        gradient10.setColorAt(1, QColor(255, 255, 255, 176));
        QBrush brush20(gradient10);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush20);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush14);
        QBrush brush21(QColor(0, 0, 0, 255));
        brush21.setStyle(Qt::NoBrush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush21);
        QLinearGradient gradient11(0, 0, 1, 0);
        gradient11.setSpread(QGradient::PadSpread);
        gradient11.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient11.setColorAt(0, QColor(255, 255, 255, 162));
        gradient11.setColorAt(1, QColor(255, 255, 255, 176));
        QBrush brush22(gradient11);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush22);
        palette3.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush14);
        tableWidget->setPalette(palette3);
        tableWidget->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 255, 255, 162), stop:1 rgba(255, 255, 255, 176));"));
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setShowGrid(true);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setWordWrap(true);
        tableWidget->setCornerButtonEnabled(true);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setHighlightSections(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(50);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setHighlightSections(false);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        widget_7 = new QWidget(centralWidget);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setGeometry(QRect(50, 140, 291, 201));
        widget_7->setStyleSheet(QStringLiteral("border-image: url(:/resource/pictures/stick.png);"));
        widget_5 = new QWidget(widget_7);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setEnabled(false);
        widget_5->setGeometry(QRect(70, 40, 171, 111));
        widget_5->setStyleSheet(QStringLiteral(""));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(560, 530, 221, 111));
        QFont font5;
        font5.setFamily(QStringLiteral("Avdira"));
        font5.setPointSize(13);
        font5.setBold(true);
        font5.setWeight(75);
        pushButton_6->setFont(font5);
        pushButton_6->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_6->setAutoFillBackground(false);
        starButton = new QPushButton(centralWidget);
        starButton->setObjectName(QStringLiteral("starButton"));
        starButton->setGeometry(QRect(620, 470, 81, 61));
        starButton->setCursor(QCursor(Qt::OpenHandCursor));
        starButton->setStyleSheet(QStringLiteral(""));
        Window->setCentralWidget(centralWidget);

        retranslateUi(Window);

        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QMainWindow *Window)
    {
        Window->setWindowTitle(QApplication::translate("Window", "MainWindow", Q_NULLPTR));
        centralWidget->setStyleSheet(QApplication::translate("Window", "QWidget#centralWidget {background-image: url(:/resource/pictures/main_background.png);}", Q_NULLPTR));
        verticalLayoutWidget->setStyleSheet(QApplication::translate("Window", "QWidget#widget {background-color: rgb(170, 0, 0);}", Q_NULLPTR));
        pushButton_2->setText(QString());
        pushButton->setText(QString());
        pushButton_3->setText(QApplication::translate("Window", "\320\240\320\265\321\206\320\265\320\277\321\202\321\213", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Window", "\320\234\320\276\320\270 \321\200\320\265\321\206\320\265\320\277\321\202\321\213", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Window", "\320\230\320\267\320\261\321\200\320\260\320\275\320\275\320\276\320\265", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("Window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe Print'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt; font-style:italic;\"><br /></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("Window", "<html><head/><body><p align=\"center\">\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265<br/></p></body></html>", Q_NULLPTR));
        pushButton_6->setStyleSheet(QApplication::translate("Window", "QPushButton#pushButton_6 {border-image: url(:/resource/pictures/button.png);}", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Window", "\320\235\320\260\320\267\320\260\320\264", Q_NULLPTR));
        starButton->setText(QString());
        starButton->setShortcut(QString());
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
