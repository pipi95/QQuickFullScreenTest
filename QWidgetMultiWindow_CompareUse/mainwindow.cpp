#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, [=]() {
        if (!this->isFullScreen()) {
            this->showFullScreen();
        } else {
            this->showNormal();
        }
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
