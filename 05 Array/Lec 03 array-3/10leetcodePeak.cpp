// 162. Find Peak Element
// A peak element is an element that is strictly greater than its neighbors.

// Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

#include<iostream>
#include<vector>
using namespace std;

 int findPeakElement(vector<int>& nums){
    int n=nums.size();
    int ans;
    for(int i=0;i<n;i++){
        if(i==0){
            if(nums[0]>nums[1]){
                ans = i;
            }
        }
        else if(i==n-1){
            if(nums[n-1]>nums[n-2]){
                ans = i;
            }
        }
        else{
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                ans = i;
            }
        }
    }
    return ans;
}

int main()
{
    // 1,2,1,3,5,6,4
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(4);

    int peak = findPeakElement(v);

    cout<<"Peak Element index : "<<peak<<endl; 
    return 0;
}