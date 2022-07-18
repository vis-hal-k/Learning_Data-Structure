#include<iostream>
using namespace std;
class node 
{
    public :
    int data ;
    node *next ;
} ;
void create(node** p , int A[], int n ){
  node *t, *last ;
  *p = new node ;
   (*p) -> data = A[0];
   (*p) -> next = NULL ; 
   last = *p ;
   for(int i =1; i <n ;i++){
       node *t= new node ;
       t->data = A[i] ;
       t->next = NULL ;
       last -> next = t ;  
       last = t ;
   }  
}
void Display (node* p){
    while(p != NULL) {
        cout<<p->data<<" " ;
      p = p->next ;
        
    }
}
void insertathead (node **p , int val ){
        node *n = new node(val) ;
        n->next = (*p) ;
            (*p) = n ;
    }
int main(){
int arr[]= {3,5,7, 10, 5};
node* first ;
create(&first, arr , 5) ;
insertathead(&first,1) ;
Display(first);
return 0 ;

}