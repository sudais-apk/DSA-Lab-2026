#include<iostream>

using namespace std;

struct Node
{
    char data;
    Node* next;
};

// Function to Count Nodes : 
void count_nodes(Node* head)
{
    Node* temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    cout << "\nTotal No. of Nodes = " << count << endl;
}

void transveres(Node* next)
{

    Node* temp = next;

    while(temp != NULL)
    {
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }

}

int main(){

    // Create List: 
    Node* head = new Node{'S', NULL};
    head->next = new Node{'U', NULL};
    head->next->next = new Node{'A', NULL};
    head->next->next->next = new Node{'I', NULL};
    head->next->next->next->next = new Node{'S', NULL};

    // List : 
    cout<<"List : "; transveres(head);

    // Count the nodes
    count_nodes(head);



return 0;
}