// Take this array: {64, 25, 12, 22, 11, 30}.
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
        
// Transversal After Each Pass
        cout<<"\nPass "<<i+1<<" : ";
        for(int k=0 ; k<length ; k++)
        {
            cout<<arr[k]<<" ";
        }
        
    }
} 

int main(){

    
    int arr[6] = {64, 25, 12, 22, 11, 30};
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