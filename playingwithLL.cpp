#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    
    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node(){
        int value = this -> data;
        if(this->next != NULL){
            delete next;
            this-> next = NULL;
        }
        cout << "Memory is free for node with data : " << value << endl;
    }

}; 

void insertathead(Node* &head, int d){
    // create new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertattail(Node* & tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
    // tail = temp;
    
}

void insertatposition(Node* &head, Node* &tail, int position, int d){

    // Insert at start 
    if(position == 1){
        insertathead(head, d);
        return; 
    }
    Node* temp = head;
    int cnt = 1;

    while (cnt < position -1){
        temp = temp->next;
        cnt++;
    }

    if(temp -> next == NULL){
        insertattail(tail, d);
        return ;
    }

    // creating a node for d
    Node* nodetoinsert = new Node(d);
    nodetoinsert -> next = temp -> next;

    temp -> next = nodetoinsert;    

}

void deleteNode(Node* &head, int position){
    // deleting first node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        // deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

    }
}

void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout << temp-> data << " ";
        temp = temp -> next; 
    }
    cout << endl;
}


int main(){
    Node* node1 = new Node(15);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    
    print(head);
    insertattail(tail, 12);
    print(head);

    insertattail(tail, 10);
    print(head);

    insertathead(head, 8);
    
    insertatposition(head, tail, 4, 22);
    print(head);


    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;

    print(head);
    deleteNode(head, 2);
    print(head);
}