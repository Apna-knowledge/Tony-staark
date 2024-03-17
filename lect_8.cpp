#include<iostream>
#include<iomanip>


using namespace std;
int main(){
// int a=34;
// // char c='c';
// cout <<"The value of a is "<<a<<endl;
// a=45;
// cout <<"The value of a is :"<<a<<endl;
// // c='4';
// cout <<"The value of  c is: "<<c<<endl;

//constant in c++
// const int a=3;
// cout <<"the value of a was :"<<a<<endl;
// const int a=45;

// cout <<"The value of a is : "<<a<<endl;


//Manipulator in c++;;;;;;;;
int a=23;
int b=12;
int c=34;
cout<<"The value of a is :"<<setw(4)<<a<<endl;
cout<<"The value of b is :"<<setw(4)<<b<<endl;
cout <<"The value of c is :"<<setw(4)<<c<<endl;
cout <<"The value of  without using setw a is :"<<a<<endl;
cout <<"The value of without using setw b is :"<<b<<endl;
cout <<"The value of  without using setw c is :"<<c<<endl;

   return 0;
}