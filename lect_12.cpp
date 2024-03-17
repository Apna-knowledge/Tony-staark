#include<iostream>
using namespace std;

int main(){
//  what is pointer ---->>>>>Data type which hold the address of other data type ;
  
  int a=5;
  int *b=&a;
//   {*}  ---->>>>Dereference opertor 
cout<<"Addres of  a is "<<&a<<endl;        
cout<<"The address of a is :"<<b<<endl;

/*       --->>>>(value at) Deference operator */
// pointer to pointer ----===.>>>


int**c=&b;
cout<<"The address of b is "<<&b<<endl;
cout<<"Teh address of b is "<<c<<endl;
cout<<"The value of address c is "<<c<<endl;
cout<<"The value of address c is "<<*c<<endl;
 return 0;
}  