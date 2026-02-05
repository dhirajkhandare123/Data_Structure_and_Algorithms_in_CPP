// Sort the arrays of zeros and ones.
// Method-1 : Two pointers method
// Here -> travel of loop only one time allow.

#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int>&a){
    int i=0;
    int j=a.size()-1;

    while(i<j){
        // 1 1 0 1 0 1 1 0
        if(a[i]==1 && a[j]==0){
            a[i]=0;
            a[j]=1;
            i++;
            j--;
        }
        if(a[i]==0) i++;
        if(a[j]==1) j--;
    }
    cout<<endl;
}

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}