nclude <iostream>using namespace std;class node{ public:
    int data ;
    node* next ;
    node(int val){
        this-> data = val ;
        this-> next = NULL ;
    }
};
void create(node* &n, int A[], int m ){
    n = new node(A[0]); 
    n ->next = NULL; 
    node *last ;
    last = n ; 
    
    for (int i = 1; i < m; i++)
    {       node* t = new node(A[i]);
        t-> next = NULL ;
        last -> next = t ;
        last = t ;      
    } 
}
// Searching
node* search(node* p , int key){

   while(p != NULL){
       if(key==p-data) {
            return (p);
       }
       p=p->next ;
   }
   return NULL;
}
// ImproveSearching
node* ImpSearch(node* &first , int key  ){  
    node *q, *p ;
    p = first ;

    while( p!=NULL){
        if (key==p-> data){
            q->next=p->next;
            p->next = first ;
            first=p ;
            return first;
        }
        q=p ;
        p = p-> next ;        
    }  
        return NULL ;
}


// ImproveSearching
void ImpSearch1(node* &frst , int key  ){
    node *q, *p ;
    p = first ;

    while( p!=NULL){
        if (key==p-> data){
            q->next=p->next;
            p->next = first ;
            first = p ; // important line 
            return ;                   
        }
        q=p ;
        p = p-> next ;
    }  
    
    return ;
        }
// RECURSIVE SEARCHING
node* Rsearch(node* p , int key){
    if(p==NULL)
    return NULL ;
    if(key==p->data)
    return (p) ;

    return search(p->next, key );
}
void Display(node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
int main(){
    int A[] = { 11, 22, 13, 54, 50 };
    node *head ;
    create(head, A
    669574
     5);
   Display(head);
    cout<<endl<<"ADDRESS = "<<search(head, 54)<<endl;
   Display(head);
    cout<<endl<<"ADDRESS = "<<Rsearch(head, 54)<<endl;
   Display(head);
   cout<<endl ;
//    cout<<endl<<"Address = "<< ImpSearch(head, 54)<<"\n" ;
//    Display(head);
    ImpSearch1(head, 54);
   Display(head);   
   --------

    return 0 ;
}

37