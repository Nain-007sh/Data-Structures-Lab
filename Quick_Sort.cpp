#include <iostream>
using namespace std;

// Partition function
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];  // Last element is pivot
    int i = low - 1;

    // Compare elements with pivot
    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;

            // Swap elements
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Put pivot in correct position
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

// Recursive Quick Sort
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // Find pivot position
        int pivotIndex = partition(arr, low, high);

        // Sort left side
        quickSort(arr, low, pivotIndex - 1);

        // Sort right side
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = 6;

    // Call Quick Sort
    quickSort(arr, 0, n - 1);

    // Print sorted array
    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}