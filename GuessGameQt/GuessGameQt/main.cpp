#include "guessgame.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    GuessGame w;
    w.show();

    return a.exec();
}
