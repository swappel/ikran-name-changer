#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <QFileDialog>
#include <QMessageBox>
#include <QScrollArea>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Populate with 20 for demonstration
    populateDynamicFields(20);

    connect(ui->selectPathButton, &QPushButton::clicked, this, &MainWindow::on_selectPathButton_clicked);
    connect(ui->saveButton, &QPushButton::clicked, this, &MainWindow::on_saveButton_clicked);
    connect(ui->exportButton, &QPushButton::clicked, this, &MainWindow::on_exportButton_clicked);
    connect(ui->closeButton, &QPushButton::clicked, this, &MainWindow::on_closeButton_clicked);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_selectPathButton_clicked() {
    QString path = QFileDialog::getExistingDirectory(this, "Select a path");
    if (!path.isEmpty()) {
        Globals::selectedPath = path;
        ui->selectedPathLabel->setText("Selected: " + path);
    }
}

void MainWindow::on_saveButton_clicked() {
    QMessageBox::information(this, "Save", "Saving to: " + Globals::selectedPath);
}

void MainWindow::on_exportButton_clicked() {
    QMessageBox::information(this, "Export", "Exporting from: " + Globals::selectedPath);
}

void MainWindow::on_closeButton_clicked() {
    close();
}

void MainWindow::populateDynamicFields(int count) {
    QVBoxLayout* layout = new QVBoxLayout();

    for (int i = 0; i < count; ++i) {
        QHBoxLayout* row = new QHBoxLayout();

        QLineEdit* lineEdit = new QLineEdit(this);
        QPushButton* button = new QPushButton("Apply", this);

        // Capture index for the slot
        connect(button, &QPushButton::clicked, this, [=]() {
            handleApplyClicked(i);
        });

        row->addWidget(lineEdit);
        row->addWidget(button);
        layout->addLayout(row);

        textFields.append(lineEdit);
        applyButtons.append(button);
    }

    QWidget* container = new QWidget();
    container->setLayout(layout);
    ui->scrollArea->setWidget(container);
    ui->scrollArea->setWidgetResizable(true);
}

void MainWindow::handleApplyClicked(int index) {
    QString value = textFields[index]->text();
    QMessageBox::information(this, "Apply", "Value from field " + QString::number(index) + ": " + value);
}
