#include <bits/stdc++.h>
using namespace std ;

class Stack {
    public :
    int top ;
    int size ;
    char *s ;
    Stack(int siz){
        this->top=-1 ;
        this->size = siz ;
        s = new char[size] ;
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
// int is Balaance(char* exp)
bool isBalance(string exp , Stack &ref){ 
    int i = 0;
    int spa = exp.size(); 
    if(spa%2!=0){
        return false ; // 0 
    }
    while ( i < spa )
    {
        char c = exp[i] ;
      if(exp[i]=='('||exp[i]=='{'||exp[i]=='<'||exp[i]=='['){//) )        
            ref.push(c);                                            
        }                                                           
        else (ref.IsEmpty()) {                                            
            return false ;                                            
        }                                                         
     if((exp[ref.top]=='(' && exp[i]== ')' ) ||(exp[ref.top]=='{' && exp[i]== '}') ||(exp[ref.top]=='[' && exp[i]==']') ||(exp[ref.top]=='<' && exp[i]== '>')  ) {
            ref.pop();
        }     
        i++ ;
    }                                         
        if(ref.IsEmpty()){    
            return true ;      
        }                       
        else {                  
            return false ;     
        }                      
    }     
int main() {
    int input_size ;
    cout<<"Input want you want :\n" ;  string  str; str="{}" ; 
    input_size = str.size() ;
     Stack st(input_size) ;
         cout<<isBalance(str , st) ;
    //cout<<str[3] ;

    return 0 ;
}