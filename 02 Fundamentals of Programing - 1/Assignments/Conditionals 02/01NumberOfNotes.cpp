// (Using if else statements)

#include<iostream>
using namespace std;

int main()
{
    int amount;
    cout<<"Enter amount: ";
    cin>>amount;
    
    int n1=0,n2=0,n5=0,n10=0,n20=0,n50=0;
    int n100=0,n200=0,n500=0,n2000=0;

    if(amount >= n2000){
        n2000 = amount / 2000;
        amount = amount - (2000*n2000);
        cout<<"2000 : "<<n2000<<endl;
    }

    if(amount >= n500){
        n500 = amount / 500;
        amount = amount - (500*n500);
        cout<<"500 : "<<n500<<endl;
    }

    if(amount >= n200){
        n200 = amount / 200;
        amount = amount - (200*n200);
        cout<<"200 : "<<n200<<endl;
    }

    if(amount >= n100){
        n100 = amount / 100;
        amount = amount - (100*n100);
        cout<<"100 : "<<n100<<endl;
    }

    if(amount >= n50){
        n50 = amount / 50;
        amount = amount - (50*n50);
        cout<<"50 : "<<n50<<endl;
    }

    if(amount >= n20){
        n20 = amount / 20;
        amount = amount - (20*n20);
        cout<<"20 : "<<n20<<endl;
    }

    if(amount >= n10){
        n10 = amount / 10;
        amount = amount - (10*n10);
        cout<<"10 : "<<n10<<endl;
    }

    if(amount >= n5){
        n5 = amount / 5;
        amount = amount - (5*n5);
        cout<<"5 : "<<n5<<endl;
    }

    if(amount >= n2){
        n2 = amount / 2;
        amount = amount - (2*n2);
        cout<<"2 : "<<n2<<endl;
    }

    if(amount >= n1){
        n1 = amount / 1;
        amount = amount - (1*n1);
        cout<<"1 : "<<n1<<endl;
    }

    return 0;
}