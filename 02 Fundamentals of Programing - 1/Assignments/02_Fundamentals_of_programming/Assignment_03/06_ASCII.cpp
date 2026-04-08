// Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop

#include <iostream>
using namespace std;

int main(){
    cout<<"For capital Alphabates."<<endl;
    for(int i=65;i<=90;i++){
        cout<<(char)i<<" = "<<i<<endl;
    }
    cout<<"\n\n\n";
    cout<<"For small Alphabates."<<endl;
    for(int i=97;i<=122;i++){
        cout<<(char)i<<" = "<<i<<endl;
    }
    return 0;
}