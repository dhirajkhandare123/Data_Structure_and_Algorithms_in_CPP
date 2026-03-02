
#include<iostream>
using namespace std;

// user define data type
class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

// user define data structure (like array)
class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;

    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    // insert at end
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    // insert at beginning
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    // display function
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){

    LinkedList ll;
    ll.insertAtTail(11);
    ll.insertAtTail(12);
    ll.insertAtTail(13);
    ll.insertAtTail(14);
    ll.insertAtTail(15);

    ll.display();

    ll.insertAtHead(80);

    ll.display();

    return 0;
}