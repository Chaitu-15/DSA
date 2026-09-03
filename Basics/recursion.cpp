#include<iostream>
using namespace std;
/*int fact(int n)
{
    if(n==0) return 1;// not return 0 because 0 gets multiplied and final ans becomes 0

    return n * fact(n-1);
}
*/
void f(int i , int arr[] ,int n){
    if(i>=n/2) return;
    swap(arr[i] , arr[n-i-1]);
    f(i+1,arr,n);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    f(0,arr,n);
     for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
   // cout<<fact(n);
}


// basic recursion function to print factorial of n numbers
