#include <bits/stdc++.h>
using namespace std ;

int ar[3];
void reverse_array(int arr[] , int n )
{
    int counter = 0 ;
    for(int i = n -1 ; i >= 0 ; --i)
    {
        ar[counter] = arr[i] ;
        ++counter ;
    }
}

int main()
{
    int arr[] = {1 , 3 , 4 };
    int n = sizeof(arr) / sizeof(arr[0]);


    reverse_array(arr , n );

    for(int i = 0 ; i < n ; ++i )
        cout<<ar[i]<<" ";



    return 0 ;
}
