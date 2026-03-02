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

    // inserting at particular index
    void insertAtIdx(int idx, int val){
        if(idx < 0 || idx > size) {
            cout<<"Invalid index";
        }
        else if(idx == 0) insertAtHead(val);

        else if(idx == size) insertAtTail(val);

        else{
            Node* temp = head;
            Node* t = new Node(val);
        for(int i=1; i<=idx-1; i++){ 
            temp = temp->next;
        }
        t->next = temp->next;
        temp->next = t;
        size++;
        }
    }

    int getAtIdx(int idx){
        if(idx < 0 || idx >= size) {
            cout<<"Invalid Index"<<endl;
            return -1;
        }

        else if(idx == 0) return head->val;

        else if(idx == size - 1) return tail->val;

        else{
            Node* temp = head;

            for(int i = 1; i <= idx; i++){
                temp = temp->next;
            }

            return temp->val;
        }
    }

    // delete from head
    void deleteAtHead(){
        if(size == 0) {
            cout<<"List is empty"<<endl;
            return;
        }

        if(size == 1){
            head = tail = NULL;
            size--;
            return;
        }

        head = head->next;
        size--;
    }

    // delete at tail
    void deleteAtTail(){
        if(size == 0) {
            cout<<"List is empty"<<endl;
            return;
        }

        Node* temp = head;

        while(temp->next != tail){
            temp = temp->next;
        }

        temp->next = NULL;
        tail=temp;
        size--;
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

    LinkedList ll;       // {}
    ll.insertAtTail(11); // {11 -> null}
    ll.insertAtTail(12); // {11 -> 12 -> null}
    ll.insertAtTail(13); // {11 -> 12 -> 13 -> null}
    ll.insertAtTail(14); // {11 -> 12 -> 13 -> 14-> null}
    ll.insertAtTail(15); // // {11 -> 12 -> 13 -> 14-> 15 -> null}

    ll.insertAtHead(20); // {20 -> 11 -> 12 -> 13 -> 14-> 15 -> null}

    ll.display();

    // insert at 2nd index

    ll.insertAtIdx(4,80); // {20 -> 11 -> 80 -> 12 -> 13 -> 14-> 15 -> null}

    ll.display();

    cout<<ll.getAtIdx(4)<<endl;

    ll.deleteAtHead(); // { 11 -> 80 -> 12 -> 13 -> 14-> 15 -> null}

    ll.display();

    ll.deleteAtTail(); // { 11 -> 80 -> 12 -> 13 -> 14 -> null}

    ll.display();

    return 0;
}