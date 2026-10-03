// Task 4 – Doubly Linked List Traversal 
// Create a doubly linked list with elements {5, 10, 15, 20}.
// Print all elements using forward traversal.
// Print using backward traversal too.
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
//Creating Nodes:
    Node* first = new Node{5,NULL,NULL};
    Node* second = new Node{10,NULL,NULL};
    Node* third = new Node{15,NULL,NULL};
    Node* last = new Node{20,NULL,NULL};
//Connecting Nodes:
    first -> next = second;
    second -> prev = first;
    second -> next = third;
    third -> prev = second;
    third -> next = last;
    last -> prev = third;
// Head and Tail:
    Node* head = first;
    Node* tail = third;
// Calling Transversal Functions:
    transFor(head);
    transBack(tail);

return 0;
}