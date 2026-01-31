// Given an array, predict if the array contains duplicates
// or not

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[] = {1, 1,13, 56, 93, 3, 34};

//     int size = sizeof(arr) / sizeof(arr[0]);

//     bool flag = false;

//     for (int i = 0; i < size; i++){
//         for (int j = i + 1; j < size; j++){
//             if (arr[i] == arr[j]){
//                 flag = true;
//                 break;
//             }
//         }
//     }

//     if (flag == true){
//         cout << "Contain duplicates!" << endl;
//     }
//     else{
//         cout << "Not contain Duplicates!" << endl;
//     }

//     return 0;
// }

// ---------------------------------------------------------
// PW SOLUTION

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,-3,2,-5,6,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = false;  // false ---> no duplicates
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }
        if(flag==true) break;
    }

    if(flag==true) cout<<"contain duplicates"<<endl;
    else cout<<"All elements are unique!"<<endl;
    return 0;
}


