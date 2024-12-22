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

void insert_in_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void remove_duplicate(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        Node *temp2 = temp;
        while (temp2->next != NULL)
        {
            if (temp2->next->val == temp->val)
            {
                Node *temp = temp2->next;
                temp2->next = temp2->next->next;
                delete temp;
            }
            else
            {
                temp2 = temp2->next;
            }
        }
        temp = temp->next;
    }
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
    Node *head = NULL;
    Node *tail = NULL;
    int V;
    while (1)
    {
        cin >> V;
        if (V == -1)
        {
            break;
        }
        insert_in_tail(head, tail, V);
    }
    remove_duplicate(head);
    print(head);

    return 0;
}