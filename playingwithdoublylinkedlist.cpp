#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int d){
            this->data = d;
            this->prev = NULL;
            this->next = NULL;

        }
};

// traversing a linked list
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

// gives length of linked list
int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp -> next;
    }

    return len;
}

void insertathead(Node* &head, Node* &tail, int d){
    //empty list
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertattail(Node* &head, Node* &tail, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }

}

void insertatposition(Node* &head, Node* &tail, int position, int d){
    if(position == 1){
        insertathead(head ,tail, d);
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    //inserting at last position
    if(temp->next == NULL){
        insertattail(head, tail, d);
        return ;
    }

    // creating a node for d
    Node* nodetoinsert = new Node(d);

   nodetoinsert -> next = temp -> next;
   temp->next->prev = nodetoinsert;
   temp->next = nodetoinsert;
   nodetoinsert -> prev = temp;

}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertathead(head, tail, 11);
    print(head);

    insertattail(head, tail, 15);
    print(head);
    cout << "Head is : " << head-> data << endl;
    cout << "Tail is : " << tail-> data << endl;


    insertatposition(head, tail, 2, 100);
    print(head);
}