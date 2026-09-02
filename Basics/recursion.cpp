#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0) return 1;// not return 0 because 0 gets multiplied and final ans becomes 0

    return n * fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
}


// basic recursion function to print factorial of n numbers
