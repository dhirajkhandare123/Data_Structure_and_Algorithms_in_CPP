#include<iostream>
#include<vector>
using namespace std;

vector<int>runningSum(vector<int>&nums){
    int n = nums.size();
    // prefix sum
    for(int i=1;i<n;i++){
        nums[i] = nums[i] + nums[i-1];
    }

    return nums;
}

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(12);
    v.push_back(4);
    v.push_back(13);
    v.push_back(8);

    for(int x: v){
        cout<<x<<" ";
    }
    cout<<endl;

    vector<int>res = runningSum(v);

    for(int x: res){
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}