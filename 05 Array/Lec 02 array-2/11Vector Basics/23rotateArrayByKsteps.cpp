// Rotate the given part array 'a' by k steps, where k is 
// non-negative

// Note -> k can be greater than n as well where n is the size 
// of array 'a'.

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;;
}

void revPart(int i,int j,vector<int>&a){

    while(i<=j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }

}

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);

    int n=v.size();
    int k=24;  // here k is rotating part.
    if(k>n) k = k % n;
    
    display(v);

    revPart(0,n-k-1,v);
    revPart(n-k,n-1,v);
    revPart(0,n-1,v);

    display(v);

    return 0;
}