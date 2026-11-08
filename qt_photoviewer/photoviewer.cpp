#include "photoviewer.h"
#include "./ui_photoviewer.h"

photoviewer::photoviewer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::photoviewer)
{
    ui->setupUi(this);
}

photoviewer::~photoviewer()
{
    delete ui;
}
