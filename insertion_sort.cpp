// insertion sort 
#include <iostream>
using namespace std;

int main()
{
    // Ye hamara array hai
    int arr[] = {8, 4, 6, 2, 7, 3};

    // Array mein total 6 elements hain
    int n = 6;

    // Loop second element se start hoga
    // Kyun ke first element ko already sorted maan lete hain
    for (int i = 1; i < n; i++)
    {
        // Current element ko "key" mein save kar rahe hain
        int key = arr[i];

        // j, key ke left wale element ko point karega
        int j = i - 1;

        // Jab tak j valid hai aur left wala element
        // key se bara hai, usko ek position right shift karo
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];

            // Ab ek position left move karo
            j--;
        }

        // Key ko uski correct position par insert karo
        arr[j + 1] = key;
    }

    // Sorted array print kar rahe hain
    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// ============================================================================================================