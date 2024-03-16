#include<iostream>

using namespace std;

int num1=23,num=23;
int main(){
int num1=24;
int num2=12;
int sum=::num1+num2;
cout<<num1<<num2<<endl;
cout<<::num1<<num2<<endl;
cout<<sum<<endl;


    return 0;
}