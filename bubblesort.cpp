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

void BubbleSort::runSorting(int arr[]) {
    cout << *arr;
    int n = sizeof(&arr) / sizeof(arr[0]);
    int i = 0;
    int j = 0;
        for (i = 0; i < n - 1; i++){
            for (j = 0; j < n - i - 1; j++){
                if (arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]);
            }
        }
     cout << *arr;
}
