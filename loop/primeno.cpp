#include <iostream>
using namespace std;
int main()
{
    int a, count;
    cout<<"enter num";
    cin>>a;
    count=0;
    for(int i=1 ; i<=a;i++){
        if(a%i==0){
        count++;
        }
    }
    if(count==2){
        cout<<"prime";
    }
    else{
        cout<<"not";
    }
        
    }
// namespace name
