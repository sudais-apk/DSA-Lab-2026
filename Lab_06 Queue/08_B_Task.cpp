// Task 2 – Implement DEQUEUE using L.List.
// Write two separate programs.
// DEQUEUE 20, 30, 60 in each program.
// Check isEmpty after dequeue
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
        front = rear = nullptr;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }

        Node* temp = front;
        cout << "Dequeued: " << temp->data << endl;

        front = front->next;
        delete temp;

        if (front == nullptr) {
            rear = nullptr;
        }

        if (isEmpty()) {
            cout << "Queue is empty after dequeue.\n";
        } else {
            cout << "Queue is not empty after dequeue.\n";
        }
    }

};

int main() {
    Queue q;

    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(60);

    q.dequeue();
    q.dequeue();
    q.dequeue();

    return 0;
}