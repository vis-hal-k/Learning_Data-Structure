#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next; // self reference
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void printlist(node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout<<"\n";
}
void insertathead(node *head, int val)
{
    node *n = new node(val);
    
    n->next = head;
    head = n;

}
int main()
{

    node *head = NULL;
    node *Second = NULL;
    node *third = NULL;

    head = new node(8);
    Second = new node(2);
    third = new node(3);
    head->next = Second;
    Second->next = third;
    third->next = NULL;
    printlist(head);
    insertathead(head, 9);
    printlist(head);

    return 0;
}
