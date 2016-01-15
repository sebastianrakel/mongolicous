#include "lib/mainwindow.h"
#include "ui_mainwindow.h"

#include "lib/consolewindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionConsole, SIGNAL(triggered()), this, SLOT(consoleAction()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::consoleAction() {
    ConsoleWindow consoleWindow(this);

    consoleWindow.exec();
}
