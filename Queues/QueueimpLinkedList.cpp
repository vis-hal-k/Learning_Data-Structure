#include <bits/stdc++.h>
using namespace std;
class node{
    public :
    int data ;
    node* next ;
    node* f  ;
    node*  r ;
    node(){
        this-> next =  NULL;
        this-> f =  NULL;
        this-> r =  NULL;
    }
    bool empty(){
        if(f==NULL) return true ;
        else return false ;
    }
    void LLenqueue(int x ){
     
        node* t = new node();
        t->data = x ;
        t->next=NULL ;
        if(f==NULL){
            f=r=t ;
        }
        else{
            r->next = t ;
            r=t ;
        }
    }
    int LLdequeue(){
        node* p ;
        if(empty()) cout<<"stack is Empty\n" ;
        else{
            p=f ; //because it LL we can free the node from list.
            int x = f->data ;
            f=f->next ;
            free(p);
            return x;
        }
        return -1 ;
    }
};
int main(){
    node q ;
    q.LLenqueue(10);
    cout<<q.LLdequeue()<<"\n" ;
    q.LLenqueue(20);
    q.LLenqueue(30);
    cout<<q.LLdequeue()<<"\n" ;
    q.LLenqueue(40);
    q.LLenqueue(50);
}