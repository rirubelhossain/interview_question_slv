#include <bits/stdc++.h>
using namespace std ;


int main()
{
    int arr[] = { 1 , 2 ,2 , 3 ,4,5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_1 = arr[0] ;
    int lock ;
    for(int i = 0 ; i < n  ; ++i )
        if(arr[i] > max_1)
            lock = arr[i];

    cout<<lock<<endl;

    return(0) ;
}
