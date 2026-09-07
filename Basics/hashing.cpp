#include<iostream>
using namespace std ;

int main(){
    //Array input
    int n;
    int arr[n];
    cin>>n;
    for(int i =0 ; i<n; i++){
        cin>>arr[i];
    }


    //precompute
    int hash[13] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }



    //Fetch
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout << hash[number] << endl;

    }
}