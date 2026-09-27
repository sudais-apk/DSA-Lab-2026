// Task 4 – Linear Search

#include<iostream>
using namespace std;

int main(){
//  Create an array {2, 4, 6, 8, 10, 12}.
int arr[10] = {2, 4, 6, 8, 10, 12};
cout<<"Initial Array : ";

for(int i = 0 ; i<5 ; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;

// Search for 8 and display its index.
int key = 8;
bool Found  = false;

for(int i = 0 ; i<5 ; i++)
{
    if(arr[i] == key)
    {
        cout<<key<<" Found at "<<i <<" Index."<<endl;
        Found = true;
    }
}


// Search for 15 (which is not in the array) and display a message: 'Element not found'.

key = 15;
Found = false;
for(int i = 0 ; i<5 ; i++)
{
    if(arr[i] == key)
    {
        cout<<key<<" Found at "<<i <<" Index."<<endl;
        Found = true;
    }
}

if(Found == false)
{
    cout<<key<<" Element NOT Found.";
}

return 0;
}