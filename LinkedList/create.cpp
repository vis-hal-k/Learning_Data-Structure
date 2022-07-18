#include <iostream>
using namespace std;
class node
{
public:
    int data;      
    node *next;    
    node(int val)  
    {             
        this->data = val;
       this->next = NULL;
    }              
};                 
void create(node* &n)
{                  
     
     n = new node(1);
    node *second = new node(4);
    node *third = new node(8);
    n->next = second;
    second->next = third;
    third->next = NULL;
    node *temp;     
    temp = n;  
    int c = 0, sum = 0;
    int max = INT_MIN;
    while (temp != NULL)
    {                
        cout << temp->data << " ";
        c++;         
        if (max < temp->data)
        {           
            max = temp->data;
        }             
                     
        sum = sum + temp->data;
        temp = temp->next;
    }                
    cout << endl     
         << c << endl
         << "sum LL = " << sum;
    cout << endl    
         << "maximum = " << max;
}       
         
void count(node *p ){
    
    node* temp = p ;
    int m = 0 ;
       
   // p=start ;   
    while (temp != NULL){
        m++ ;     
        temp = temp-> next ;
    }             
    cout <<endl<<" m = "<< m ;   
}                 
int main()           
{                    
    node *head;        
    create(head);      
     count(head) ;       
    return 0;           
}                      