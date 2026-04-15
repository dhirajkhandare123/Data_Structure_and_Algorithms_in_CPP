// Selection Sort

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[] = {15,3,1,-4,2};
    int n=5;
    // print using for each loop
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    // selection sort
    for(int i=0;i<n-1;i++){
        int mini=INT_MAX;
        int mindx=-1;
        // minimum element calculation in orange box(Unsorted element).
        for(int j=i;j<n;j++){
            if(arr[j]<mini){
                mini=arr[j];
                mindx=j;
            }
        }
        swap(arr[i],arr[mindx]);
    }

    // print using for each loop
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    return 0;
}