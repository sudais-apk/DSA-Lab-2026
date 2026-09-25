#include <iostream>
using namespace std;


struct Node
{
    int data;
    Node* next;
};

// Search function
void search(Node* head, int value)
{
    Node* temp = head;
    int position = 1;

    while (temp != NULL)
    {
        if (temp->data == value)
        {
            cout << "Found at position " << position << endl;
            return;
        }

        temp = temp->next;
        position++;
    }

    cout << "Element not found" << endl;
}

// Display List :
void transveres(Node* next)
{

    Node* temp = next;

    while(temp != NULL)
    {
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }

}


int main()
{
    // Create List : 
    Node* head = new Node{2, NULL};

    head->next = new Node{4, NULL};
    head->next->next = new Node{6, NULL};
    head->next->next->next = new Node{8, NULL};
    head->next->next->next->next = new Node{10, NULL};

    // Display List
    cout<<"Initial List : "; transveres(head); cout<<endl;

    // Search for 6
    search(head, 6);

    // Search for 7
    search(head, 7);

    return 0;
}