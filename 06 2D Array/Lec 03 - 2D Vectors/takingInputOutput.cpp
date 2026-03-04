#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"Enter rows/columns:";
    int n;
    cin>>n;
    vector<vector<int> >v(n,vector<int>(n));
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }

    cout<<endl;
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}