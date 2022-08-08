#include <bits/stdc++.h>
using namespace std;

void union_intersection(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0,j=0;
    vector<int> union_arr;
    vector<int> intersection_arr;
    while(i!=n1 || j!=n2)
    {
        if(i==n1)
        {
            while(j!=n2)
            {
                union_arr.push_back(arr2[j]);
                j++;
            }
        }
        else if(j==n2)
        {
            while(i!=n1)
            {
                union_arr.push_back(arr1[i]);
                i++;
            }
        }
        else if(arr1[i]<arr2[j])
        {
            union_arr.push_back(arr1[i]);
            i++;
            continue;
        }
        else if(arr1[i]>arr2[j])
        {
            union_arr.push_back(arr2[j]);
            j++;
        }
        else if(arr1[i]==arr2[j])
        {
            intersection_arr.push_back(arr1[i]);
            union_arr.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for(int p: union_arr)
    {
        cout<<p<<" ";
    }
    cout<<endl;
    for(int p: intersection_arr)
    {
        cout<<p<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr1[] = {1,3,5,7,9};//use sets to take input to avoid redundant values
    int arr2[] = {3,6,9,12};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    union_intersection(arr1,arr2,n1,n2);
    return 0;
}