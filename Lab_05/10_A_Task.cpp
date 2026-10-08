// Task 10 -A– Array.
// Use menu: 1=Push, 2=Pop, 3=Peek, 4=Exit.
// Check isEmpty before Pop/Peek.
// Check isFull before Push (Array only).
// Test with few values and show output.
#include<iostream>
#define MAX 5
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

int stack[MAX],top = -1;

void isEmpty()
{
    if(top == -1)
    {
        cout << "Stack is Empty." << endl;
    }
    else
    {
        cout << "Stack is not Empty." << endl;
    }
}

void isFull()
{
    if(top == MAX - 1)
    {
        cout << "Stack is Full."<<endl;
    }
    else
    {
        cout << "Stack is not Full."<<endl;
    }
}

void push(int val)
{
    top++;
    stack[top] = val;
    cout<<val<<" Pushed to Stack."<<endl;   
}

void pop()
{
    int val = stack[top];
    top--;
    cout<<val<<" Popped from Stack."<<endl;
}

void peek()
{
    cout<<"Top Element is : "<<stack[top]<<endl;
}

int main()
{   while(true)
    {
        
    int choice = menu();
    if(choice == 1)
    {   int val;
        isFull();
        cout<<"Enter Value to push : ";
        cin>>val;
        push(val);
    } else if(choice == 2)
    {
        isEmpty();
        pop();
    } else if(choice == 3)
    {
        isEmpty();
        peek();
    } else if(choice == 4)
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