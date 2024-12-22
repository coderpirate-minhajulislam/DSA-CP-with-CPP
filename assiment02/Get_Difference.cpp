#include <bits/stdc++.h>
using namespace std;

// node hade and tail
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_in_tail(Node *&head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void deff_max_min(Node* head, Node* tail){
    Node* temp = head;
    int max = INT_MIN;
    int min = INT_MAX;
    while(temp != NULL){
        if(temp->val > max){
            max = temp->val;
        }
        if(temp->val < min){
            min = temp->val;
        }
        temp = temp->next;
    }
    cout<<max - min<<endl;
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int V;
    while (1)
    {
        cin >> V;
        if (V != -1)
        {
            insert_in_tail(head, tail,  V);
        }
        else
        {
            break;
        }
    }
    deff_max_min(head, tail);

    return 0;
}