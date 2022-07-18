#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void create(node **p, int A[], int n)
{
    int i;
    node *t, *last;
    *p = new node;
    (*p)->data = A[0];
    (*p)->next = NULL;
    last = *p;
    for (i = 1; i < n; i++)
    {
        node *t = new node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void sum(node *p){
    int sum =0 ;
    node* temp = p ;
    while(temp!=NULL){
      sum += temp->data ;
    temp =temp->next ;
    }
    cout<<endl<< sum <<endl;

}
void Display(node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
void insertathead(node **p, int val)
{
    node *n = new node;
    n->data = val;
    n->next = (*p);
    (*p) = n;
}
void insertatend(node **t, int val)
{
    node *temp = *t;
    node *n = new node;
    n->data = val;
    n->next = NULL;
    while ((*t)->next != NULL)// while ( temp->next != NULL) 
    {                          // {
        (*t) = (*t)->next;     // temp = temp->next ;
    }                          // }
    (*t)->next = n;            // temp-> next=n ; 
    *t = temp;                // x-x-x-x-x-x-x-x
}

int main()
{
    int A[] = {3, 5, 7, 10, 15};
    node *first;
    create(&first, A, 5);
    // sum(first) ;
    sum(first) ;
    insertathead(&first, 1);
    insertatend(&first, 190);
    Display(first);

    return 0;
}
