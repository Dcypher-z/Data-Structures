#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k)
{
    double avg = 0;
    for (int i = 0; i < n; i++)
    {
        avg += arr[i];
    }
    avg = avg/n;
    cout<<avg<<endl;
    for (int i = 0; i < n; i++)
    {
        if (double(arr[i]) < avg)
            arr[i] += k;
        else
            arr[i] -= k;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return *max_element(arr, arr + n) - *min_element(arr, arr + n);
}

int main()
{

    int k = 3, n = 4;
    int arr[n] = {1, 5, 15, 10};

    // Function Call
    int ans = getMinDiff(arr, n, k);
    cout << ans;
}