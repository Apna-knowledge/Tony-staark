#include<iostream>
#include<typeinfo>
//Here i am using type casting proogram ---->>
using namespace std;
int main(){
int a=10;
double b=3.14;
char c='s';
//There is two types of  type casting ()()
//=(implicit typecasting )
double  a2=a;
cout<<a2<<endl;
int b2=b;
cout<<b2<<endl;
//=(Explicit typecasting)---->>>>
double a3=(double)a;
cout<<a3<<endl;
int b3=(int)b;
cout<<b3<<endl;
// cout<<typeid(a).name()<<endl;
// cout<<typeid(b).name()<<endl;
// cout<<typeid(c).name()<<endl;

    return 0;
}