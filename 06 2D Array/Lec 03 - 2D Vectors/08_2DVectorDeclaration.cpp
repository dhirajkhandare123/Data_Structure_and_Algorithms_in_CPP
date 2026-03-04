// Declaration of 2D vector.

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    
    vector<vector<int> >v(3,vector<int> (3));

    cout<<"Enter elements"<<endl;

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cin>>v[i][j];
        }
    }
    cout<<endl;

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}