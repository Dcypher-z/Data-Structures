#include <bits/stdc++.h>
using namespace std;

void Negative_left_side(int arr[], int n)
{
    int j = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
            {
                swap(arr[i],arr[j]);
            }
            j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {-1,2,5,-4,-7,9,10,11,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    Negative_left_side(arr, n);
    return 0;
}