// Task 3 – Deletion Practice

#include<iostream>
using namespace std;

int main(){
//  Create an array {5, 10, 15, 20, 25}.

int arr[10] = {5, 10, 15, 20, 25};
int n = 5;

cout<<"Initial Array : ";

for(int i = 0 ; i<5 ; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;

// Delete the element at index 1.

for(int i = 1 ; i<n ; i++ )
{
    arr[i] = arr[i+1];
}

n = n-1;

cout<<"After Deletion from Index 1 : ";

for(int i = 0 ; i<n ; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;

//  Delete the last element.
n = n-1;

cout<<"After Deletion from END : ";

for(int i = 0 ; i<n ; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;


return 0;
}