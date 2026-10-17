// Task 1 – Implement the ENQUEUE operation of a queue using Array in C++.
// Write two separate programs.
// Push at least three values in each program.
// Check isEmpty before  enqueue
#include <iostream>
#define SIZE 30
using namespace std;

class Queue {
    int arr[SIZE];
    int rear;

public:
    Queue() {
        rear = -1;
    }

    bool isEmpty() {
        return rear == -1;
    }

    void enqueue(int value) {
        if (isEmpty()) {
            rear = 0;
            arr[rear] = value;
        } else {
            rear++;
            arr[rear] = value;
        }

        cout << value << " inserted into queue.\n";
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Queue elements: ";
        for (int i = 0; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    return 0;
}