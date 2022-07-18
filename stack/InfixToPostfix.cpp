#include <bits/stdc++.h>
using namespace std;

// Function to return precedence of operators
int prec(char c)
{
    if (c == '+' || c == '-')
        return 1;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '^')
        return 3;
    else
        return -1;
}
void infixtopostifix(string &str)
{
    string postfix;
    stack<char> s; // use Stack STL ;
    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i]; // store in c for easy writing
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            postfix += c;
        else if (c == '(')
       s.push(c); //  doubt
        
        else if (c == ')')
        {
            while (s.top() != '(')
            {
                postfix += s.top();
                s.pop();
            }
            s.pop(); // this is for pop out opening bracket
        }
        else
        {
            while (!s.empty() && prec(str[i]) <= prec(s.top()))
            {
                if ( c =='^' && s.top() =='^' )
                {
                    break ;
                }
                else {
                    postfix += s.top() ;
                    s.pop();
                }
            }
            s.push(c) ;            
        }
    } //  loop over
    // Pop all the remaining elements from the stack
    while (!s.empty()) 
    {
        postfix += s.top();
        s.pop();
    }
    cout<<postfix<<" " ;

}
int isOperand(char x){
    if (x == '+' || x == '-' || x == '*' || x == '/'){
        return 0;
    }
    return 1;
}
// INCOMPLETE
// void evaluation(string s){
//     stack <int> sta ;
//     int r , x1, x2;
//     for (int i = 0; i < s.length(); i++)
//     {
  
//        if(isOperand(s[i])){
//           sta.push(s[i]) ;
//           cout<<s[i] ;
//        }
//        else{
//             x2= sta.top();
//             sta.pop();
//         cout<<"check" ;
//             x1= sta.top();
//             sta.pop();
//             switch (s[i])
//             {
//             case '+': r = x1+x2 ; 
//             case '-': r = x1-x2 ; 
//             case '*': r = x1*x2 ;
//             case '/': r = x1/x2 ; 
//             } cout<<"check" ;
//             sta.push(r);
//        }   
//     }
//     r = sta.top();
//     sta.pop();
//     cout<<"evaluation = "<<r ;
// }
int main()
{
    string exp;
    exp = "1+2*4-4/2";
    // cin >> str;
    infixtopostifix(exp);
    cout<<"\n";
   // cinevaluation(exp) ;
    return 0;
}
