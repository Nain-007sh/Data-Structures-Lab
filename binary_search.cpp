// binary search 


#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 7, 11, 15, 19, 23, 27, 31, 35};
    int n = 9;
    int target = 27;

    int low = 0;
    int high = n - 1;

    // Continue while search area exists
    while (low <= high)
    {
        // Find middle
        int mid = (low + high) / 2;

        // Target found
        if (arr[mid] == target)
        {
            cout << "Element found at index " << mid;
            return 0;
        }

        // Target is on right side
        if (arr[mid] < target)
        {
            low = mid + 1;
        }

        // Target is on left side
        else
        {
            high = mid - 1;
        }
    }

    cout << "Element not found";

    return 0;
}