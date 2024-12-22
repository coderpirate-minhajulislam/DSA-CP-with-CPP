#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insert_in_tail(Node* &head, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void is_list_same(Node* head1, Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    while(temp1 != NULL && temp2 != NULL){
        if(temp1->val != temp2->val){
            cout<<"NO"<<endl;
            return;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if(temp1 == NULL && temp2 == NULL){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}


void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    while (1)
    {
        int x;
        cin>>x;
        if(x != -1){
            insert_in_tail(head1, x);
        }else{
            break;
        }
    }   
    
    while (1)
    {
        int x;
        cin>>x;
        if(x != -1){
            insert_in_tail(head2, x);
        }else{
            break;
        }
    }

    
    is_list_same(head1, head2);


    return 0;

}