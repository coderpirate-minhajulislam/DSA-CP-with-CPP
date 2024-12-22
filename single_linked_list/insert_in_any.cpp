
#include<bits/stdc++.h>
using namespace std;

//? Node class
class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

//? insert at any position of the list
void insert_in_any(Node* &head, int val, int pos){
    Node* newNode = new Node(val);
    if(pos == 0){
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* temp = head;
    for(int i=0; i<pos-1; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

//? print the list
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

//? main function
int main(){

    Node* head = NULL;
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head = a;
    a->next = b;
    b->next = c;
    c->next = d;

    insert_in_any(head, 10, 2);

    print(head);


    return 0;
}