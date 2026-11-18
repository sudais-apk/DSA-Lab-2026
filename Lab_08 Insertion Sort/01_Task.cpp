// Task 1 :
// Create an array of 6 integers: {5, 2, 4, 6, 1, 3}
// Sort it using the Insertion Sort algorithm.
// Print the array after each pass.

#include <iostream>
using namespace std;

int main() {

// Creating Array 
int n = 6;
int arr[6] = {5, 2, 4, 6, 1, 3};

for(int i = 1; i < n; i++)
    {
    int key = arr[i];
    int j = i - 1;
    while(j >= 0 && arr[j] > key)
            {
            arr[j+1] = arr[j];
            j--;
            }
    arr[j+1] = key;

    // Display array after each pass
    cout << "Pass " << i << ": ";
    for(int k = 0; k < n; k++)
    cout << arr[k] << " ";

    cout << endl;
    }
cout << "Sorted Array: ";
for(int i = 0; i < n; i++)
cout << arr[i] << " ";

}
