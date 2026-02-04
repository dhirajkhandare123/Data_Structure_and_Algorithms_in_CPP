// Find the last occurance of x in the array

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter X : ";
    int x;
    cin>>x;

    int idx=-1;

    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            idx=i;
           
        }
    }

    cout<<"Last occurance : "<<idx<<endl;
    return 0;
}