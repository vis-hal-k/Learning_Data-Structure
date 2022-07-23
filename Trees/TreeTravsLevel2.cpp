#include <bits/stdc++.h>
using namespace std ;
class node{
    public:
 node* left;
 int data ;
 node* right ;
 node(int val){
    this->left = NULL ;
    this->right = NULL ;
    this->data = val ;
 }
};
node* buildTree(node* root ) {
     cout<<"Enter data: " ;
  int val ;
  cin>>val ;
    root = new node(val) ;
    if (val==-1){
        
        return NULL;
    }
    cout << "Enter data for inserting in left : " <<endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right : " << endl;
    root->right = buildTree(root->right);
    return root;
}
void levelorder (node* root ) {
    queue <node*> q ;
    q.push(root);
    q.push(NULL) ;
    if(root== NULL) return  ;
    while (!q.empty()){ node* temp = q.front(); q.pop();
    if(temp == NULL){ if(q.empty()) return ; q.push( NULL );  cout<<endl ;
      continue ; } 
    cout<<temp-> data << " " ;
    if(temp->left) q.push(temp->left)  ;
    if(temp->right)q.push(temp->right) ;
    }
    return ;
} 
int main (){
node * root ;
root = buildTree(root); 
levelorder(root);
  
    return 0 ;
}
/*
OUTPUT in this format / or  in levels
1
1 2
1 2 3
*/




















