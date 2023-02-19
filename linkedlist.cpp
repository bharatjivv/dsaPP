#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        // Use of constructor in linked list 
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
};

void InsertAtHead(Node* &head, int d){
    // Create new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;

}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL ){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    // created first node
    Node* node1 = new Node(16);

    // created a header
    Node* head = node1;
    Node* tail = node1;


    // printing a single node
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;
    print(head); 

    insertAtTail(tail, 6);
    insertAtTail(tail, 8);
    insertAtTail(tail, 10);
    insertAtTail(tail, 12);
    insertAtTail(tail, 14);
 
    print(head);


    
}