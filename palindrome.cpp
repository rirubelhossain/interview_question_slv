#include <bits/stdc++.h>
using namespace std ;


int main()
{
    string s ;
    getline(cin , s );

    int len = s.length() ;
    string s_1 ;
    for(int i = len - 1; i >= 0 ; --i )
    {
        s_1 += s[i] ;
    }

    if( s == s_1)
        cout<<"yes\n";
    else
        cout<<"Not Plaindrome\n";


    return(0);
}
