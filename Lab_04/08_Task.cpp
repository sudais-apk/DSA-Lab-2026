#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
};

int main() {
    Node* first = new Node{11, NULL, NULL};
    Node* second = new Node{25, NULL, NULL};
    Node* third = new Node{7, NULL, NULL};
    Node* fourth = new Node{42, NULL, NULL};
    Node* last = new Node{19, NULL, NULL};

    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;
    fourth->next = last;
    last->prev = fourth;
    
    Node* head = first;
    int max = head->data;
    Node* temp = head;

    cout << "Initial Transversal : ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        if (temp->data > max)
        {
            max = temp->data;
        }
        temp = temp->next;
    }
    
    cout << "\nMaximum of all is : " << max << endl;

    return 0;
}