// Prinpath using two parameters

#include<iostream>
using namespace std;
void printPath(int row,int col,string s){
    if(row<1 || col<1) return;
    if(row==1 && col==1){
        cout<<s<<endl;
        return;
    }
    printPath(row,col-1,s+"R"); // rightway
    printPath(row-1,col,s+"D"); // downway
}
int main()
{
    printPath(3,3,"");
    return 0;
}