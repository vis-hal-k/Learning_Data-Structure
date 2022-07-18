#include<iostream>
using namespace std ;
class node {
    public :
    int data ;
    node* next ;
    node(int val ){
        this->data = val ;
        this->next = NULL ;
    }
};
void create (node* &p , int a[],  int n){
     p = new node(a[0]);                                     
     p->next = NULL ;  //  p                                     
     node *last ;                                         
     last  = p ;                                    
     for (int i = 1; i <n ; i++)                           
     {                                                     
         node* t = new node(a[i]);                     
         t->next = NULL ; //                             
         p->next = t ;                               
         p = t ;                                         
     }                                              
     p=last ;   
}
void create2(node* &p , int a[] , int n ){
    p= new node(a[0]);
    node* last ;
    p->next = NULL ;
    last = p ;
    for (int i = 1; i < n; i++)
    {
        node *t = new node(a[i]);
        t->next = NULL ;
        p->next = t ;
        p=t ;
    }
     p= last ;
}
void display(node *p){
    while(p!=NULL){
        cout<<p->data <<" ";
        p=p->next ;
    }
}
void concatenate(node* &fis , node* &sec ) { // done
    node* temp ;
    temp = fis ;
        while(fis->next!=NULL){
            fis = fis->next ;
        }
        fis->next = sec ;
         fis = temp  ;
        
      
}
void merge( node* &fis , node* &sec , node* &thir){
         node *temp , *last ;

         temp = fis ;
        //  int c ;
          // Intialization ;
            if(fis->data < sec-> data){
                thir = last = fis ;
                fis = fis->next ;
                last->next = NULL ;                
            }       
            else{
                thir = last = sec ;
                sec = sec->next ;
                last -> next = NULL ;
            }
        while(fis && sec ){
            if (fis->data < sec->data){
                last->next = fis;
                last = fis ;
                fis = fis ->next ;
                last->next = NULL ;
            }
            else {
                last -> next =  sec ;
                last = sec ;
                sec=sec->next ; 
                last ->next= NULL ;
            }
        }
        if(fis!=NULL){
        last->next=fis;
        }
        else {
        last->next= sec;
        }
}
int main (){
    int A[] ={2,8,10,15} ;
    int B[] = {4,7,12, 14 };

    node * head1  ;
    node* head2 ;
    node* third ;
    create(head1 , A ,  4) ;
    create2(head2 , B , 4) ;
   // concatenate(head1 , head2 ) ; // DONE DONE DONE
    merge(head1, head2, third ) ; // DONE
    display(third);

    //display(head2);
    return 0 ;
}