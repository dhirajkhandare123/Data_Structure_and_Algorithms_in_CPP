/*

   1
  121
 12321
1234321

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter: ";
    cin>>n;


    for(int i=1;i<=n;i++){

        // Spaces
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
        cout<<j;
        }
        for(int m=i-1;m>=1;m--){
            cout<<m;
        }
        cout<<endl; 

    }
    return 0;
}

/*

---         1
--     +    12      +   1
-           123         21

*/