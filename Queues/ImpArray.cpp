#include <bits/stdc++.h>
using namespace std ;
class Queue{
    public :
    int size; int f ; int r ; // This is index pointer
    int *Q ; // This is address pointer 
    Queue(int siz){  //contructor
        this->size = siz;
        this->f = -1 ;
        this->r = -1 ;
        Q = new int[size] ;
    } 
    bool empty() { 
        if (f==r) return true ;
        else return false ;
    }  
    bool full(){
        if(r==size-1) return true ;
        else return false ;
    }
    void enqueue(int x ){
        if (full()){
            cout<<"stack is FUll" ;
        }
        else {
        Q[++r]= x ;
        }
    }
    int dequeue(){
        int x ;

        if( empty() ) 
            cout<<"queue is empty" ;
        else 
        f++ ;
         x = Q[f] ;
         return x ;
    }
    int top(){
        int x ; f++ ; 
        x = Q[f] ;    
        return x ;     
    }
};
int main(){     
      Queue q(5) ;
      q.enqueue(10);
      q.enqueue(4);
      q.enqueue(3);
     cout<<q.dequeue()<<"\n";
      cout<<q.top();
        
    return 0 ;  
}   
