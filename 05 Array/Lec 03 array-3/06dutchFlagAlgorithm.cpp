// Sort the arrays of 0's, 1's and 2's.
// Method 2
// Leetcode -> 75. Sort colors.

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void sort(vector<int>&a){
    // one pass soluton
    int n=a.size();
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){
        // 1) mid ke baare me socho
        // 2) 0 to low-1 -> 0 high+1 to end -> 2
            // low to mid-1 -> 1
        if(a[mid]==2){
            int temp=a[high];
            a[high]=a[mid];
            a[mid]=temp;
            high--;
        }
        else if(a[mid]==0){
            int temp=a[low];
            a[low]=a[mid];
            a[mid]=temp;
            low++;
            mid++;
        }
        else{
            
            mid++;
            
        }
    }
}

int main()
{
    vector<int>v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    display(v);
    sort(v);
    display(v);


    return 0;
}