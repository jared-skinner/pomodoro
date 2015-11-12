/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PomodoroTimer
{
public:
    QAction *actionStartTimer;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGraphicsView *graphicsView;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *PomodoroTimer)
    {
        if (PomodoroTimer->objectName().isEmpty())
            PomodoroTimer->setObjectName(QStringLiteral("PomodoroTimer"));
        PomodoroTimer->resize(263, 325);
        actionStartTimer = new QAction(PomodoroTimer);
        actionStartTimer->setObjectName(QStringLiteral("actionStartTimer"));
        centralWidget = new QWidget(PomodoroTimer);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 250, 121, 51));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(145, 255, 128);\n"
"font: 75 14pt \"DejaVu Sans Mono\";"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 250, 111, 51));
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(235, 70, 43);\n"
"font: 75 14pt \"DejaVu Sans Mono\";"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, -10, 261, 251));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(/home/jared/pomodoro/gui/pomodoro.png);"));
        graphicsView->setFrameShadow(QFrame::Plain);
        PomodoroTimer->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(PomodoroTimer);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PomodoroTimer->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(PomodoroTimer);

        QMetaObject::connectSlotsByName(PomodoroTimer);
    } // setupUi

    void retranslateUi(QMainWindow *PomodoroTimer)
    {
        PomodoroTimer->setWindowTitle(QApplication::translate("PomodoroTimer", "MainWindow", 0));
        actionStartTimer->setText(QApplication::translate("PomodoroTimer", "StartTimer", 0));
        pushButton->setText(QApplication::translate("PomodoroTimer", "Start", 0));
        pushButton_2->setText(QApplication::translate("PomodoroTimer", "Stop", 0));
#ifndef QT_NO_WHATSTHIS
        graphicsView->setWhatsThis(QApplication::translate("PomodoroTimer", "<html><head/><body><p align=\"center\"><img src=\":/~/pomodoro/gui/pomodoro.png\"/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class PomodoroTimer: public Ui_PomodoroTimer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
