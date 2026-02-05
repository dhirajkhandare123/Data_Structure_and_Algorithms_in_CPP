#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&nums1,int m,vector<int>nums2,int n){
    int i=m-1;
    int j=n-1;
    int k=nums1.size()-1;

    while(i>=0 && j>=0){
        if(nums1[i]>nums2[j]){
            if(nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                i--;
                k--;
            }
            else{
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
    }

    for(int i=0;i<6;i++){
        cout<<nums1[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{
    vector<int>arr1;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(0);
    arr1.push_back(0);
    arr1.push_back(0);
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    vector<int>arr2;
    arr2.push_back(2);
    arr2.push_back(4);
    arr2.push_back(5);
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    return 0;
}