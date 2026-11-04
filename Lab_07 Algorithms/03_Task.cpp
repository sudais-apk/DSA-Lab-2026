// Task 3 – Write a C++ program to perform Binary Search on a sorted array using the Divide and Conquer method.
// Create a sorted array of integers.
// Ask the user to enter an element to search for.
// Use Binary Search to divide the array into halves until the element is found (or not found).
// Display the position of the element if it exists, otherwise show “Element not found”.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int key;

    cout<<"Initail Array : ";
    
    for(int i =0; i<n-1 ;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout << "\nEnter Element to Search: ";
    cin >> key;

    int low = 0, high = n - 1, mid, position =-1;
    
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            position = mid;
            break;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (position != -1) {
        cout << "Element found at position "
             << position + 1;
    }
    else {
        cout << "Element not found";
    }

    return 0;
}
