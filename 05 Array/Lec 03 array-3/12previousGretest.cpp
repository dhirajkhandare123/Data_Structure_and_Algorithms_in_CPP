#include<iostream>
#include<vector>
using namespace std;

vector<int> prevGreat(vector<int>&a){
    int n=a.size();
    vector<int>ans(n);

    ans[0]=-1;
    int max = ans[0];

    for(int i=1;i<n;i++){
        if(max<a[i]) max=a[i];
        ans[i]=max;
    }

    return a;
}

int main()
{
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);

    vector<int>ans = prevGreat(v);

    for(int i=0;i<v.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}