#include <bits/stdc++.h>
using namespace std ;

int gcd(int a , int b )
{
    if( b == 0 )return(a);
    return(gcd(b , a % b ));
}
int lcm(int a , int b )
{
    int lcm_var = (a*b)/gcd(a,b);
    return(lcm_var) ;
}

int main()
{

    int a , b ;
    cin>>a>>b ;
    cout<<"the gcd value = "<<gcd(a,b)<<endl;
    cout<<"the lcm of value result = "<<lcm(a,b)<<endl;

    return(0) ;
}
