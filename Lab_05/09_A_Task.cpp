// Task 9 -A– Implement PEEK using Array.
// Write separate programs for Array and Linked List.
// Push some values, then use PEEK to display the top element.
// Check isFull (for Array only).
// Print output and attach a screenshot.
#include<iostream>
#define MAX 5 // replaces all 'MAX' in program with 5 before compiling.
using namespace std;

int stack[MAX],top = -1;
void push(int val)
{
    top++;
    stack[top] = val;
    cout<<val<<" Pushed to Stack."<<endl;
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

void peek()
{
   cout<<"Top Element is : "<<stack[top]<<endl;
}

int main(){
push(213);
push(313);
push(786);
isFull();
peek();

return 0;
}