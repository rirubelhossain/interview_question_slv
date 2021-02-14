#include <bits/stdc++.h>
using namespace std ;

bool isprime(int n )
{
    if( n <= 1 )
        return(false);
    for(int i = 2 ; i < n ; ++i )
        if( n % i == 0 )
            return(false);
    return(true);
}

void check_prime(int n )
{   int number = 0 ;
    for(int i = 2 ; i<= n; ++i )
        if( isprime(i))
        {
            cout<<i<<" "<<endl;
            ++number;
        }
    cout<<number;
}

int main()
{
    check_prime(1000);

    return(0);
}
