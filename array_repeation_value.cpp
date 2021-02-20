#include <bits/stdc++.h>
using namespace std ;

void print_repeate(int ar[] , int size )
{
    int counter = 0 ;
    for(int i = 0 ; i < size ; ++i )
    {
        for(int j = i + 1 ; j < size ; ++j )
        {
            if( ar[i] == ar[j])
                cout<<" " ;
            else
                cout<<ar[i]<<" ";
        }
    }
}

int main()
{
    int arr[] = {4 ,2 , 4, 5,5 , 3 ,1 };
    int size_ar = sizeof(arr)/sizeof(arr[0]);
    int arrr[size_ar] ;
    print_repeate(arr , size_ar );


    return(0);
}
