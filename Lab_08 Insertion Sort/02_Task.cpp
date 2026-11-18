// Task 2 -User Input Practice
// Ask the user to enter 8 numbers.
// Sort them using Insertion Sort.
// Print both unsorted and sorted arrays

#include<iostream>
using namespace std;
int main()
{

    int size = 7;
    int arr[size];
    for(int i=0 ; i<=size ; i++)
    {
        cout<<"Enter Value for "<<i+1<<" Position : ";
        cin>>arr[i];
    }

    cout<<"Unsorted Array : "<<endl;
    for(int i=0 ; i<=size ; i++)
    {
        cout<<arr[i]<<" ";
    }

    for(int i = 1 ; i<=size ; i++)
    {
    int key = arr[i];
    int j = i - 1;
    while(j >= 0 && arr[j] > key)
            {
            arr[j+1] = arr[j];
            j--;
            }
    arr[j+1] = key;
    }

    cout<<"\nSorted Array : "<<endl;
    for(int i=0 ; i<=size ; i++)
    {
        cout<<arr[i]<<" ";
    }


}