#include <bits/stdc++.h>
using namespace std;

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

void insert_in_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void insert_in_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void delete_in_index(Node *&head, Node *&tail, int index)
{
    if (head == NULL)
    {
        return;
    }
    if (index < 0)
    {
        return;
    }

    if (index == 0)
    {
        Node *temp = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete temp;
        return;
    }

    Node *temp = head;
    for (int i = 0; temp != NULL && i < index - 1; ++i)
    {
        temp = temp->next;
    }
   
    

    if (temp == NULL || temp->next == NULL)
        return; 
    Node *node_to_delete = temp->next;
    temp->next = temp->next->next;
    if (temp->next == NULL)
        tail = temp;
    delete node_to_delete;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    int Q;
    cin >> Q;

    Node *head = NULL;
    Node *tail = NULL;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;
        if (X == 0)
        {
            insert_in_head(head, tail, V);
        }
        else if (X == 1)
        {
            insert_in_tail(head, tail, V);
        }
        else if (X == 2)
        {
            delete_in_index(head, tail, V);
        }
        print(head);
    }

    return 0;
}
