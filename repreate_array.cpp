#include <bits/stdc++.h>
using namespace std ;

void call_repeate(int ar[] , int size , int update_array[] )
{
    int count = 0 ;
    for(int i = 0 ; i < size ; ++i )
    {
        for(int j = i + 1; j < size ; ++j )
        {
            if( ar[i] == ar[j])
            {
               /// cout<<ar[i]<<" " ;
                update_array[count] = ar[i] ;
                ++count ;
            }
        }
    }
    for(int i = 0 ; i < count ; ++i )
        cout<<update_array[i]<<" ";



}

int main()
{
    int ar[] = { 1 , 2 , 2, 3 } ;
    int size_a = sizeof(ar) / sizeof(ar[0]) ;
    int update_array[size_a] ;
    call_repeate(ar , size_a , update_array);




    return(0);
}
