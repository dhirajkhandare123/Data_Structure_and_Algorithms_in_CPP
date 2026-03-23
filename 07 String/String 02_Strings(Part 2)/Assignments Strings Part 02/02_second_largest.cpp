/*
Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
Input : str = "2947578"
Output : 8
Input : str = "1241"
Output : 2
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>
using namespace std;

int main()
{
    string s="521334";
    int x = stoll(s);
    vector<int> v;
    int n = s.length();

    int i=0;

    while(x>0){
        int j=x%10;
        v.push_back(j);
        x=x/10;
    }
    int largest=INT_MIN;
    int secLarge=INT_MIN;
    
    sort(v.begin(),v.end());
    int sizeOfv=v.size();
    cout<<"Seconnd Largest: "<<v[sizeOfv - 2]<<endl;
    return 0;
}