#include<iostream>

using namespace std;
int sum(int a ,int b){
int c=a+b;
return c;
} 


void swap(int a,int b){
   int  temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=34,b=45;
cout<<"The sum of a and bis "<<sum(a,b);

    return 0;
}


