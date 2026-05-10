#include<iostream>
#include<vector>
using namespace std;

bool isPartioned(vector<int>&v){
    int n = v.size();
    // prefix sum
    for(int i=1;i++;i<n){
        v[i] = v[i] + v[i-1];
    }

    for(int i=0;i<n;i++){
        if(2*v[i] == v[n-1]){
            return true;
        }
    }

    return false;
}

int main()
{
    int size;
    cout<<"Enter size: ";
    cin>>size;

    vector<int>arr;

    for(int i=0;i<size;i++){
        cout<<"Enter: ";
        int x;
        cin>>x;
        arr.push_back(x);
    }

    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;

    if(isPartioned) cout<<"Given array can be partioned."<<endl;
    else {
        cout<<"Can not be partioned."<<endl;
    }

    return 0;
}