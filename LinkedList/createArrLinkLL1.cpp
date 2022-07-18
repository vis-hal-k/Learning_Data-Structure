#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
node* create(int A[], int n)
{
    int i;
    node *t, *last;
    node *first = new node;
    first->data = A[0];
    first->next=NULL;
    last = first ; 
    
    for ( i = 1; i < n; i++)
    {
        node* t = new node;
        t->data = A[i];
        t->next=NULL;
        last->next = t;
        last = t ; 
    }  
    return first;
}  
void Display (node* p){
  while (p != NULL)
  {
     cout<< p->data << " " ;
     p= p->next ; 
  } 
}                                           
int main()                        
{                                 
    int A[] = {3, 5, 7, 10, 15};  
    node* first = create(A, 5);    
    Display(first);
    return 0;                   
}