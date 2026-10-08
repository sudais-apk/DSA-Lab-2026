// Task 8 -B– Implement POP using Linked List.
// Write two separate programs.
// Push 20, 30, 60 in each program.
// Check isEmpty after pop
// Print the output and attach a screenshot of the result.
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

void pop()
{
    cout<<top->data<<" 'Popped' from Stack."<<endl;
    top = top -> next;   
}

int main(){

push(20);
push(30);
push(60);
pop();
isEmpty();
pop();
isEmpty();
pop();
isEmpty();

return 0;
}