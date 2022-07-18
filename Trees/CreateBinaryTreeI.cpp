#include <bits/stdc++.h>
using namespace std ;
class node{
    public:
 node* lchild ;
 int data ;
 node* rchild ;
 node(int val){
    this->lchild = NULL ;
    this->rchild = NULL ;
    this->data = val ;
 }
}; // level order ->  4 5 6 7 
int main(){
    // check 
    node* root = new node(4) ;
    root-> lchild = new node(5);
    root-> rchild = new node(6);
    root->lchild->lchild =new node(7);
    // Final 
      /*
        - - - 4 - - ->
            /    \
    - - -  5 - -  6 - - >
          / \     / \ 
   - - - 7 NULL NULL NULL
        / \
      NULL NULL
 
  so by level order we get    4 5 6 7 .
    */

    return 0 ;
}