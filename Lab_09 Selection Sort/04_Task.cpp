// Take this array: {8, 5, 3, 9, 1}.
// Sort it using Selection Sort in descending order.
// Print the sorted array.

#include<iostream>
using namespace std;

void selectionSort(int arr[] ,int length)
{
    for(int i=0 ; i<(length - 1) ; i++)
    {
        int mini = i;
        for(int j = i+1 ; j < length ; j++) 
        {
            if(arr[mini] < arr[j]) // For Desending Order
            {
                mini = j;
            }
        }
        swap(arr[i],arr[mini]);        
    }
} 

int main(){

    
    int arr[5] = {8, 5, 3, 9, 1};
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