// Question link : https://bit.ly/3Ioexjh
// Video Link : https://bit.ly/3nxW9Mp

#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int k)
{
    int start = 0, end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = (end + start) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int lastOcc(int arr[], int n, int k)
{
    int start = 0, end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = (end + start) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[9] = {1, 2, 2, 3, 3, 3, 3, 4, 5};
    int k;

    // cin>>k;
    cout << firstOcc(arr, 9, 3)<<"\n";
    cout << lastOcc(arr, 9, 3);

    return 0;
}