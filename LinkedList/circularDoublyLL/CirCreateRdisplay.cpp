#include <iostream>
using namespace std;
class node{
    public :
    int data ;
    node *next;
      node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
}*head;
void createCricular(node* & p , int A[] , int n){
    p= new node(A[0]);
    p->next = p ;
    node* last = p ;
    node* t ;
    for (int i = 1; i < n; i++)
    {
      t = new node(A[i]) ;
      t->next =  last->next ;
      last ->next  = t ;
      last = t ; 
    }
}
void display(node *p){
    node* temp = p ;
    do{
        cout<<p->data << " " ;
        p=p->next ;
    }while(p != temp  ) ;
    cout<<"\n"; 
}
// RECURSSIVE DISPLAY
void Rdisplay(node *p ){
    static int flag = 0 ; // for global flag=0
  
    if (p!= head || flag==0)
    {
        flag = 1;
        cout<<p->data<<" ";
        Rdisplay(p->next);
    }
     flag = 0 ;
}
int main(){
   // node* head ;
    int A[]= {3, 4, 5, 6, 7};
    createCricular(head , A , 5 ) ; 
    display(head) ;
    Rdisplay(head) ;// for RecurssiveDisplay we need to display
    return 0;       // amke head globally in above  class node {.....} *head ;
}  