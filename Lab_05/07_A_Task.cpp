// Task 07 - A – Implement the PUSH operation of a stack using Array.
// Write two separate programs.
// Push at least three values in each program.
// Check isEmpty before  push
// Print the output and attach a screenshot of the result
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
    top++;
    stack[top] = val;
    cout<<val<<" Pushed to Stack."<<endl;    
}

int main(){
isEmpty();
push(21);
isEmpty();
push(31);
isEmpty();
push(41);

return 0;
}