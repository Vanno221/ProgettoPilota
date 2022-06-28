#ifndef MERGEPACKAGE_H
#define MERGEPACKAGE_H
#include "AbsPackage.h"
#include "mergesort.h"

class MergePackage : public AbsPackage
{

private:
    int m_difficulty;
    int* array;
    //QThread *thread;
    MergeSort *merge;

public:
    MergePackage();
    void chooseDifficulty(int m_difficulty, int* array) override;
    MergeSort getAlgorithm();

signals:
    void startSorting() override;

};

#endif // MERGEPACKAGE_H
