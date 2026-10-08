// Task 07 - B – Implement the PUSH operation of a stack using Linked List.
// Write two separate programs.
// Push at least three values in each program.
// Check isEmpty before  push
// Print the output and attach a screenshot of the result
#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next ;
};

Node* top = nullptr;

void isEmpty()
{
    if(top == nullptr)
    {
        cout << "Stack is Empty." << endl;
    }
    else
    {
        cout << "Stack is not Empty." << endl;
    }
}

void push(int val)
{
    Node* new_node = new Node{val,top};
    top = new_node;
    cout<<val<<" Pushed into Stack"<<endl;
}

int main(){
isEmpty();
push(32);
isEmpty();
push(53);
isEmpty();
push(87);

return 0;
}