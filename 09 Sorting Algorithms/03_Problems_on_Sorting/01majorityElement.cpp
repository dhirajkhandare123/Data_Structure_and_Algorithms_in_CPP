// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// Easy Way To Solve Problem:

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        // 2 2 1 1 1 2 2
        for(int i=0;i<n;i++){
            int count=1;
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count > (n/2)) return nums[i];
        }
        return -1;
    }
};
	
// Optimized Way To Solve Problem:

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // 2 2 1 1 1 2 2
        sort(nums.begin(),nums.end());
        return nums[(nums.size())/2];
    }
};