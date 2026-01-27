#include<iostream>
using namespace std;
int n;
void print_star_triangle(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}

int main()
{

    cout<<"Enter rows: ";
    cin>>n;

    cout<<"How many times you want to print star_triangle? --> ";
    int m;
    cin>>m;

    for(int i=0;i<m;i++){
        print_star_triangle(n);
    }

    return 0;
}