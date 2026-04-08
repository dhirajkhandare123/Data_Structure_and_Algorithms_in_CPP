#include<iostream>
using namespace std;

int main()
{
    char n;
    cout<<"Enter character: ";
    cin>>n;

    int num = int(n);
    cout<<"ASCII: "<<num<<endl;

    if((num>=65 && num<=90) || (num>=97 && num<=122)){

        cout<<n<<" is an alphabate.";
    }
    else if(num>=48 && num<=57){
        cout<<n<<" is a digit.";
    }
    else{
        cout<<n<<" is a special character.";
    }
    
    return 0;
}