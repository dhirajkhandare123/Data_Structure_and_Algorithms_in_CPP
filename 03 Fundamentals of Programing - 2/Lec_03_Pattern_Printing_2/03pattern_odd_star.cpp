#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENter: ";
    cin>>n;

    // *
    // **
    // *****
    // *******

    for(int i=1;i<=n;i++){
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

/*

-----           *
----            ***
---         +   *****    
--              *******
-               


*/

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter: ";
//     cin>>n;
//     int odd=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=odd;j++){
//             cout<<"*";
//         }
//         odd=odd+2;
//         cout<<endl;
//     }
//     return 0;
// }