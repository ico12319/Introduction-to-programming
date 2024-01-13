#include <iostream>

void insertionSort(int* arr, unsigned length)
{
    for (size_t i = 1; i < length; i++)
    {
        int elementToInsert = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > elementToInsert)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = elementToInsert;
    }
}

int main()
{
    int arr[] = {4, 3, 1, 5, 2, 6};
    insertionSort(arr, 6);
}