/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPushButton *selectPathButton;
    QLabel *selectedPathLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *dynamicLayout;
    QHBoxLayout *buttonLayout;
    QPushButton *saveButton;
    QPushButton *exportButton;
    QPushButton *closeButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        selectPathButton = new QPushButton(centralwidget);
        selectPathButton->setObjectName("selectPathButton");

        verticalLayout->addWidget(selectPathButton);

        selectedPathLabel = new QLabel(centralwidget);
        selectedPathLabel->setObjectName("selectedPathLabel");

        verticalLayout->addWidget(selectedPathLabel);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        dynamicLayout = new QVBoxLayout(scrollAreaWidgetContents);
        dynamicLayout->setObjectName("dynamicLayout");
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");

        buttonLayout->addWidget(saveButton);

        exportButton = new QPushButton(centralwidget);
        exportButton->setObjectName("exportButton");

        buttonLayout->addWidget(exportButton);

        closeButton = new QPushButton(centralwidget);
        closeButton->setObjectName("closeButton");

        buttonLayout->addWidget(closeButton);


        verticalLayout->addLayout(buttonLayout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        selectPathButton->setText(QCoreApplication::translate("MainWindow", "Select Path", nullptr));
        selectedPathLabel->setText(QCoreApplication::translate("MainWindow", "No path selected", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        exportButton->setText(QCoreApplication::translate("MainWindow", "Export", nullptr));
        closeButton->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
