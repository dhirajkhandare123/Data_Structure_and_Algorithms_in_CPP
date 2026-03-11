/*
Input a string of length n and count all the consonants in the given string.
Input : "pwians"
Output : 4
Input : "abdc"
Output : 3
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter: ";
    getline(cin,str);

    int n = str.length();
    int cons=0;
    int vowels=0;

    for(int i=0;i<n;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            
            vowels++;
        }
        else{
            cons++;
        }
    }
    cout<<"Vowels: "<<vowels<<endl;
    cout<<"Consonent: "<<cons<<endl;
    return 0;
}