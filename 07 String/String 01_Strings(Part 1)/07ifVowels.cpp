// Input a string of length n and count all the vowels in given string

#include<iostream>
using namespace std;

int main()
{
    string str = "Dhiraj";
    int count=0;
    int i=0;

    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
        i++;
    }
    cout<<count<<endl;
    
    return 0;
}