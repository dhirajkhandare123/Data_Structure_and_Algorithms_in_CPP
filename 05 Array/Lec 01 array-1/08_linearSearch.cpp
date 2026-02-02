// Find the element x in the array. Take array and x as input.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int arr[n];
    // input.
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter element you want to search ";
    cin>>x;
    // search
    // check mark.
    int flag = false;   // false -> Not present. 
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag = true;
        }
    }
    if(flag==true){
        cout<<"Element Present."<<endl;
    }
    else{
        cout<<"404 not found"<<endl;
    }
    return 0;
}


// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int x;
//     cout<<"Enter number: ";
//     cin>>x;

//     int location=0;

//     bool flag=false;
//     for(int i=0;i<n;i++){
//         if(x==arr[i]){
//             flag=true;
//             location=i;
//             break;
//         }
//     }
//     if(flag==true){
//         cout<<x<<" is present at "<<location<<endl;
//     }
//     else{
//         cout<<"Error not found"<<endl;
//     }
//     return 0;
// }