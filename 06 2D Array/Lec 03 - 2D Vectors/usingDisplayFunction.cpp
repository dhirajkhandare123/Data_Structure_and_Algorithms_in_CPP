#include<iostream>
#include<vector>
using namespace std;

void display(vector<vector<int> >&v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    cout<<"Enter col/rows: ";
    int n;
    cin>>n;

    vector<vector<int> >v(n,vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }

    cout<<endl;

    display(v);

    
    return 0;
}