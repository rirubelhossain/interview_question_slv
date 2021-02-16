#include <bits/stdc++.h>
using namespace std ;


int remove_array(int arr[] , int n )
{
    if(n == 0 || n == 1)
        return(n) ;

    int tmp[n];
    int count = 0 ;

    for(int i = 0 ; i < n -1 ; ++i)
        if( arr[i] != arr[i+1])
            tmp[count++] = arr[i];
    tmp[count++] = arr[n-1];
    for(int i = 0 ; i < count ; ++i)
        arr[i] = tmp[i];
    return(count);
}

int main()
{
    int array[] = {1 , 2 , 2 , 3 ,3,4,4};
    int len = sizeof(array) / sizeof(array[0]);

    len = remove_array(array , len );
    for(int i = 0 ; i < len ; ++i )
        cout<<array[i]<<" ";


    return(0);
}
