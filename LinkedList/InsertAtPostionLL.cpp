#include <iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
    node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};
void create(node *&p, int A[], int n){
    p = new node(A[0]);
    p->next = NULL;
    node *t, *last;
    last = p;
    for (int i = 1; i < n; i++)
    {
        t = new node(A[i]);
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void insertatpos(node *&p, int index, int val){
    node *t = new node(val);
    node *temp;
    temp = p;
    if (index < 0 || index > 5)
        return;
    if (index == 0){
        t->next = p;
        temp = t;
    }
    for (int i = 0; i < index - 1; i++){
        temp = temp->next;
    }
    t->next = temp->next;
    temp->next = t;
    
}
void display(node *p){
    while (p != NULL){
        cout << p->data << " ";
        p = p->next;
    }
    cout << "\n";
}
int main(){
    int A[] = {3, 4, 5, 6, 7};
    node *first;
    create(first, A, 5);
    display(first);
    insertatpos(first, 3, 11);
    display(first);
    return 0;
}
