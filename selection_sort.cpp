#include <bits/stdc++.h>
using namespace std ;

void swap_the_function(int *a , int *b )
{
    int tmp ;
    tmp = *a ;
    *a = *b ;
    *b = tmp ;
}
void selection_sort(int arr[] , int n )
{
    for(int i = 0 ; i < n - 1 ; ++i)
    {
        for(int j = i + 1 ; j < n  ; ++j)
        {
            int index_min = i ;
            if(arr[j] < arr[index_min])
                index_min = j ;
            swap_the_function(&arr[index_min] , &arr[i]);
        }
    }
}
void print(int arr[] , int n )
{
    for(int i = 0 ; i < n ; ++i)
        cout<<arr[i]<< " ";
}
int main()
{
    int arr[] = { 64 , 25, 12, 22 ,11 };
    int n = sizeof(arr) / sizeof(arr[0]) ;

    selection_sort(arr , n ) ;
    print(arr , n ) ;
    return (0);
}
