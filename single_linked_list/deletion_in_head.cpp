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

//? delete at head of the list
void delete_in_head(Node* &head){
    Node* toDelete = head;
    head = head->next;
    delete toDelete;
}

//? print the list
void print(Node* head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    
}

//? main function
int main(){
    Node* head = NULL;
   
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head = b;
    b->next = c;
    c->next = d;

    delete_in_head(head);

    print(head);

    return 0;
}