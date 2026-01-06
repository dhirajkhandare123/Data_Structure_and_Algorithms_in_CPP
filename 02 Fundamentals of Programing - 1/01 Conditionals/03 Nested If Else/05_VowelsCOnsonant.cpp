#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter character : ";
    cin>>ch;
    int ascii = (int)ch;
    if((ascii>=65) && (ascii<=90) || (ascii>=97) && (ascii<=122)){
        if(ch=='a' || ch=='e' || ch == 'i'||ch=='o'||ch=='u'){
            cout<<"Character is vowels";
        }
        else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            cout<<"Character is vowels.";
        }
        else{
            cout<<"Character is consonent.";
        }
    }
    else{
        cout<<"Character is not an alphabet.";
    }
    return 0;
}