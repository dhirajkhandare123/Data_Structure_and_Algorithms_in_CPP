// Que : If cost price and selling price are input through keyboard, write a program to 
// determine whether the seller has made profit or incurred loss. Also determine how much
// profit he made or loss he incurred.

#include <iostream>
using namespace std;

int main(){
    cout<<"Enter cost price: ";
    int cp;
    cin>>cp;
    cout<<"Enter selling price: ";
    int sp;
    cin>>sp;

    if(sp>cp){
        cout<<"Profit!"<<endl;
        cout<<"Profit = "<<(sp-cp)<<endl;
    }
    if(sp<cp){
        cout<<"Loss!"<<endl;
        cout<<"Loss = "<<(cp-sp)<<endl;
    }
    if(sp==cp){
        cout<<"No profit no loss!"<<endl;
    }
    return 0;
}