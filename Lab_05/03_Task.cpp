// Task 3 – Peek in stack(array)
// Objective: To view the top element of the stack without removing it. 

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

void peek()
{
    if(top == MAX-1)
    {   
        //using more memory than alloted.
        cout<<"StackOverflow...!"<<endl; 
    }
    else
    {
        cout<<"Top Element is : "<<stack[top]<<endl;
    }
}

int main(){
push(213);
push(313);
push(786);
peek();

return 0;
}