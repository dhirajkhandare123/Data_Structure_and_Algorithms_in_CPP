#include<iostream>
#include<vector>
using namespace std;
vector<int>merge(vector<int>&v1,vector<int>&v2){
    int i=0;
    int j=0;
    int k=0;
    int m=v1.size();
    int n=v2.size();
    vector<int>res(m+n);
    while(i<m && j<n){
        if(v1[i] < v2[j]){
            res[k]=v1[i];
            i++;
            k++;
        }
        else{
            res[k]=v2[j];
            j++;
            k++;
        }
    }
    if(i==m){
        while(j<n){
            res[k]=v2[j];
            j++;
            k++;
        }
    }
    if(j==n){
        while(i<m){
            res[k]=v1[i];
            i++;
            k++;
        }
    }
    return res;
}
int main()
{
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    vector<int>v2;
    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(6);
    v2.push_back(8);
    vector<int>ans=merge(v1,v2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}