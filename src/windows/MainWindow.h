#pragma once

#include <QMainWindow>
#include <QVector>
#include <QLineEdit>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


namespace Globals {
    inline QString selectedPath;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public: 
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_selectPathButton_clicked();
    void on_saveButton_clicked();
    void on_exportButton_clicked();
    void on_closeButton_clicked();

    void handleApplyClicked(int index);

private:
    Ui::MainWindow *ui;

    QVector<QLineEdit*> textFields;
    QVector<QPushButton*> applyButtons;

    void populateDynamicFields(int count);
};