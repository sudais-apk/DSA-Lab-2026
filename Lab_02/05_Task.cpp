// Task 5 – Update (Challenge)



//  Update the element at that index with the new value.
//  Print the updated array.

#include<iostream>
using namespace std;

int main(){
//  Create an array of 5 integers.
int arr[10] = {10, 20, 30, 40, 50};
int n = 5;
//  Display the array.
cout<<"Initial Array : ";

for(int i = 0 ; i<5 ; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
//  Ask the user to enter an index and a new value.
int val , loc ;
cout<<"Enter the Index You Want to Update : "; cin >> loc;
cout<<"Enter the Value for "<<loc<<" Index : "; cin >> val;


for(int i = n ; i>loc ; i--)
{
    arr[i] = arr[i-1]; 
}

arr[loc] = val;
n = n+1;

cout<<"updated array : ";

for(int i = 0 ; i<n ; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;




return 0;
}