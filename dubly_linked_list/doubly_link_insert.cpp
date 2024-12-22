#include <bits/stdc++.h>
using namespace std;

//? dubly linked list

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_head(Node *&head, Node* &tail,int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}

void insert_at_tail( Node* &head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {   head = new_node;
        tail = new_node;
        return;
    }
    new_node->prev = tail;
    tail->next = new_node;
    tail = new_node;
}
//? Print list function

void print_forward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

//? main function

int main()
{
   
    
    Node *head = NULL;
  
    Node *tail = NULL;

    

    insert_at_head(head, tail, 40);
    insert_at_head(head, tail, 10);
    insert_at_tail(head, tail, 35);
    insert_at_tail(head, tail, 89);
    
    print_forward(head);
    print_backward(tail);

    return 0;
}