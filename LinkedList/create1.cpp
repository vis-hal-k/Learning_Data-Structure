#include <iostream>
using namespace std;
class node {
    public :
    int data ;
    node* next ;

};
void create (node *n) {
    // CREATE
     node *first = new node;
     node *second = new node;
     node *third = new node;
     first -> data = 10 ;
     first -> next=  second ;
     second-> data  = 11;
     second-> next  = third;
     third -> data  = 13;
     third -> next  = NULL;
     node *temp ;
     temp = first ;
     // traverse
     while (temp != NULL){
         cout<<  temp->data<<" ";
         temp = temp-> next ;
     }     
}
int main(){
    node *head    ;
    create (head) ;
    
    return 0 ;
}