// bubble sort

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 5, 4};
    int n = 5;

    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;   // Check karega ke koi swap hua ya nahi

        // Compare adjacent elements
        for (int j = 0; j < n - i - 1; j++)
        {
            // Agar left element bara hai
            if (arr[j] > arr[j + 1])
            {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true; // Swap hua, flag true
            }
        }

        // Agar koi swap nahi hua, array already sorted hai
        if (swapped == false)
        {
            break;  // Further passes ki zaroorat nahi
        }
    }

    // Print sorted array
    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
// ....