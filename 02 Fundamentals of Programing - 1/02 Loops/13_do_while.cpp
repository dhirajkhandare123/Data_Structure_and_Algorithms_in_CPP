#include <iostream>
using namespace std;

int main(){
    int i=1;

    do{
        // This block of code execute always wheather condition true or false.
        cout<<i<<endl;
        i++;
    } while(i<=10);
    return 0;
}