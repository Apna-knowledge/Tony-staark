#include<iostream>
// selection control structur: Switch Case structure ----->>>>>
using namespace std;

int main(){
 int age;
 cout<<"Enter your age limit By user :"<<endl;
 cin>>age;
 switch(age){

    case 18:
       cout<<"You are 18 :"<<endl;
       break;
    case 22:
    cout<<"Your age 18 greater :"<<endl;

    default :
    cout<<"Default numbe print :"<<endl;
 }



return 0;
}