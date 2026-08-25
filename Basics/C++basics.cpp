#include<iostream>
#include<math.h>
#include<string>
using namespace std;





void myname(string name){
   cout<<"hey "<< name;
}

int main(){
string name;
cin>>name;
myname(name);

return 0;

}
    /*
   int age;
   cin >>age;
   if(age>=18)
   {
    cout<<"You are an adult";
   }
   else{
    cout<<"You are underage";
   }

 int marks;
 cin>>marks;
 if(marks<25){
    cout<<"F";
 }
 else if(marks<=44){ 
    cout<<"E\n";
    if(marks>40){
        cout<<"lucky above avg";
    }
 }

}*/