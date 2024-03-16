#include<iostream>

using namespace std;
int factorial(int n){
    return (n==0||n==1)?1:n*factorial(n-1);
}
int main(){     
    int num;
    cout<<"Enter a number :";
    cin>>num;
    cout<<"FActorial of "<<num<<"is:"<<factorial(num )<<endl; 

    return 0;
}