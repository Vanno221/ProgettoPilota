#include "mergepackage.h"
#include "mergesort.h"
#include <iostream>
#include "mainwindow.h"

using namespace std;

MergePackage::MergePackage()
{
   // QThread *thread;
    MergeSort *merge = new MergeSort();
}

void AbsAlgorithm::setDifficulty(int m_difficulty) {
    this->m_difficulty = m_difficulty;
}

int AbsAlgorithm::getDifficulty(){
    return m_difficulty;
}

int *array{};
void MergePackage::chooseDifficulty(int m_difficulty, int *array){

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

MergeSort MergePackage::getAlgorithm(){
    this->merge = merge;
}

void MergePackage::startSorting(){
    merge->moveToThread(AbsPackage::thread);
   //connect(AbsPackage::thread, SIGNAL(thread->start()), merge, SLOT(MainWindow::on_pushButton_clicked()));
    connect(AbsPackage::thread, SIGNAL(MergePackage::startSorting()), merge, SLOT(merge->runSorting(this->array)));
}
