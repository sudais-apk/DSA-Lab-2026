// Task 2- POP Operation (Array):
// Objective: To remove an element
#include<iostream>
#define MAX 5 // replaces all 'MAX' in program with 5 before compiling.
using namespace std;

int stack[MAX],top = -1;

void push(int val)
{
    if(top == MAX-1)
    {   
        //using more memory than alloted.
        cout<<"StackOverflow...!"<<endl; 
    }
    else
    {
        top++;
        stack[top] = val;
        cout<<val<<" Pushed to Stack."<<endl;
    }
}

void pop()
{
    if(top == -1)
    {   
        //Stack is Empty.
        cout<<"StackUnderflow...!"<<endl; 
    }
    else
    {
        int val = stack[top];
        top--;
        cout<<val<<" Popped from Stack."<<endl;
    }
}

int main(){
push(213);
push(313);
push(212);
pop();
pop();
pop();
pop();

return 0;
}