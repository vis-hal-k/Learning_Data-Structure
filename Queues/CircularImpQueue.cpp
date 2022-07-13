#include<bits/stdc++.h>
using namespace std ;
class CricularQueue {
 public :
 int r ;
 int f ;
 int size ;
 int* Q ;
    CricularQueue(int siz){
        this->r=0;
        this->f=0;
        this->size =siz ;
        Q = new int[size] ;
    }
    bool full(){
        if((r+1)%size == f) return true ;
        else return false ;
    }
    bool empty(){
        if(r==f) return true ;
        else return false ;
    }
    void enqueue(int val){
        if(full())  cout<<"stack is Full" ;
        else {
            r=(r+1)%size ;
            Q[r] = val ;            
        }
     }
     int dequeue(){
        if(empty()) cout<<"stack is Empty" ;
        else{
            f=(f+1)%size ;
            return Q[f] ;
        }
        return -1;
     }
};
int main(){
    CricularQueue q(7);
    q.enqueue(8) ;
  cout<<q.dequeue()<<"\n";
  cout<<q.dequeue()<<"\n";
    q.enqueue(5) ;
    q.enqueue(6) ;
   cout<<q.dequeue()<<"\n";
    q.enqueue(2) ;
    q.enqueue(4) ;
    q.enqueue(86) ;
  cout<<q.dequeue() <<"\n";
    q.enqueue(84) ;
    q.enqueue(1) ;
    q.enqueue(0) ;
  cout<<q.dequeue() <<"\n";


    return 0;
}