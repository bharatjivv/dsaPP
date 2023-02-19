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

void insertAtPosition(Node* & tail, Node* &head, int position, int d){

    // insert at start
    if(position == 1){
        InsertAtHead(head, d);
        return ;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    // inserting at last position
    if(temp -> next == NULL){
        insertAtTail(tail, d);
    }
    // creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
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
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;


    print(head);
    insertAtTail(tail, 12);

    print(head);
    insertAtTail(tail, 15);
    print(head);


    insertAtPosition(tail, head, 4, 22);
    print(head);
    cout << "head : " << head->data << endl;
    cout << "tail : " << tail->data << endl;

}