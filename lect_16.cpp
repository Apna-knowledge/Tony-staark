#include<iostream>

/*Call by value and call by reference------>>>>>*/

 using namespace std;
int sum(int ,int);

 int main(){
int a,b,c;
cout<<"Enter the value  ofn two number :"<<endl;
cin>>a;
cin>>b;
    c=sum(a,b);
    cin>>c;
    return ;
 }
int sum(int a ,int b){
int c=a+b;

    return c;
}