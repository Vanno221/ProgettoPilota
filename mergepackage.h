#ifndef MERGEPACKAGE_H
#define MERGEPACKAGE_H
#include "AbsPackage.h"
#include "mergesort.h"

class MergePackage : public AbsPackage
{
private:
    int m_difficulty;
    QThread *worker;
    MergeSort *merge;

public:
    MergePackage();
    void chooseDifficulty(int m_difficulty);
    void startSorting() override;
    void getAlgorithm();
};

#endif // MERGEPACKAGE_H
