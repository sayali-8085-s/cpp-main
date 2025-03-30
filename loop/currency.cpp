#include<iostream>
using namespace std;

int main()
{
    int rs1 = 0, rs2 = 0, rs5 = 0, rs10 = 0, rs50 = 0;
    int amount;
    cout<<"Enter Amount: ";
    cin>>amount;

    
    if(amount >= 50){

        rs50 = amount/50;
        amount = amount%50;
    }
    if(amount >= 10){

        rs10 = amount/10;
        amount = amount%10;
    }
    if(amount >= 5){

        rs5 = amount/5;
        amount = amount%5;
    }
    if(amount >= 2){

        rs2 = amount/2;
        amount = amount%2;
    }
    if(amount >= 1){
        rs1 = amount/1;
        amount = amount%1;
    }

    
    cout<<"50 = "<<rs50<<"\n";
    cout<<"10 = "<<rs10<<"\n";
    cout<<"5 = "<<rs5<<"\n";
    cout<<"2 = "<<rs2<<"\n";
    cout<<"1 = "<<rs1<<"\n";

}