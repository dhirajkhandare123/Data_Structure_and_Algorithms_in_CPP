#include<iostream>
using namespace std;

int main()
{

    int* ptr1 = NULL;  // reserved address.
    int* ptr2 = 0;
    int* ptr3 = '\0';  // Null character.
    cout<<ptr1<<" "<<ptr2<<" "<<ptr3<<endl;  // 0


    // \0    -------> Null character
    char ch = '\0';
    cout<<(int)ch<<endl;  // ASCII value
    return 0;
}