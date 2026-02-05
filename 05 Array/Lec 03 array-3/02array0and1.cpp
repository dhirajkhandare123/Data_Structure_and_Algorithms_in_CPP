// Sort the arrays of zeros and ones.
// Method-1 : Two pass method

#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int>&a){
    int n=a.size();
    int noz=0;
    int noo=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==0) noz++;
        if(a[i]==1) noo++;
    }
    cout<<endl;
    // filling array elements.
    for(int i=0;i<n;i++){
        if(i<noz){
            cout<<0<<" ";
        }
        else{
            cout<<1<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort(v);
    return 0;
}