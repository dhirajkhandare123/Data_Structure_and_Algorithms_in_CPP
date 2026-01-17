/*

   1
  12
 123
1234

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
        cout<<endl; 

    }
    return 0;
}

/*

---         1
--     +    12      
-           123

*/