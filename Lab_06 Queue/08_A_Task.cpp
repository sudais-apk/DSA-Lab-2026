// Task 2 – Implement DEQUEUE using Array.
// Write two separate programs.
// DEQUEUE 20, 30, 60 in each program.
// Check isEmpty after dequeue
#include <iostream>
using namespace std;

class Queue {
    int arr[100];
    int front, rear;

public:
    Queue() {
        front = 0;
        rear = -1;
    }

    bool isEmpty() {
        return front > rear;
    }

    void enqueue(int value) {
        if (isEmpty()) {
            front = 0;
            rear = -1;
        }

        arr[++rear] = value;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty.";
            return;
        }

        cout << "Dequeued: " << arr[front] << endl;
        front++;

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