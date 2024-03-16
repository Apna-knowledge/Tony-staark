#include<iostream>

using namespace std;
void printfibonacci(int n){
   int first =0,secound=1,next;
   cout<<"Fibonacci series up to"<<n<<"terms";
   for(int i=0;i<=n;i++){
     if(i<=1){
      next=i;
     }
     else{
      next=first+secound;
      first=secound;
      secound=next;
     }
     cout<<next<<" ";
   } 

}
int mian(){
int n;
cout<<"ENter the number of terms of fibonacci sereies :";
cin>>n;
if(n<=0){
   cout<<"Plese entr the positive number of terms :"<<endl;
}else{
   printfibonacci(n);
}
    return  0;












 




}