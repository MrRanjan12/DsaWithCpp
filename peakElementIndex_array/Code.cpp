#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
    int left = 1;
    int right = arr.size() + 2;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
}

int main () {
    vector<int> arr = {0, 3, 5, 9, 6, 10, 2};
     // Call the function and get the peak index
     int peakIndex = peakIndexInMountainArray(arr);
    
     // Output the result
     cout << "Peak index is: " << peakIndex << endl;
 
     return 0;
}