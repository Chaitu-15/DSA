#include<iostream>
using namespace std ;

int hashh[10000000]; // max value 10^7 if declared globally

int main(){
    //Array input
    int n;
    int arr[n];
    cin>>n;
    for(int i =0 ; i<n; i++){
        cin>>arr[i];
    }

    //precompute
    //int hashh[13] = {0};
    for(int i=0;i<n;i++){
        hashh[arr[i]] += 1;
    }
    //Fetch
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout << hashh[number] << endl;

    }
}