// Task 8 -A– Implement POP using Array.
// Write two separate programs.
// Push 20, 30, 60 in each program.
// Check isEmpty after pop
// Print the output and attach a screenshot of the result.
#include<iostream>
#define MAX 5 // replaces all 'MAX' in program with 5 before compiling.
using namespace std;

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
        cout<<val<<" 'Popped' from Stack."<<endl;
    }
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