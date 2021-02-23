#include <bits/stdc++.h>
using namespace std ;

void swarp(int *a , int *b )
{
    int tmp ;
    tmp = *a ;
    *a = *b ;
    *b = tmp ;
}

void babul_bhai(int ar[] , int size )
{
    for(int i = 0 ;i < size - 1; ++i)
    {
        for(int j = i + 1 ; j < size ; ++j )
        {
            if(ar[i] > ar[j])
                swarp(&ar[i] , &ar[j]);
        }
    }
}

int main()
{
    int n ;
    cin>>n ;
    int ar[n] ;
    for(int i = 0 ; i < n ; ++i )
        cin>>ar[i] ;
    babul_bhai(ar , n ) ;
    for(int i = 0 ;i < n ; ++i )
        cout<<ar[i]<<" ";


    return(0) ;
}
