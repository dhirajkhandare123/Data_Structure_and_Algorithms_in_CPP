// print value of d using a

#include<iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next;

        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};

int main()
{
    // 10 20 30 40
    Node a(10);
    
    Node b(20);

    Node c(30);
    
    Node d(40);

    // forming Link List
    a.next = &b;
    b.next = &c;
    c.next = &d;

    // cout<<(*(b.next)).val<<endl;

    cout<<a.val<<endl; // 10
     cout<<(a.next)->val<<endl; // 20
     cout<<((a.next)->next)->val<<endl; // 30
    cout<<(((a.next)->next)->next)->val<<endl; // 40

    return 0;
}