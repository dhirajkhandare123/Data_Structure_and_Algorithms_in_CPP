/*    RHOMBUS:

   ****
  ****
 ****
****

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        // spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        // stars
        for(int k=1;k<=n;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


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
//         for(int k=1;k<=n;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }