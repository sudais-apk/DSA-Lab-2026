// Task 1- Traverse a doubly linked list
// Objective: To create a doubly linked list and traverse it both in forward and
// backward using pointers.
#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
};

void transFor(Node* head)
{
    Node* temp = head;
    cout<<"Forward Transversal : ";

    while(temp != NULL)
    {
        cout<< temp -> data<<" ";
        temp = temp -> next;
    }
}

void transBack(Node* tail)
{
    Node* temp = tail;
    cout<<"\nBackward Transversal : ";

    while(temp != NULL)
    {
        cout<< temp -> data<<" ";
        temp = temp -> prev;
    }
}


int main(){

    Node* first = new Node{10,NULL,NULL};
    Node* second = new Node{20,NULL,NULL};
    Node* third = new Node{30,NULL,NULL};
    

    first -> next = second;
    second -> prev = first;
    second -> next = third;
    third -> prev = second;

    Node* head = first;
    Node* tail = third;

    transFor(head);
    transBack(tail);

return 0;
}