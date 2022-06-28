#include "mainwindow.h"
#include "bubblesort.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    BubbleSort *bubble = new BubbleSort();
    int array[]{3,4,0,2,7,8,9,1,5,6};
    bubble->runSorting(array);
    return a.exec();
}
