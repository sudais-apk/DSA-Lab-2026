// Task 10 -B– LL.
// Use menu: 1=Push, 2=Pop, 3=Peek, 4=Exit.
// Check isEmpty before Pop/Peek.
// Test with few values and show output.
#include<iostream>
using namespace std;

int menu()
{
    int choice;
    cout<<"Enter Your Choice : "<<endl;
    cout<<"1. Push"<<endl;
    cout<<"2. Pop"<<endl;
    cout<<"3. peek"<<endl;
    cout<<"4. Exit"<<endl;  
    cin>>choice;
return choice;  
}

struct Node
{
    int data;
    Node* next; 
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

void peek()
{
    cout<<"Element at Top is : "<<top -> data<<endl;
}

int main()
{
    while(true)
    {
        int choice = menu();

        if(choice == 1)
    {   int val;
        cout<<"Enter Value to push : ";
        cin>>val;
        push(val);
    } else if(choice == 2)
    {
        isEmpty();
        pop();
    } else if(choice == 2)
    {
        isEmpty();
        peek();
    } else if(choice == 2)
    {
       return 0;
    }
    else
    {
        cout<<"Invalid Input...!";
        return 0;
    }
}
}