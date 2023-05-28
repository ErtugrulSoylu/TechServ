#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <iostream>
#include <QPushButton>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->ui->slide_left_button->click();
}

MainWindow::~MainWindow()
{
    delete ui;
}
