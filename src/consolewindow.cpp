#include "lib/consolewindow.h"
#include "ui_consolewindow.h"

#include "mongo/client/dbclient.h"

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

