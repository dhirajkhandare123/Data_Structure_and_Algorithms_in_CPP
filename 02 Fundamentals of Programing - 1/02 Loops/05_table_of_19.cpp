// Print the table of 19.

#include <iostream>
using namespace std;

int main(){
    cout<<"Enter table: ";
    int n;
    cin>>n;

    for(int i=1;i<=10;i++){
        cout<<n<<" x "<<i<<" = "<<(i*n)<<endl;
    }
    return 0;
}