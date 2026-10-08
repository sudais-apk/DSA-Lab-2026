// Task 6 – PEEK operation (linked list) : 
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
peek();
return 0;
}