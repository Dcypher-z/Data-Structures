#include <bits/stdc++.h>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int n1, int n2)
{
    int arr3[n1 + n2];
    int i = 0, j = 0;
    int k = 0;
    while (i != n1 || j != n2)
    {
        if (j == n2)
        {
            while (k != n1 + n2)
            {
                arr3[k] = arr1[i];
                i++;
                k++;
            }
        }
        else if (i == n1)
        {
            while (k != n1 + n2)
            {
                arr3[k] = arr2[j];
                j++;
                k++;
            }
        }
        else if (arr1[i] <= arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else if (arr1[i] > arr2[j])
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
        cout << i << " " << j << endl;
    }
    for (int p = 0; p < n1 + n2; p++)
    {
        cout << arr3[p] << endl;
    }
}

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    mergeArrays(arr1, arr2, n1, n2);

    return 0;
}