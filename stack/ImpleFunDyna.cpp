#include <iostream>
using namespace std;
class Stack{
    public :
    int size ;
    int top ;
    int *s ;                                      
    Stack(int siz){                                                 
        this->top=-1 ;                              
        this->size=siz ;                            
        s= new int[size];                            
    }                                                
     bool IsEmpty(){                                
            if (top==-1)                            
            return  true ;                          
            return false ;                         
    }                                                
void push(int val){                                
    if(top>=size){                                     
        cout<<"overloaded" ;                        
    }                                             
    else{                                         
        // top ++ ;                              
        s[++top]=val ;                                
    }                                              
}                                                     
   int peek(){                                   
    return s[top] ;                                 
   }                                                 
    int pop(){                                           
        if(IsEmpty()){                                 
            cout<<"underflow" ;                        
            return -1 ;                            
        }                                                 
        else{                                          
            return s[top--] ;                         
        }                                             
    }                                                 
};                                                   
void display(Stack st){                             
    for (int i = 0; i <= st.top ; i++)                 
    {                                                 
        cout<<st.s[i]<<" ";                         
    }                                                 
                                                       
}                                                  
int main(){                                      
    Stack st(5)   ;                                 
    st.push(10)   ;                                 
    st.push(1000) ;                               
    st.push(100)  ;                                  
    cout<<"deleted value -> "<<st.pop()<<endl;     
    cout<<st.peek()<<endl;                        
    display(st);                                   
    return 0 ;                                     
}                                                  