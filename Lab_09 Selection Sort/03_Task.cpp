// Take this array: {4, 2, 6, 1, 3}.
// Sort it using Selection Sort in ascending order.
// Print the array after sorting.


#include<iostream>
using namespace std;

void selectionSort(int arr[] ,int length)
{
    for(int i=0 ; i<(length - 1) ; i++)
    {
        int mini = i;
        for(int j = i+1 ; j < length ; j++) 
        {
            if(arr[mini] > arr[j]) // For Assending Order
            {
                mini = j;
            }
        }
        swap(arr[i],arr[mini]);        
    }
} 

int main(){

    
    int arr[5] = {4, 2, 6, 1, 3};
    int length = sizeof(arr)/sizeof(int);

// Iniital Transversal
    cout<<"Innitial Array : "<<endl;
        for(int i=0 ; i<length ; i++)
    {
        cout<<arr[i]<<" ";
    }

// Calling selection sort function 
    selectionSort(arr,length);

// Transversal After Sorting 
    cout<<"\nSorted Array : "<<endl;
    for(int i=0 ; i<length ; i++)
    {
        cout<<arr[i]<<" ";
    }


return 0;
}