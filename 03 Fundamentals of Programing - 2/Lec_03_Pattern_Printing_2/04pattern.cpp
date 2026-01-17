/*  Star Pyramid.

   *
  ***
 *****
*******

*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=(n-i);j>0;j--){
//             cout<<" ";
//         }
//         for(int k=1;k<=(2*i-1);k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter: ";
    cin>>n;

    int nst=1;
    int nsp=n;

    for(int i=1;i<=n;i++){
        // spaces
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        nsp-=1;

        // stars
        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
        nst+=2;
        cout<<endl;
    }
    return 0;
}