#include<iostream>
using namespace std;

void SelectionSort(int arr[] , int n ) 
{
    for(int i = 0 ;i<=n-2;i++){
        int min = i;
        for(int j = i ; j<=n-1 ; j++)
        {
            if(arr[j]<arr[min]){
                min=j;
            }
        }
         swap(arr[min],arr[i]);
        /*
          ---> Swap can also be written as
                int temp = arr[min];
                arr[min] = arr[i];
                arr[i] = temp;
         */
         
    }
}

void BubbleSort(int arr[], int n)
{
    for(int i = n-1;i>=0;i--){
        for(int j = 0 ; j<=i-1 ; j++ ) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }

    }

}

void InsertionSort(int arr[] , )
int main(){
int n;
cin>>n;
int arr[n];
//input
for(int i=0;i<n;i++) cin>>arr[i];
BubbleSort(arr,n);
//display
for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}