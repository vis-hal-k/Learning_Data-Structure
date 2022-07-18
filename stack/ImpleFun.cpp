#include <iostream>
using namespace std;
#define size 50 // #define helps to denote the size.
// here we don't create as dynamically
int top = -1;
int A[size];
void push(int x)
{
    if (top > size)
    {
        cout << "overloaded"
             << "\n";
    }
    else
    {
        top++;
        A[top] = x;
    }
}
void pop(int x)
{
    if (top == -1)
    {
        cout << "underloaded"
             << "\n";
    }
    else
    {
        x = A[top];
        top--;
        cout << "Deleted Element" << x;
    }
}
void peek(int x)
{
    if (top == -1)
    {
        cout << "stack is full";
    }
    else
    {
        x = A[top];
        cout<<"Element at x"<<x;
    }
}
void display(){
    if(top==-1){
        cout<<"stack is Empty\n" ;
    }
    for (int i = top; i >= 0; i--)
    {
        cout<<A[i]<<" " ;
    }
    // for (int i = 0; i <= top; i++)
    // {
    //     cout<<A[i]<<" " ;
    // }
}
int  main(){
    push(10);
    push(5);
    push(11);
    push(7);
    display();
    return 0 ;
}
