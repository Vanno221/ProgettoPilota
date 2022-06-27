#ifndef MERGESORT_H
#define MERGESORT_H
#include "absalgorithm.h"


class MergeSort : public AbsAlgorithm
{

private:
    int m_difficulty;

public:
    MergeSort();

    int getDifficulty() override;

    void setDifficulty(int m_difficulty) override;

    int min(int a, int b);

    void merge(int *arr, int l, int m, int r);

    void runSorting(int *arr, int n);

    virtual ~MergeSort() = default;
};

#endif // MERGESORT_H
