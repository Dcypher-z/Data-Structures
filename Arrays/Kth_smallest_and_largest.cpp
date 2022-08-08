#include <bits/stdc++.h>
using namespace std;

/*
Its is better to sort the array using merge sort , quick sort and then return the kth element
it will give complexity of O(nlogn)
*/
/*
we know the Set in C++ STL is implemented using Binary Search Tree and we also know that the time complexity
of all cases(searching, inserting, deleting ) in BST is log (n) in the average case and O(n) in the worst case.
We are using set because it is mentioned in the question that all the elements in an array are distinct.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = { 12, 3, 5, 7, 19 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    set<int> s(arr, arr + n);
    set<int>::iterator itr
        = s.begin(); // s.begin() returns a pointer to first
                     // element in the set
    advance(itr, k - 1); // itr points to kth element in set

    cout << *itr << "\n";

    return 0;
}
*/


/*ordered map approach
A map-based STL approach is although very much similar to the quickselect and counting 
sort algorithm but much easier to implement. We can use an ordered map and map each element 
with its frequency. And as we know that an ordered map would store the data in a sorted manner, 
we keep on adding the frequency of each element till it does not become greater than or equal to k 
so that we reach the k’th element from the start i.e. the k’th smallest element.

#include <bits/stdc++.h>
using namespace std;
int Kth_smallest(map<int, int> m, int k)
{
    int freq = 0;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        freq += (it->second); // adding the frequencies of
                              // each element
        if (freq >= k)        // if at any point frequency becomes
                              // greater than or equal to k then
                              // return that element
        {
            return it->first;
        }
    }
    return -1; // returning -1 if k>size of the array which
               // is an impossible scenario
}
int main()
{
    int n = 5;
    int k = 2;
    vector<int> arr = {12, 3, 5, 7, 19};
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]] += 1; // mapping every element with it's
                        // frequency
    }
    int ans = Kth_smallest(m, k);
    if (k == 1)
    {
        cout << "The " << k << "st smallest element is " << ans
             << endl;
    }
    else if (k == 2)
    {
        cout << "The " << k << "nd smallest element is " << ans
             << endl;
    }
    else if (k == 3)
    {
        cout << "The " << k << "rd smallest element is " << ans
             << endl;
    }
    else
    {
        cout << "The " << k << "th smallest element is " << ans
             << endl;
    }
    return 0;
}*/