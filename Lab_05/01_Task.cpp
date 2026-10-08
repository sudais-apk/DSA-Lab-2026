// Task 1- Push Operation (Array):
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

int main(){
push(213);
push(313);
push(212);
push(786);
push(70);
push(5);

return 0;
}