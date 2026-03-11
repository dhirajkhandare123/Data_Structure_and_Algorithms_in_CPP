#include<iostream>
using namespace std;

int main()
{
    // char str[] = {'a','b','c','d','e'};
    // for(int i=0;i<5;i++){
    //     cout<<str[i]<<" ";
    // }
    
    char str1[] = "abcde"; // last element is \0
    for(int i=0;i<5;i++){
        cout<<str1[i]<<" ";
    }

    // char ch = 'ab';
    // cout<<ch<<endl; // error
    char ch = '\0';
    cout<<ch<<endl;

    return 0;
}