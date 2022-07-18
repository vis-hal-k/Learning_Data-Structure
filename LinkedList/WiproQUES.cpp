#include <iostream>
using namespace std;
int main()
{
    string s ;
    cin>>s ;
    int n ; 
    cin>>n ; // 0 or 1
   
    if (n==0) {
        // cout<<s[0]; 
        // cout<<s[2]; 
        int  sum = 0 ;
        for (int i = 0; i < s.size(); i++)
        {
               if (s[i]=0 && s[i]<= 9)
               {
                   cout<<s[i] ;
                   sum= sum +(int)s[i] ;
               }
           
            
        }
            cout<<sum<<"\n" ;   
    }
   
    else if (n==1){

    }
     

    return 0;
}
