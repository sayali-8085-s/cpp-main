#include <iostream>
using namespace std;
int main(){

int n ,count;
cout<<"enter a num";
cin>>n;
count= 0;
for(int i=1;i<=n;i++){
    if(n%i==0){
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