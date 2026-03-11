

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;  // declare string
    cout<<"Enter: ";
    cin>>str; // input

    int n = str.length();
    // update
    for(int i=0;i<n;i++){
        if((i%2)!=0){
            str[i] = '#';
        }
    }
    // print
    cout<<str<<endl;
    return 0;
}