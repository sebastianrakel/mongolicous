#include "lib/consolewindow.h"
#include "ui_consolewindow.h"

ConsoleWindow::ConsoleWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConsoleWindow)
{
    ui->setupUi(this);
}

ConsoleWindow::~ConsoleWindow()
{
    delete ui;
}

