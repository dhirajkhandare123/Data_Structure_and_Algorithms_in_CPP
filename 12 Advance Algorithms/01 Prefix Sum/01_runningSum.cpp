#include<iostream>
#include<vector>
using namespace std;

vector<int>runningSum(vector<int>&nums){
    int n = nums.size();
    vector<int>run(n);
    run[0] = nums[0];
    // prefix sum
    for(int i=1;i<n;i++){
        run[i] = run[i-1] + nums[i];
    }

    return run;
}

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(12);
    v.push_back(4);
    v.push_back(13);
    v.push_back(8);

    vector<int>res = runningSum(v);

    for(int x: res){
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}