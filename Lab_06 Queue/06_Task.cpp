// Task 6 – PEEK operation (linked list)

// Task 4 – ENQUEUE Operation (Linked list):
// Objective: To insert an element
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = NULL;
        rear = NULL;
    }

void enqueue(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL)
    {
        front = rear = newNode;
        cout << value << " inserted into queue.\n";
        return;
    }

        rear->next = newNode;
        rear = newNode;
        cout << value << " inserted into queue.\n";
    }
void peek() {
    if (front == NULL)
    {
        cout << "Queue is empty.\n";
        return;
    }
        cout << "Front element is: " << front->data << endl;
    }



};

int main() {
    Queue q1;
    q1.enqueue(1009);
    q1.enqueue(2009);
    q1.enqueue(3009);
    q1.peek();
    
    return 0;
}
