#include<iostream>

using namespace std;

int c=45;

int main(){
int a,b,c;
cout<<"Enter the value of a :"<<endl;//print output to secound line
cin>>a;
cout<<"Enter the value of b:"<<endl;
cin>>b;
c=a+b;
cout<<"The sum of a+b is"<<c;
cout<<"The global c is "<<::c;//these :: operator name -->>scope resolution operator

    return 0;
}