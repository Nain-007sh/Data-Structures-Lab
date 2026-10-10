// selection sort 

#include <iostream>
using namespace std;

int main()
{
    // Hamara array
    int arr[] = {29, 10, 14, 37, 13};

    // Array mein total 5 elements hain
    int n = 5;

    // Har pass mein ek position ko correct karenge
    for (int i = 0; i < n - 1; i++)
    {
        // Abhi hum maan rahe hain ke i wala element
        // sabse chhota hai
        int minIndex = i;

        // Remaining elements mein smallest element find karo
        for (int j = i + 1; j < n; j++)
        {
            // Agar current element, selected minimum
            // se chhota hai
            if (arr[j] < arr[minIndex])
            {
                // Minimum element ka index update karo
                minIndex = j;
            }
        }

        // Smallest element ko current position
        // ke saath swap karo
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    // Sorted array print karo
    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}