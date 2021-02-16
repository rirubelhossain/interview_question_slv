#include <bits/stdc++.h>
using namespace std ;

int dup(int ar[] , int n )
{
    if( n == 0 or n == 1)
        return(n);
    int tmp[n] ;
    int count = 0 ;
    for(int i = 0 ; i < n - 1; ++i )
        if( ar[i] != ar[i+1])
            tmp[count++] = ar[i];
    tmp[count++] = ar[n-1];
    for(int i = 0 ; i < count ;++i)
        ar[i] = tmp[i] ;
    return(count);
}

int main()
{
    int ar[] = { 1 , 2 , 2 , 3};
    int n = sizeof(ar) / sizeof(ar[0]);

    n = dup(ar , n );
    for(int i = 0 ; i < n ; ++i)
        cout<<ar[i]<< " ";
    return(0);
}
