// Task 3 – Peek in stack(array)
// Objective: To view the top element of the stack without removing it. 
#include<iostream>
#define SIZE 7
using namespace std;

class Queue
{
    int front,back,queue[SIZE];

public:
    Queue()
    {
        front = -1;
        back = -1;
    }
    
bool is_full()
    {
        if(back == SIZE - 1)
        {
            return true;
        }
        else
            return false;
    }

bool is_empty()
    {
        if(front == -1 || front>back)
        {
            return true;
        }
        else
            return false;
    }

void enqueue(int val)
    {
        if(is_full())
        {
            cout<<"Queue is Full...!";
            return;
        }
        else
        {
            if(front == -1)
            {
                front = 0;
            }
            back++;
            queue[back] = val;
            cout<<val<<" inserted at "<<back<<" position."<<endl;
            return;
        }
    }

    void peek()
{
    if(is_empty())
    {
        cout<<"Nothing to Peek...!";
        return;
    }
    else
    cout<<"Element at front is : "<< queue[front];
}


};

int main(){
Queue q1;
q1.enqueue(100);
q1.enqueue(200);
q1.enqueue(300);
q1.peek();

return 0;
}