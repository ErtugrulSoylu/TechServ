#include "todoitem.h"
#include "ui_todoitem.h"

todoitem::todoitem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::todoitem)
{
    ui->setupUi(this);
}

todoitem::~todoitem()
{
    delete ui;
}
