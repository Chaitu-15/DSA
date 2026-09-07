#include <bits/stdc++.h>
using namespace std;

int main(){
    //char input
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ;i<n;i++){
        cin>>arr[i];
    }

    //precompute
     map<int, int>mpp;
     for(int i =0;i<n;i++){
        mpp[arr[i]]++;
     }

     //query input
     int q;
     cin>>q;
     while(q--){
        int number;
        cin>>number;
        //fetch 
        cout<<mpp[number]<<endl;;
     }

     //to iterate in map
     //to show map stores in sorted orderB
     for(auto it : mpp){
        cout<<it.first<<" --> "<<it.second<<endl;
     }

}

/*
#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;

    int hash[256]={0};

    //precompute
    for(int i =0;i<s.size();i++){
        hash[s[i]] ++;
    }

    
    int q;
    cin>> q;
    while(q--){
        char ch ;
        cin>>ch;
        //fetch
        cout<<hash[ch]<<endl;
    }
    //return 0;

}
 

*/