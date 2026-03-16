/*
Input a string of even length and reverse the second half of the string.
Input : str = "abcdefgh"
Output : abcdhgfe
Input :str = "pwians"
Output : pwisna
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    cout<<"Enter: ";
    cin>>str;

    int n = str.length();
    int mid = n/2;
    
    int i=mid;
    int j=n-1;
    char temp;
    while(i<j){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    cout<<str<<endl;
    return 0;
}