// Skip a character
// Remove all occurrences of 1 from a vector and return vector.
// Here recursion is use

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> removeChara(vector<int>&ans,vector<int>&v,int idx){
    if(idx==v.size()) return ans;
    if(v[idx] != 1){
        ans.push_back(v[idx]);
    }
    removeChara(ans,v,idx+1);
}

int main()
{
    vector<int>v={1,2,3,1,1,4,5,1};  
    vector<int>ans;
    vector<int>final=removeChara(ans,v,0);

    for(int ele:final) cout<<ele<<" ";
    cout<<endl;
    return 0;
}