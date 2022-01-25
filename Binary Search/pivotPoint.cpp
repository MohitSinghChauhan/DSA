#include <iostream>
using namespace std;

int pivotPoint(int arr[], int n){
    int sum1 =0, sum2=0;
    for (int i = 0; i < n; i++)
    {
        sum2+=arr[i];
    }
    
    if(sum2-arr[0]==0){
        return 0;
    }

    for (int i = 1; i < n; i++)
    {
        sum1+=arr[i-1];
        sum2= sum2 - arr[i+1]-arr[i];
        cout<<sum1;
        cout<<sum2;
        if(sum1==sum2){
            return i;
        }
    }
    
    return -1;

}


int main()
{
  int arr[6]={1,7,3,6,5,6};

  cout<<pivotPoint(arr,6);
  
  return 0;
}