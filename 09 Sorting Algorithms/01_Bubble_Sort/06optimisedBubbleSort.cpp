// Optimised bubble sort

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n=6;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Bubble sort optimised
    for(int i=0;i<n-1;i++){
        bool flag = true;
        // traverse
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        if(flag == true){ // swap didn't happen
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}