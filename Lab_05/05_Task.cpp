// Task 5  – POP Operation (Linked list):
#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next ;
};

Node* top = nullptr;

void push(int val)
{
    Node* new_node = new Node{val,top};
    top = new_node;
    cout<<val<<" Pushed into Stack"<<endl;
}

void pop()
{
    if(top == NULL)
    {   
        //using more memory than alloted.
        cout<<"StackUnderflow...!"<<endl; 
    }
    else
    {
        cout<<top->data<<" Popped from Stack."<<endl;
        top = top -> next;
    }
}

int main(){

push(32);
push(53);
pop();
pop();
pop();

return 0;
}