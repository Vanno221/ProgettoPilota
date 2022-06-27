#include "bubblesort.h"
#include <iostream>

using namespace std;

BubbleSort::BubbleSort()
{

}

void BubbleSort::setDifficulty(int m_difficulty) {
    this->m_difficulty = m_difficulty;
}

int BubbleSort::getDifficulty() {
    return m_difficulty;
}

void runSorting(int arr[]) {
    int n = sizeof(&arr) / sizeof(arr[0]);
    int i, j;
        for (i = 0; i < n - 1; i++)

            // Last i elements are already
            // in place
            for (j = 0; j < n - i - 1; j++)
                if (arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]);
}
