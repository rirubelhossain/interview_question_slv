#include <bits/stdc++.h>
using namespace std ;

int gcd(int a , int b )
{
    cout<<"the first time "<<a<<" "<<b<<endl;
    if( b == 0)
        return(a) ;

    cout<<"the second time"<<a<<" "<<b<<endl;
    return(gcd(b , a % b));

}

int main()
{

    int a , b ;
    cin>>a>>b ;

    cout<<gcd(a,b)<<endl;



    return(0) ;
}
