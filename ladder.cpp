#include <iostream>
using namespace std;
int main() 
{
    int a,b,c ;
    cout<<"enter 1 value\n";
    cin>>a;
    cout<<"enter 2 value\n";
    cin>>b;
    cout<<"enter 3 value\n";
    cin>>c;
// find larger no
//     if( a>b && a>c)
//     {
//     cout<<a<<"is larger";
//     }
//     else if(b>a && b>c)
//     {
//     cout<<b<<"is larger";
//  }
//     else if(a==b && a!=c)
//     {
//     cout<<"a and b is larger";
//     }
//     else if(b==c && b!=a)
//     {
//     cout<<"b and c is larger";
//     }
//     else if(a==b && b==c)
//     {
//     cout<<"all value is equal";
// }
//     else{
//         cout<<c<<"is larger";
        
//     }

// }

// marks
int per;
per=a+b+c/100;

if(per>=60 && per<=100)
{
    cout<<"first division";
}
else if(per<=59 && per>=50)
{
    cout<<"second d";
}
else if(per<=49 && per>35)
{
    cout<<"third d";
}
else if(per<49)
{
    cout<<"fail";
}
}