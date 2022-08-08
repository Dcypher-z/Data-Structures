#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int min = *min_element(arr.begin(), arr.end());
    int max = *max_element(arr.begin(), arr.end());

    min = arr[0];
    max = arr[0];
    for(int i=1;i<n;i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
        }
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    cout<<min<<" "<<max<<endl;
    return 0;
}