// Sort the array in descending order using Bubble Sort.
// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {59,4,12,31,3,56};
//     int n=6;
//     for(int ele : arr){
//         cout<<ele<<" ";
//     }
//     cout<<endl;

//     for(int i=0;i<n-1;i++){
//         bool flag=true;
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j] < arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 flag=false;
//             }
//         }
//         if(flag==true) break;
//     }

//     for(int ele : arr){
//         cout<<ele<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// PW SOLUTION:
#include <iostream>
using namespace std;
int main() {
 int arr[5]={7,2,32,5,20};
 int size=5;
 for (int i = 0; i < size - 1; ++i){
      for (int j = 0; j < size - i - 1; ++j){
        if (arr[j] < arr[j + 1]){
          int temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
        }
      }
    }
 for (int i = 0; i < size; ++i){
      cout<<arr[i]<<" ";
    }
 return 0;
 }