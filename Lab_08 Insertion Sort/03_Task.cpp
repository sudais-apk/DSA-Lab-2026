// Task 3 – Insertion Sort for Strings : 
// Create an array of strings { "pear", "apple", "orange", "banana" }.
// Modify the insertion sort code to sort strings alphabetically.

#include<iostream>
#include<string>
using namespace std;
int main()

{
    string arr[4] = {"pear", "apple", "orange", "banana"};
    
    cout<<"Initial Array : ";
    for(int i=0 ; i<4 ; i++)
    {
        cout<<arr[i]<<" ";
    }

     // Insertion Sort for Strings
    for (int i=1 ;  i<4 ; i++) 
    {
        string key = arr[i];
        int j = i - 1;

    // Compare strings alphabetically  :
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }  
    
    // printing array :
    cout<<"\nSorted Array : ";
    for(int i=0 ; i<4 ; i++)
    {
        cout<<arr[i]<<" ";
    }
}