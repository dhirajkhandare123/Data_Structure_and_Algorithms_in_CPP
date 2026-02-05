// Move all negative numbers to beginning and positive to end with
// constant extra space.

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sortPosNeg(vector<int>&a){
    int i=0;
    int j=a.size()-1;

    while(i<j){
        if(a[i]<0) i++;
        if(a[j]>0) j--;
        if(i>j) break;
        if(a[i]>0 && a[j]<0){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    return;
}
int main()
{
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(8);
    arr.push_back(3);
    arr.push_back(-4);
    arr.push_back(-5);
    arr.push_back(6);
    arr.push_back(-2);

    display(arr);
    sortPosNeg(arr);
    display(arr);

    return 0;
}