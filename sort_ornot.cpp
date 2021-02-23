#include <bits/stdc++.h>
using namespace std ;

void swap_the(int *a , int *b )
{
    int tmp ;
    tmp = *a ;
    *a = *b ;
    *b = tmp ;
}
void sort_data(int ar[] , int size )
{
    for(int i = 0 ; i < size - 1; ++i)
    {
        for(int j = i + 1 ; j < size ; ++j )
        {
            if( ar[i] > ar[j])
                swap_the(&ar[i] , &ar[j]);
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
    int update[n] ;
    for(int i = 0 ; i < n ; ++i )
    {
        update[i] = ar[i] ;
    }
    sort_data(ar , n );
    bool check = 0 ;
    for(int i = 0 ; i < n ; ++i )
    {
        if(!(update[i] == ar[i]))
        {
            check = 1 ;
            break ;
        }
    }

    if( check == 1 )
        cout<<"not sort the array\n";
    else
        cout<<"sort yet\n";




    return(0) ;
}
