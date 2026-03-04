#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vector<int>arr(5,7);
    // cout<<arr[0]<<" ";
    // cout<<arr[1]<<" ";
    // cout<<arr[2]<<" ";
    // cout<<arr[3]<<" ";
    // cout<<arr[4]<<" "<<endl;

    vector<vector<int> >v(3,vector<int> (3));

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}