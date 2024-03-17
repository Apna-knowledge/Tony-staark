#include<iostream>

using namespace std;
int main(){
const int size=7;
int arr[size];
int sum=0;
cout<<"Enter "<<size<<"numberest:"<<endl;
for(int i=0;i<size;++i){
    cin>>arr[i];
    sum+=arr[i];
}
cout<<"sum of arry element :"<<sum<<endl;
    return 0;
}