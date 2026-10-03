// Task 2 – Insertion in DLL
// Objective: To insert a node at a specific index.
#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
};

void insert_at_loc(Node* &head,int val, int loc)
{
 
    Node* new_node = new Node{val,NULL,NULL};

    if(loc == 1)
    {
        new_node -> next = head;
        if(head != NULL)
        {
            head -> prev = new_node;
        }

        head = new_node;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < loc - 1 && temp != NULL; i++)
    {
        temp = temp -> next;
    }
    
    if (temp == NULL)
    {
        cout<<"Position out of Range : ";
        return;
    }

    new_node -> next = temp -> next;
    new_node -> prev = temp;
if (temp -> next != NULL) 
{
temp -> next -> prev = new_node;
}
temp -> next = new_node;

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

    insert_at_loc(head,15,2);
    cout<<"\nTransversal after Inserting 15 at 2nd Position : ";
    trans(head);


return 0;
}