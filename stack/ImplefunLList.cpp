#include <bits/stdc++.h>
using namespace std ;
 class node {
    public :
    int data ;
    node* next;
    node* top ;
    node(){               
        this->top = NULL ;     
    }                           
    void push( int x ){
        node* t = new node();
        t->data=x ;
        // if(t==NULL){cout<<"STACK IS FULL " ;}            
        node* temp = top;
        temp = top;
        top = t;
        t-> next = temp;       
    }
    bool isempty(){
        if(top==NULL)
        return true ;
        else
        return false ; 
    }
    void pop(){
        if(isempty()){
            cout<<"stact is empty" ;
        }
        else{
            node* t = top;
            top=top->next ;free(t) ;
        }
    }
 void peek(){
    cout<<top->data;
 }
 };
int main(){
    node st ; 
    st.push(30) ; 
    st.push(31) ; 
    st.push(33) ;
    st.pop();
    st.peek(); 
    return 0 ;
}
