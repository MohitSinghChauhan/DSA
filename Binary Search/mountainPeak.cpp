// * Question link : https://bit.ly/3nDoqB1
// * Video Link : https://bit.ly/3nxW9Mp



#include <iostream>
using namespace std;

// * 5.98% faster then other solutions at leetcode by me
// int peakIndexInMountainArray(int arr[], int n)
// {
//     int start = 0, end = n - 1;
//     int ans = -1;
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
//         {
//             ans = mid;
//             return ans;
//         }
//         else if (arr[mid] < arr[mid+1])
//         {
//             start = mid +1;
//         }
//         else if (arr[mid] > arr[mid + 1])
//         {
//             end = mid;
//         }
//     }
//     return ans;
// }

// * 63.61% faster than other solutions at Leetcode by Love
int peakIndexInMountainArray(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
    }
    return start;

}

int main()
{
    int arr[8] = {1, 3, 5, 9, 7, 6, 2, 1};

    cout << peakIndexInMountainArray(arr, 8);

    return 0;
}
