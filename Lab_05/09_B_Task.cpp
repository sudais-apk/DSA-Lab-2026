// Task 9 -B– Implement PEEK using Linked List.
// Write separate programs for Array and Linked List.
// Push some values, then use PEEK to display the top element.
// Check isFull (for Array only).
// Print output and attach a screenshot.
#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next; 
};

Node* top = nullptr;

void peek()
{
    if(top == NULL)
    {   
        cout<<"StackUnderflow...!"<<endl; 
    }
    else
    {
        cout<<"Element at Top is : "<<top -> data;
    }
}

void push(int val)
{
    Node* new_node = new Node{val,top};
    top = new_node;
    cout<<val<<" Pushed into Stack"<<endl;
}

int main(){

push(32);
push(53);
push(678);
peek();
return 0;
}