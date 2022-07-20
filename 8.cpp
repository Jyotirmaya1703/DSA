#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    ~Node() {
        int value = this -> data;
        if (this -> next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"memory is freed with data "<< value<<endl;
        
    }
};

void InsertAtPostion(Node* &head, int position, int d){
    Node* temp = head;
    int cnt = 1;
    while (cnt < position-1)
    {
        temp = temp->next;
        cnt++;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
    
}

void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void Print(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

void deletioNode(int position, Node* &head){
    if (position == 1)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while (cnt<position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr->next = NULL;
        delete curr;
        
    }
    
    
}

void InstertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp = temp;

}

int main(int argc, char const *argv[])
{
    Node* node1 = new Node(10);
    Node* tail = node1;
    cout<< node1->data<<endl;
    cout<< node1->next<<endl;

    Node* head = node1;
    Print(head);
    InsertAtHead(head, 10);
    Print(head);
    InsertAtHead(head, 69);
    Print(head);
    InstertAtTail(tail, 69);
    Print(head);
    InsertAtPostion(head, 3, 69);
    Print(head);

    delete(4, head);

    return 0;
}
