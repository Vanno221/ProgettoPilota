#include "mergepackage.h"
#include "mergesort.h"
#include <iostream>

using namespace std;

MergePackage::MergePackage()
{
    QThread *worker;
    MergeSort *merge = new MergeSort();
}

void AbsAlgorithm::setDifficulty(int m_difficulty) {
    this->m_difficulty = m_difficulty;
}

int AbsAlgorithm::getDifficulty(){
    return m_difficulty;
}

void MergePackage::chooseDifficulty(int m_difficulty){
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

MergeSort MergePackage::getAlgorithm(){
    merge = this->merge;
}

void MergePackage::startSorting(){
    moveToThread(worker);

}
