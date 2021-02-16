#include <bits/stdc++.h>
using namespace std ;


bool anagram(string a , string b )
{


    int len_a = a.length() ;
    int len_b = b.length() ;

    if( len_a != len_b )
        return(false) ;
    sort(a.begin() , a.end());
    sort(b.begin() , b.end());

    for(int i = 0 ; i < len_a ; ++i )
        if( a[i] != b[i])
            return(false) ;

    return(true);
}

int main()
{
    string a  ;
    string b  ;
    cout<<"Please enter two string \n" ;
    getline(cin , a );
    getline(cin , b );




    if(anagram(a,b))
        cout<<"yes this is anagram\n";
    else
        cout<<"this is not anagram\n" ;





    return(0);
}
