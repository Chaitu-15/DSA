#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    // Compare elements from both halves
    while(left <= mid && right <= high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Remaining elements in left half
    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    // Remaining elements in right half
    while(right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy sorted elements back
    for(int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void MergeSort(vector<int> &arr, int low, int high)
{
    if(low >= high)
        return;

    int middle = (low + high) / 2;

    MergeSort(arr, low, middle);
    MergeSort(arr, middle + 1, high);

    merge(arr, low, middle, high);
}

void MSort(vector<int> &arr, int n)
{
    MergeSort(arr, 0, n - 1);
}

// MAIN
int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    MSort(arr, n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr , int low, int mid, int high)
{
    vector<int> temp ;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++; 
        }
        else 
        {
            temp.push_back(arr[right]);
            right++; 
        }
    }

    while(left<=mid)
    {
        
            temp.push_back(arr[left]);
            left++; 
    }
    while(right<=high)
    {
            temp.push_back(arr[right]);
            right++; 
    }
    for(int i = low ;i<=high; i++) {
        arr[i] = temp[i - low];
    }
}
void MergeSort(int arr[], int low , int high)
{
    if(low == high) return;
    int middle = (low + high) / 2;
    MergeSort(arr , low , middle);
    MergeSort(arr , middle + 1 , high);
    merge(arr, low, middle, high);
    

}
void MSort (vector<int>MergeSort &arr , int n ){
    MergeSort(arr, 0, n-1);
}
*/