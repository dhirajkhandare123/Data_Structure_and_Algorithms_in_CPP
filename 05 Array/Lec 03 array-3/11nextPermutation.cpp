#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/* code for reverse array
// void reverse(vector<int>&nums,int i,int j){
//     while(i<j){
//         int temp=nums[i];
//         nums[i]=nums[j];
//         nums[j]=temp;
//         i++;
//         j--;
//     }
//     return;
// }
*/

vector<int> nextPermutation(vector<int>&nums){
    int n = nums.size();
    // 1)finding pivot element.
    int idx = -1;
    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            idx = i;
            break;
        }
    }
    if(idx==-1){ // if array is already greater.
        reverse(nums.begin(),nums.end());
        return nums;
    }
    // 2) sorting/reverse after finding pivot.
    reverse(nums.begin()+idx+1,nums.end());
    // 3) finding the just greater element than idx.
    int j=-1;
    for(int i=idx+1;i<n;i++){
        if(nums[i]>nums[idx]){
            j=i;
            break;
        }
    }
    // 4) swapping idx and idx+1.
    int temp = nums[idx];
    nums[idx] = nums[j];
    nums[j] = temp;

    return nums;
}


int main()
{
    vector<int>v;
    // if we pass   ----->   1 3 5 2 
    // then expected o/p --> 1 5 2 3
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int>ans = nextPermutation(v);

     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}