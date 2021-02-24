#include <bits/stdc++.h>
using namespace std ;


string find_sum(string a , string b )
{
    if( a.length() > b.length() )
        swap(a , b );

    int len_a = a.length() ;
    int len_b = b.length() ;
    int dif = b.length() - a.length() ;

    int carry = 0 ;
    string str = "" ;

    for(int i = len_a - 1 ; i >= 0 ; --i )
    {
        int sum = (a[i] - '0') + (b[i+dif] - '0') + carry ;
        str.push_back(sum % 10 + '0' );
        carry = sum / 10 ;
    }
    for(int i = dif - 1 ; i >= 0 ; --i)
    {
        int sum = ((b[i] - '0') + carry);
        str.push_back(sum % 10 + '0');
        carry = sum / 10 ;
    }
    cout<<str<<endl;
    if( carry)
        str.push_back(carry + '0');

    reverse(str.begin() , str.end());

    return(str);
}
int main()
{
    string a , b ;
    cin>>a>>b ;
    cout<<"the summation would be = "<<find_sum(a , b );

    return(0) ;
}

