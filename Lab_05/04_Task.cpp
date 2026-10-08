// Task 4 – PUSH Operation (Linked list):
// Objective: To add an element 

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

int main(){

push(32);
push(53);
push(87);

return 0;
}