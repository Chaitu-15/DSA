#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {59, 27, 7, 1, 53};

    sort(arr.begin(), arr.end());

    cout << "Sorted array: ";

    for(int x : arr)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}