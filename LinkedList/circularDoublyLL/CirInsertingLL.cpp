#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};
void createcircular(node *&p, int A[], int n)
{
    p = new node(A[0]);
    p->next = p;
    node *last = p;
    node *t;
    for (int i = 1; i < n; i++)
    {
        t = new node(A[i]);
        t->next = last->next;
        last->next = t;
        last = t;
    }
}
void display(node *p)
{
    node *temp = p;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != temp);
    cout << "\n";
}
void insert(node *&p, int index, int x, int n)
{
    node *temp;
    temp = p;
    if (index < 0 || index > n)
    {
        return;
    }
    if (index == 0)
    { // At beginning
        node *t = new node(x);
        if (p == NULL)
        {
            p = t;
            p->next = p; 
        }
        else
        {
            while (temp->next != p)
            {
                temp = temp->next;
            }
            temp->next = t;
            t->next = p;
            p = t;
        }
    }
    else
    {
        int i = 0;
        node *t = new node(x);
        node *temp;
        temp = p;
        while (i < index - 1)
        {
            temp = temp->next;
            i++;
        }
        t->next = temp->next;
        temp->next = t;
    }
}
void cridelete(node *p)
{
}

int main()
{
    node *head;
    int A[] = {3, 4, 5, 6, 7};
    createcircular(head, A, 5);
    insert(head, 2, 9, 5);
    display(head);
    return 0;
}