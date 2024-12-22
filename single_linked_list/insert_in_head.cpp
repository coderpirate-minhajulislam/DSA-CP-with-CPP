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

void insert_in_head(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

//? print the list
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

int main(){
    Node* head = NULL;
    insert_in_head(head, 10);
    insert_in_head(head, 20);
    insert_in_head(head, 30);
    insert_in_head(head, 40);

    print(head);


    return 0;
}