// Task 1 – Array Traversal: 
//  Write a program to create an array of 10 integers.
//  Print each element along with its index.
//  Modify your program also to print the sum and average of all elements.

#include<iostream>

using namespace std;

int main(){

int n = 10;
int arr[n] = {2,4,6,8,10,12,14,16,18,20};
int sum = 0;

for(int i = 0 ; i<n ; i++)
{
    cout<<arr[i]<<" is at "<< i << " Index."<<endl;
    sum = sum+arr[i];
}

cout<<"Sum is "<<sum<<" and Average is "<<sum/n;


return 0;
}