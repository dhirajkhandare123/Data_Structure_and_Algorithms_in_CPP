#include<iostream>
using namespace std;

void printPath(int sr,int sc, int er,int ec, string s){
    if(sc>ec||sr>er) return;
    if(sc==ec && sr==er){
        cout<<s<<endl;
    }
    printPath(sr+1,sc,er,ec,s+'R');
    printPath(sr,sc+1,er,ec,s+'D');
}
int main()
{
    printPath(0,0,2,2,"");
    return 0;
}