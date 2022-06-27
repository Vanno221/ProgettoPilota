#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "absalgorithm.h"


class BubbleSort : public AbsAlgorithm
{
private:
    int m_difficulty;

public:
    BubbleSort();

    int getDifficulty();

    void setDifficulty(int m_difficulty);

    void runSorting(int arr[]);

    virtual ~BubbleSort() = default;
};

#endif // BUBBLESORT_H
