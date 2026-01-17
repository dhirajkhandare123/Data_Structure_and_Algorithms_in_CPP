/*
Que.    Print the given pattern.
    * * * * 
    * * * 
    * * 
    * 

*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter number of rows: ";
//     cin>>n;

//     for(int i=n;i>0;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

/*
Que.    Print the given pattern.

LOGIC--->

     1 2 3 4
    1* * * *                  row no.(i) + no. of stars = n+1
    2* * *                     no. of stars = n+1-i
    3* * 
    4* 

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}