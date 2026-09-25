#include<iostream>

using namespace std;

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

int main(){

Node* head = new Node{5,NULL};
head -> next = new Node{10,NULL};
head -> next -> next  = new Node{15,NULL};
head -> next -> next -> next = new Node{20,NULL};

cout<<"List : ";
transveres(head);

return 0;
}


// Another approch :
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// int main() {

//     // Create three nodes
//     Node* first = new Node;
//     Node* second = new Node;
//     Node* third = new Node;

//     // Store data
//     first->data = 10;
//     second->data = 20;
//     third->data = 30;

//     // Connect nodes
//     first->next = second;
//     second->next = third;
//     third->next = nullptr;

//     // Start from first node
//     Node* temp = first;

//     // Traverse the linked list
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }