#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {0, 4, 3, 2, 7, 8, 2, 3, 1};
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        arr[arr[i] % n] = arr[arr[i] % n] + n;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] / n > 1)
        {
            cout << arr[i] % n << " ";
        }
    }
    cout << endl;
    return 0;
}