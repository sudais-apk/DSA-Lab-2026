// Task 5– Write a C++ program to implement Quick Sort in which the first element is chosen as the pivot.
// Input an array of integers.
// Select the first element as the pivot.
// Rearrange the array so elements smaller than the pivot go to the left, and greater ones go to the right.
// Apply recursion to both sides and print the sorted array.

#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];

    int i = low + 1;
    int j = high;

    while (i <= j) {

        while (i <= high && arr[i] <= pivot)
            i++;

        while (arr[j] > pivot)
            j--;

        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);

    return j;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cout<<"\nEnter Value for "<<i<<" Index:";
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
