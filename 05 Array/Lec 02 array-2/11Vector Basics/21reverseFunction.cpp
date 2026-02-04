#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;;
}

void reverse(vector<int>&a){
    int i=0;
    int j=a.size()-1;
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
    v.push_back(30);
    v.push_back(12);
    v.push_back(73);
    v.push_back(2);
    v.push_back(99);
    v.push_back(15);
    v.push_back(89);

    display(v);

    reverse(v);

    display(v);
    
    return 0;
}