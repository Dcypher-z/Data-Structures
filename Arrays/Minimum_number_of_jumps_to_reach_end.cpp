#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 0)
    {
        return -1;
    }
    int max_reach = arr[0];
    int step = arr[0];
    int jump = 1;
    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
            return jump;
        max_reach = max(max_reach, i + arr[i]);
        step--;
        if (step == 0)
        {
            jump++;
            if (i >= max_reach)
                return -1;
            step = max_reach - i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int size = sizeof(arr) / sizeof(int);

    // Calling the minJumps function
    cout << ("Minimum number of jumps to reach end is %d ",
             minJumps(arr, size));
    return 0;
}