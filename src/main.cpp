#include <QApplication>
#include <QLabel>
#include "main.hh"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel *label = new QLabel("Linux is wonderful", 0);
    label->show();
    return app.exec();
}
