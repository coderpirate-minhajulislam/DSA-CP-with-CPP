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
    if(head == NULL){
        head = new Node(val);
        return;
    }
    Node* newNode = new Node(val);
    if(pos == 0){
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* temp = head;
    for(int i=0; i<pos-1; i++){
        if(temp == NULL){
            cout<<"Invalid position"<<endl;
            return;
        }
        temp = temp->next;
    }
    if(temp == NULL){
        cout<<"Invalid position"<<endl;
        return;
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
    insert_in_any(head, 10, 0);
    insert_in_any(head, 20, 1);
    insert_in_any(head, 30, 2);
    insert_in_any(head, 40, 3);
    insert_in_any(head, 50, 4);
    insert_in_any(head, 60, 6);

    print(head);
return 0;
}