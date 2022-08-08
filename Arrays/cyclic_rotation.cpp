#include <bits/stdc++.h>
using namespace std;

void cyclic_rotation(int arr[], int n)
{
    int temp1 = arr[0];
    int temp2 = arr[1];
    for(int i=1;i<=n;i++)
    {
        arr[i%n] = temp1;
        temp1 = temp2;
        temp2 = arr[(i+1)%n];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {-1, 2, 5, -4, -7, 9, 10, 11, -2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cyclic_rotation(arr, n);
    return 0;
}