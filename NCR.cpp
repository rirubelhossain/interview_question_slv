 #include <bits/stdc++.h>
 using namespace std ;

 typedef long long int ll ;

 ll fact(ll number )
 {
     if( number == 0 )return(1) ;
     else return(number * fact(number - 1 ));
 }

 ll ncr(ll n , ll r )
 {
     ll catch_n = fact(n) ;
     ll catch_n_r = fact(n-r) ;
     ll catch_r = fact(r) ;

     ll result = catch_n / (catch_r * catch_n_r) ;
     return(result) ;
 }


 int main()
 {
     ll n , r ;
     cin>>n>>r ;
     cout<<ncr(n,r);

     return(0);
 }
