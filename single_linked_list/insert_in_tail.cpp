
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

//? insert at the end of the list

void insert_at_tall(Node* &head, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new Node(val);
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
    insert_at_tall(head, 10);
    insert_at_tall(head, 20);
    insert_at_tall(head, 30);
    insert_at_tall(head, 40);
    insert_at_tall(head, 50);

    
    print(head);

    return 0;

}