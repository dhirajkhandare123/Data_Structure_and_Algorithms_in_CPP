// Find the second largest element in the given Array in one pass.

// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {
//     int arr[] = {3, 2, 2, 2, 2, 2, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int mx = INT_MIN;
//     int smax = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > mx)
//         {
//             smax = mx;
//             mx = arr[i];
//         }
//         else
//         {
//             if (mx != arr[i])
//             {
//                 smax = max(smax, arr[i]);
//             }
//         }
//     }

//     cout << mx << endl;
//     if (smax == INT_MIN)
//     {
//         cout << "No second max" << endl;
//     }
//     else
//     {
//         cout << smax << endl;
//     }

//     return 0;
// }

//----------------------------------------------------------
// TEXT SOLUTION FOR ASSIGNMENT.
#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[6] = {12, 35, 1, 10, 29, 1};
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (max1 < arr[i])
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (max2 < arr[i] && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }

    cout << "MAX1 :" << max1 << endl;

    if (max2 == INT_MIN)
    {
        cout << "No second element exists" << endl;
    }
    else
        cout << "MAX2 :" << max2 << endl;
    return 0;
}
//----------------------------------------------------------
//----------------------------------------------------------

// #include<iostream>
// #include<climits>
// using namespace std;

// int main()
// {
//     int arr[] = {2,2,2,2,2,2};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int mx = INT_MIN;
//     int smax = INT_MIN;

//     for(int i=0;i<size;i++){
//         if(arr[i]>mx){
//             smax=mx;
//             mx=arr[i];
//         }
//     }

//     cout<<mx<<endl;
//     if(smax!=INT_MIN){
//         cout<<smax<<endl;
//     }
//     else{
//         cout<<"404 Not Found!";
//     }

//     return 0;
// }

//----------------------------------------------------------