#include <iostream>
using namespace std;
class node
{
public:
    node *pre;
    int data;
    node *next;
    node(int val)
    {
        this->pre = NULL;
        this->data = val;
        this->next = NULL;
    }
};
void create(node *&p, int a[], int n)
{
    p = new node(a[0]);
    node *temp = p;
    p->next = NULL;
    p->pre = NULL;
    for (int i = 1; i < n; i++)
    {
        node *t = new node(a[i]);
        p->next = t;
        t->pre = p;
        p = p->next;
        // p=t ;
        t->next = NULL;
    }
    p = temp;
}
void display(node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
void insert(node *&p, int index, int x)
{
    node *temp = p;
    if (index < 0 || index > 5)
    {
        return;
    }
    if (index == 0){
        node *t = new node(x);
        t->pre = NULL;
        t->next = p;
        p->pre = t;
        p = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
            temp = temp->next;
        node *t = new node(x);
        t->next = temp->next;
        t->pre = temp;

        /*------>*/
        if (temp->next)
        {
            temp->next->pre = t; // best aproch
        }
        temp->next = t;
    }
    cout << "\n";
}
int main()
{
    int A[] = {4, 5, 6, 4, 56};
    node *first;
    create(first, A, 5);
    display(first);
    insert(first, 5, 10);
    display(first);
    return 0;
}