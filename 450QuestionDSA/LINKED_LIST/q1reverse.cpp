#include <bits/stdc++.h>
using namespace std ;

class node {
   public:
 int data ;
 node *next ;
 node(int val){
    this->data = val;
    this->next = NULL ;
 }
 };
 void create(node* &p, int a[] , int n  ){
    p= new node(a[0]);
    p->next = NULL ;
    node* temp ;
    temp = p ;
    for (int i = 1; i < n; i++){
       node* t= new node(a[i]);
       t->next = NULL ;
       temp->next = t ;
       temp= t;
    }
 }
 void display(node *p){
    while (p != NULL){
        cout << p->data << " ";
        p = p->next;
    }   
    cout << "\n";
} 
void reverse(node* &p){

   node* pre ; pre->next = NULL ;
   pre->data = 12; // why?  why?  why? 
   node* suc ; suc->next = NULL ; 
   node* temp = p ;
   while (temp!=NULL){
      suc=temp->next ;
      temp->next = pre ; 
      pre= temp ;
      temp = suc ; 
   }    
   p = pre;   
}   
// void Rreverse (node* &p){
//    node* temp  = p ;
//    if(p==NULL )
   
// }
int main(){
int n ;  int A[n];  cin>>n ;
for (int i = 0; i < n; i++){ cin>>A[i] ; }
    node* head ;
    create(head,A,n);
    display(head) ;
    reverse(head);
    display(head) ;
    return 0;
 }