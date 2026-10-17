// Task 5  – DEQUEUE Operation (Linked list):
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

void dequeue() {
        if (front == NULL)
        {
            cout << "Queue Underflow";
            return;
        }

        Node* temp = front;
        front = front->next;

        if (front == NULL)
            rear = NULL;

        cout << temp->data << " deleted from front.\n";
        delete temp; 
    }


void display() {
    if (front == NULL)
    {
        cout << "Nothing to Show.\n";
        return;
    }

        Node* temp = front;
        cout << "Queue elements: ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
Queue q1;
q1.enqueue(1009);
q1.enqueue(2009);
q1.enqueue(3009); 
q1.enqueue(4009);
q1.enqueue(5009);
q1.dequeue();
q1.display();
return 0;
}
