 
#include <iostream.h>
using namespace std;  
class set 
{ 
int m,n; 
public:  
void input(void); 
void display (void); 
void largest(void); 
}; 
int set::largest (void) 
{ 
if(m>n) 
return m;  
else 
return n; 
} 
void set::input(void) 
{ 
cout<<”input values of m and n:”; 
cin>>m>>n; 
} 
void set::display(void) 
{  
cout<<”largestvalue=”<<largest()<<”\n”; 
} 
void main() 
{ 
set A;  
A.input( );  
A.display( ); 
} 