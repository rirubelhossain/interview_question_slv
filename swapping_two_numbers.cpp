#include <bits/stdc++.h>
using namespace std ;



int main()
{
    int a  , b ;
    cin>>a>>b ;

    cout<<"Before swapping two value = "<<a<<"    "<<b<<endl;;
    a ^= b ;
    b ^= a ;
    a ^= b ;

    cout<<"after swapping two value = "<<a<<"     "<<b<<endl;

    return(0) ;
}
