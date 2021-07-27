#include <bits/stdc++.h>
using namespace std ;


void liner_search(int arr[] , int n  , int key)
{
    int store ;
    int check = 0 ;
    int i ;
    for( i = 0 ; i < n - 1 ; ++i)
    {
        if(arr[i] == key)
        {
            store = arr[i] ;
            check = 1 ;
            break ;
        }
    }
    if(check == 1 )
        cout<<"the value is found! And the position is = "<<i +1 <<" And the value is = "<<store<<endl;
    else
        cout<<"the value is not found ";
}

int main()
{
    int arr[] = { 1 , 4 , 3 , 5 } ;
    int n = sizeof(arr) / sizeof(arr[0]) ;
    int key = 30 ;
    liner_search(arr , n , key ) ;

    return 0 ;
}
