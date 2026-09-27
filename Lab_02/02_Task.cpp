// Task 2 – Insertion Practice

#include<iostream>

using namespace std;

int main(){
//  Create an array {10, 20, 30, 40, 50}.
int arr[10] = {10, 20, 30, 40, 50};

cout<<"Initial Array : ";

for(int i = 0 ; i<5 ; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;

//  Insert 25 at index 2.

int n = 5 , val = 25 , loc = 2;

for(int i = n ; i>loc ; i--)
{
    arr[i] = arr[i-1]; 
}

arr[loc] = val;
n = n+1;

cout<<"Array after adding 25 at 2 Index : ";

for(int i = 0 ; i<n ; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;

//  Insert 60 at the end.

arr[n] = 60;

//  Print the updated array.
cout<<"Array after adding 60 at END : ";

for(int i = 0 ; i<n ; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;


return 0;
}