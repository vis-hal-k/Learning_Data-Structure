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
void Cridelete(node* &p, int index){
    node* temp = p;
    node* t = p;
    int x ;
    if(index<=0 || index > 4 ){
        return ; 
    }
    if (index == 1) 
    {
        while(temp->next!=p)temp=temp->next;
        x=p->data ;
        if(p==temp){
            free(p) ;
            p=NULL ;
        }
        else {
           p=p->next ;     //  temp->next = p->next ;
           temp->next = p ;  //  free(p);
           free(t);          // p= t-> next ;
        }
         cout<<x<<"\n";
    } 
    else{
        for (int i = 0; i < index-2 ; i++)temp=temp->next ;
        node* q ;
        q=temp->next ; x=q->data ;
        temp->next = q->next ;
        free(q) ;
        cout<<x<<"\n";
    }
}   
int main(){
     node *head;
    int A[] = {3, 4, 6, 7};
    createcircular(head, A, 4);
    display(head);
    Cridelete(head , 3);
    display(head);
    return 0 ;
}