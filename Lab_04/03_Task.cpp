// Task 3 – Deletion in DLL
// Objective: To delete an element at a specific index.

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
};

// Function to delete node at a specific position
void delete_at_pos(Node* &head, int loc) {
    if (head == NULL || loc <= 0) return;

    Node* temp = head;
    int i = 1;

    // move to the node at position
    while (temp != NULL && i < loc) {
        temp = temp->next;
        i++;
    }

    // if position not found
    if (temp == NULL) return;

    // if deleting head
    if (temp == head) {
        head = temp->next;
        if (head != NULL) head->prev = NULL;
    }
    else {
        if (temp->prev != NULL) temp->prev->next = temp->next;
        if (temp->next != NULL) temp->next->prev = temp->prev;
    }

    delete temp;
}

void trans(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<< temp -> data<<" ";
        temp = temp -> next;
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

    cout<<"Inital Transversal : ";
    trans(head);

    delete_at_pos(head,3);
    cout<<"\nTransversal after Deleting From 3rd position : ";
    trans(head);   
}