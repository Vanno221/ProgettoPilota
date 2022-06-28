#include "concretepackage.h"
#include "mergesort.h"
#include "mainwindow.h"
#include <iostream>
#include <QThread>
#include <QObject>

using namespace std;

ConcretePackage::ConcretePackage()
{}

void AbsAlgorithm::setDifficulty(int m_difficulty) {
    this->m_difficulty = m_difficulty;
}

int AbsAlgorithm::getDifficulty(){
    return m_difficulty;
}

void ConcretePackage::chooseDifficulty(int m_difficulty){
    int *array{};
    switch (m_difficulty) {
    case 1: //easy
        for(int i=0; i<100;i++)
                array[i] = rand()%100;
    break;
    case 2: //medium
        for(int i=0; i<1000;i++)
            array[i]= rand()%1000;
    break;
    case 3: //hard
        for (int i=0; i<10000;i++)
            array[i] = rand()%10000;
    break;
    }
}

AbsAlgorithm ConcretePackage::setAlgorithm() {
}

void ConcretePackage::startSorting(){
    QThread *myThread = new QThread;
    QList<QThread*> *workers = new QList<QThread*>;
    workers->first()->moveToThread(myThread);
    workers->append(myThread);
    //connect(AbsPackage::worker,SIGNAL(worker->start()), merge, SLOT(MainWindow::on_pushButton_clicked()));
    //connect(AbsPackage::worker, SIGNAL(MergePackage::startSorting()), merge, SLOT(merge->runSorting(this->array)));
}
