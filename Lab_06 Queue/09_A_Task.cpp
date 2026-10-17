// Task 3 -Array.
// Use menu: 1=Enqueue, 2=Dequeue, 3=Peek, 4=Exit.
// Check isEmpty before Dequeue/Peek.
// Check isFull before Enqueue (Array only).
// Test with few values and show output.

#include <iostream>
using namespace std;

class Queue {
private:
    static const int SIZE = 5;
    int arr[SIZE];
    int front, rear, count;

public:
    Queue() {
        front = 0;
        rear = -1;
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == SIZE;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full!\n";
            return;
        }

        rear = (rear + 1) % SIZE;
        arr[rear] = value;
        count++;

        cout << value << " inserted into queue.\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty! Cannot dequeue.\n";
            return;
        }

        cout << "Dequeued: " << arr[front] << '\n';
        front = (front + 1) % SIZE;
        count--;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Queue is empty! Cannot peek.\n";
            return;
        }

        cout << "Front element: " << arr[front] << '\n';
    }
};

int main() {
    Queue q;
    int choice, value;

    do {
        cout << "\n--- ARRAY QUEUE MENU ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            q.enqueue(value);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.peek();
            break;

        case 4:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
