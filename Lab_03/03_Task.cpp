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

// Function to delete node at beginning
void delete_at_beginning(Node*& head) {
if (head == NULL) {
cout<<"Empty List ... !"<< endl;

return;
}

Node* temp = head; 
head = head -> next; 
delete temp; 
}

// Function to delete node at the end
void delete_at_end(Node*& head) {
if (head == NULL) {
cout<<"Empty List ... !"<< endl; 

return;
}

if (head -> next == NULL) {
delete head;
head = NULL;
return;
}

Node* temp = head;
while (temp -> next -> next != NULL) {
temp = temp -> next;
}

delete temp -> next;
temp -> next = NULL;
}

int main(){

Node* head = new Node{100,NULL};
head -> next = new Node{200,NULL};
head -> next -> next  = new Node{300,NULL};
head -> next -> next -> next = new Node{400,NULL};
 
cout<<"Initial List : "; transveres(head);

delete_at_beginning(head);

cout<<"\nAfter Delete from Begaining : "; transveres(head);

delete_at_end(head);

cout<<"\nAfter Delete from End : "; transveres(head);

return 0;
}