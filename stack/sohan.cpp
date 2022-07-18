#include<bits/stdc++.h>
using namespace std;
class Stack{
    int *arr;
    int top;
    int size; 
    public:
    Stack(int size){ // Intialization
        this->size= size;
        arr = new int[size];
        this->top= -1;}

      void push(int data){
          if(top < size-1){
              top++;
              arr[top]=data;

              
          }
          else
          cout<<"stack overflow"<<endl;
      }
      void pop(){
          if(isempty()){
              cout<<"stack underflow"<<endl;
          }
          else
          top--;
      }
      int peek(){
          if(top == -1){
              cout<<"stack is empty"<<endl;
              return -1;
          }
          else
           return arr[top];
      }
      bool isempty(){
          if(top == -1){
              return 1;
          }
          else return 0;
      }

};
int main()
{
    int sr ;
    cin>>sr ;
   Stack s(sr);
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   s.push(5);
   s.push(6);
   cout<<s.peek()<<endl;

}