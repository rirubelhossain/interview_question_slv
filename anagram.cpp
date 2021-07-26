#include <bits/stdc++.h>
using namespace std ;


void passing_string( string a , string b )
{
    int len_a = a.length() ;
    int len_b = b.length() ;
    sort(a.begin() , a.end());
    sort(b.begin() , b.end());

    if(a == b )
        cout<<"The both string are Anagram"<<endl;
    else
        cout<<"The both string are not Anagram"<<endl;
}

int main()
{
    string a = "BTEB";
    string b = "BUBT";

    passing_string(a, b);

    return(0);
}
