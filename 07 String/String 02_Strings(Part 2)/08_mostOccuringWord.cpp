// Given a sentence 'str', return the word that is occuring most
// number of times in that sentence.

#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;

int main()
{
    string str = "raghav is a maths teacher. He is a DSA mentor as well";
    string temp;
    stringstream ss(str);
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }

    // vector print
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }

    cout<<endl;
    sort(v.begin(),v.end());

    // vector print
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }

    int maxCount=1;
    int count=1;

    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        maxCount=max(maxCount,count);
    }
    
    // Print
    count = 1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(maxCount==count){
            cout<<v[i]<<" "<<count<<endl;
        }
    }
    
    return 0;
}