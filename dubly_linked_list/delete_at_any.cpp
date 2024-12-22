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
//? insert at any position

void insert_at_any(Node* &head, Node* &tail, int pos, int val)
{
    Node* new_node = new Node(val);
    Node* temp = head;
    int count = 1;
    while (temp != NULL && count < pos)
    {
        temp = temp->next;
        count++;
    }
    if (temp == NULL)
    {
        cout << "Position not found" << endl;
        return;
    }
    new_node->next = temp->next;
    new_node->prev = temp;
    if (temp->next != NULL)
    {
        temp->next->prev = new_node;
    }
    temp->next = new_node;
}

//? delete at head
void delete_at_head(Node* &head, Node* &tail)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node* todelete = head;
    head = head->next;
    delete todelete;
   if (head != NULL)
    {
        head->prev = NULL;
    }else{
        tail = NULL;
    }
    
    
}

void delete_at_tail(Node* &head, Node* &tail)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node* todelete = tail;
    tail = tail->prev;
    delete todelete;
    if (tail != NULL)
    {
        tail->next = NULL;
    }else{
        head = NULL;
    }
}


void delete_at_any(Node* &head, Node* &tail, int pos)
{
    Node* temp = head;
    int count = 1;
    while (temp != NULL && count < pos)
    {
        temp = temp->next;
        count++;
    }
    if (temp == NULL)
    {
        cout << "Position not found" << endl;
        return;
    }
    
    if (temp->prev != NULL)
    {
        temp->prev->next = temp->next;
    }else{
        head = temp->next;
    }
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }else{
        tail = temp->prev;
    }
    delete temp;
}

//? main function
int main()
{
   Node *head = new Node(10);
   Node* a = new Node(20);
   Node* tail = new Node(30);

    
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    

    
   delete_at_any(head, tail, 2);
   
    print_forward(head);
    print_backward(tail);

    return 0;
}