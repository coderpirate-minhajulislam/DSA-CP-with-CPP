#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
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

int search(Node* head, int x) {
    Node* temp = head;
    int idx = 0;
    while (temp != NULL) {
        if (temp->val == x) {
            return idx;
        }
        temp = temp->next;
        idx++;
    }
    return -1; 
}



int main() {
    int T;
    cin >> T;
    while (T--) {
        Node* head = NULL;
        Node* tail = NULL;

        int v;
        while (1) {
            cin >> v;
            if (v == -1) {
                break;
            }
            insert_in_tail(head, tail, v);
        }

        int x;
        cin >> x;
        cout << search(head, x) << endl;

        
    }

    return 0;
}
