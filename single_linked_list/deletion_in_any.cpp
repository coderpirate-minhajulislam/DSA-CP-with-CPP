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

//? delete at any position of the list
void delete_in_any(Node* &head, int pos){
    if(pos == 0){
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }
    Node* temp = head;
    for(int i=0; i<pos-1; i++){
        temp = temp->next;
    }
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
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

    delete_in_any(head, 0);

    print(head);


    return 0;

}