// Merge Sort

#include <iostream>
using namespace std;

// Merge two sorted parts
void merge(int arr[], int left, int mid, int right)
{
    int temp[100];
    int i = left;
    int j = mid + 1;
    int k = 0;

    // Compare both parts
    while (i <= mid && j <= right)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    // Copy remaining left elements
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Copy remaining right elements
    while (j <= right)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Put sorted values back
    for (int x = 0; x < k; x++)
    {
        arr[left + x] = temp[x];
    }
}

// Recursive Merge Sort
void mergeSort(int arr[], int left, int right)
{
    // Stop when only one element is left
    if (left >= right)
        return;

    // Find middle
    int mid = (left + right) / 2;

    // Sort left part
    mergeSort(arr, left, mid);

    // Sort right part
    mergeSort(arr, mid + 1, right);

    // Merge both parts
    merge(arr, left, mid, right);
}

int main()
{
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = 7;

    // Call Merge Sort
    mergeSort(arr, 0, n - 1);

    // Print sorted array
    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}