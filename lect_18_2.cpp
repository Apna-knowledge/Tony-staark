#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int a;
    cout<<"Enter the value of a :"<<endl;
    cin>>a;
    cout<<"Output by user given value "<<factorial(a)<<endl;




    return 0;
}