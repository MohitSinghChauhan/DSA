#include <iostream>
using namespace std;

int findPeak(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int binarySearch(int arr[], int s, int n, int k)
{
    int e = n;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
    }
    return -1;
}

int search(int arr[], int n, int k)
{
    int pivot = findPeak(arr, n);
    cout << arr[pivot - 2];
    if (k >= arr[0] && k <= arr[pivot])
    {
        return binarySearch(arr, 0, pivot, k);
    }
    else if (k <= arr[n - 1] && k >= arr[pivot])
    {
        return binarySearch(arr, pivot, n, k);
    }
    else
    {
        return -1;
    }
}



    int main()
    {
        int arr[1] = {2};
        cout << findPeak(arr, 1) << endl;
        int n = 1, k = 2;
        cout << search(arr, n, k);
        

        return 0;
    }