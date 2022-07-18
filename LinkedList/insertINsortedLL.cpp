#include<iostream>
using namespace std;
class node{
    public :
    int data ;
    node* next ;
    node(int val ){ 
       this -> data = val ;
        this->next = NULL ;
    }
};
void create(node* &p ,int a[], int n){
    p = new node(a[0]);
    p->next =NULL ;
    node *t, *lst ;
    lst = p ;
    for (int i = 1; i < n; i++){   
        t = new node(a[i]) ;
        t->next = NULL ;
        lst->next = t ;
        lst = t;
    }
}
void Display(node *p){
    while (p != NULL){
        cout<<p->data<<" " ;
        p=p->next;
        
    } 
}
void insertinsortedLL(node *&p , int key  ){ // 4  12  23  32  44  // 18 ->4 12 18
        node *t , *q ;                       //    q   p                                     
        t = new node (key) ;
        t->next = NULL ;
        node* temp ;
        temp = p ;
        if(p==NULL){
            p=t ;
        }
        else{
            while (p && p->data < key )
            {
                q=p;
                p=p->next ;
            }
            if(p==temp){
                t->next = p ;
                p = t ;
            }
            else{
                t->next = q -> next ;
                q->next = t ;
            }
      p = temp ;
        } 
}   
int main(){
    int arr[] = { 4,12, 23,32 ,44 } ;
    node* first ;
    create(first , arr , 5) ;
    Display(first);
    cout<<"\n";
    insertinsortedLL(first, 18);
    Display(first);
    return 0 ;
}