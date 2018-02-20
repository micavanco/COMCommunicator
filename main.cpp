#include <QApplication>

#include <comcommunicator.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    COMCommunicator mainWindow;
    mainWindow.setMinimumSize(600,400);


    mainWindow.show();
    return a.exec();
}
