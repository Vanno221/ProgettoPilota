#include "mergesort.h"
#include <iostream>

using namespace std;

MergeSort::MergeSort()
{
}

void AbsAlgorithm::setDifficulty(int m_difficulty) {
    this->m_difficulty = m_difficulty;
}

int AbsAlgorithm::getDifficulty(){
    return m_difficulty;
}

int MergeSort::min(int a, int b) {
    return (a<b)? a :b;
}

void MergeSort::merge(int arr[], int l, int m, int r){
        int i,j,k;
        int n1 = m - l + 1;
        int n2 =  r - m;
        int L[n1];
        int R[n2];

        for (i = 0; i < n1; i++)
            L[i] = arr[l + i];
        for (j = 0; j < n2; j++)
            R[j] = arr[m + 1+ j];

        i = 0;
        j = 0;
        k = l;
        while (i < n1 && j < n2)
        {
            if (L[i] <= R[j])
            {
                arr[k] = L[i];
                i++;
            }
            else
            {
                arr[k] = R[j];
                j++;
            }
            k++;
        }
        //controllo sull'array sx L
        while (i < n1)
        {
            arr[k] = L[i];
            i++;
            k++;
        }

        //controllo sull'array dx R
        while (j < n2)
        {
            arr[k] = R[j];
            j++;
            k++;
        }
    }

void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout <<" "<< A[i];
    cout <<"\n";
}

void MergeSort::runSorting(int arr[]){
       int n = sizeof (*arr);
       int curr_size;  // può andare da 1 a n/2 per ordinare i sottoarray
       int left_start; // si inizia dall'array di sx

       // Fa la merge con sottoarray ordinati
       for (curr_size=1; curr_size<=n-1; curr_size = 2*curr_size)
       {
           for (left_start=0; left_start<n-1; left_start += 2*curr_size)
           {
               //Inizia con quello di dx
               int mid = min(left_start + curr_size - 1, n-1);

               int right_end = min(left_start + 2*curr_size - 1, n-1);

               // fa la merge
               merge(arr, left_start, mid, right_end);
           }
       }

}
