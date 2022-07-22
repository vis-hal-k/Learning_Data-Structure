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
node* buildTree(node* &root) {
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
void levelorder(node* root) {
    cout<<"this is levelorder : " ;
    queue <node*> q ;
    q.push(root);
    if(root==NULL) {
        return ;
    }
    while (!q.empty())
    {
        node* temp = q.front(); q.pop() ;
        cout<<temp->data<<" " ;
        if(temp->left!=NULL) q.push(temp->left) ; // condition for root->left not null 
        if(temp->right !=NULL) q.push(temp->right) ;

    }
}
void display(node* root){
    cout<<root->data <<" ";  
}
void preorder(node* root){
    if(root==NULL) return ;
  display(root);
  preorder(root->left);
  preorder(root->right);
 return ;
}
void postorder(node* root){
    if(root==NULL) return ;
  postorder(root->left);
  postorder(root->right);
  display(root);
 return ;
}
void inorder(node* root){
    if(root==NULL) return ;
  inorder(root->left);
  display(root);
  inorder(root->right);
 return ;
}
int main(){
    node* root = NULL ;
    root = buildTree(root) ;
    levelorder(root) ;
    cout<<endl<<" this is preorder " ;
    preorder(root) ;
       cout<<endl<<" this is postorder " ;
    postorder(root) ;
       cout<<endl<<" this is inorder " ;
    inorder(root) ;

    
}