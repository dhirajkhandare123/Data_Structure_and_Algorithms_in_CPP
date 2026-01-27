// Q4: Write a function to count the number of digits in a number and then print the 
// square of this number.

#include<iostream>
using namespace std;

int square(int x){
    return x*x;
}

int count_digit(int n){
    int count = 0;
    while(n>0){
        n = n/10;
        count+=1;
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int countNumber = count_digit(n); 
    
    cout<<"Count = "<<countNumber<<endl;
    cout<<"Square of count of digit is "<<square(countNumber);
    return 0;
}

