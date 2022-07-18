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
void deleteatPos(node*  &p , int key ){
    node* temp ; 
    temp = p ;
    node* q ;
    if(p==NULL) {
        return ;
    }    
    while (p->data != key){
        q=p ;
        p=p->next ;
    }
         if(p==temp){
                p=p->next ;
                delete temp ;
         }
         else{
             p=q ;
             node *t ;
             t = p->next ; 
             p->next= (p->next)->next ;  
             delete t ;
         p=temp ;
         }
}
int main(){
    node* first ;               
    int A[] = {8,3,9,7,6} ;   
    create(first,A,5) ;       
    Display(first) ;          
    deleteatPos(first,6) ;      
    cout<<endl;               
    Display(first) ;           
    return 0 ;                
}