// Print hello world n times

#include <iostream>
using namespace std;

int main(){
    cout<<"Enter num: ";
    int num;
    cin>>num;

    for(int i=1;i<=num;i++){
        cout<<i<<" Hello World."<<endl;
    }
    return 0;
}