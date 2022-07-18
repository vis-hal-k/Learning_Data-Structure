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
void create(node* &p , int a[],  int n ){                   
     p = new node(a[0]);                                     
     p->next = NULL ;                                      
     node *last ;                                         
     last  = p ;                                    
     for (int i = 1; i <n ; i++)                           
     {                                                     
         node* t = new node(a[i]);                     
         t->next = NULL ;                              
         p->next = t ;                               
         p = t ;                                         
     }                                              
     p=last ;                                   
}                                                                                                                                                    
void Display(node* p){
    while(p){
        cout<<p->data << " " ;
        p=p->next ;
    }
}
void reversing(node* &p, int n){
node  *t , *q ;
q= NULL ;
t = p ;
cout<<"checking"<<endl ;
for (int i = 1; i < n; i++)
{
cout<<"checking1"<<endl ;
    q=p ;
    t=p->next ;
    if(q==p){
        q->next = NULL ;
    }
    else{

    }
    // q=p ;
    // p=temp->next ;
    // temp = temp->next ;
    // p->next = q ;
cout<<"checking2"<<endl ;
}
cout<<"checking2"<<endl ;
}
int main(){
    int a[] = {2,4,6,8};
    node* first ;
    create(first , a,4);
    Display(first) ;
    reversing(first , 4);
    cout<<"vishl";
    Display(first) ;
    return 0 // DDDDDDOUUBBTTTTT 
}