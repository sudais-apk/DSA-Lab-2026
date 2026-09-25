#include<iostream>

using namespace std;

// Linked list Node :

struct Node
{
    int data;
    Node* next;
};

// Function to display all nodes from Linked List :

void transveres(Node* next)
{

    Node* temp = next;

    while(temp != NULL)
    {
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }

}

// Insert in begaining :

void add_at_begaining(Node*& head , int value)
{
    Node* newNode = new Node{value, head};
    newNode -> next = head;
    head = newNode; 
}

// Insert at End :

void add_at_end(Node*& head , int value)
{
Node* newNode = new Node{value, NULL}; 
if (head == NULL) {
head = newNode;
return;
}
Node* temp = head; // traverse to last node
while (temp -> next != NULL) {
temp = temp -> next;
}
temp -> next = newNode;
}

int main(){

Node* head = new Node{10,NULL};
head -> next = new Node{20,NULL};
head -> next -> next  = new Node{30,NULL};
 
cout<<"Initial List : "; transveres(head);

add_at_begaining(head,0);
cout<<endl;
cout<<"After Adding '0' in Begaining : "; transveres(head);

add_at_end(head,40);
cout<<endl;
cout<<"After Adding '40' in End : "; transveres(head);

return 0;
}
