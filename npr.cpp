#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;

ll fact(ll number )
{
    if(number == 0 )
        return(1);
    else{
        ///cout<<number<<endl;
        return(number * fact(number -1 ));
    }
}
ll npr(ll n , ll r )
{
    ll catch_var = fact(n) ;
    ll catch_r = fact(n-r) ;

    ll result = catch_var / catch_r ;
    return(result) ;
}
int main()
{
    ll n , r ;
    cin>>n>>r ;
    cout<<npr(n,r);


    return(0);
}
