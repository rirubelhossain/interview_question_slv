#include <bits/stdc++.h>
using namespace std ;

void missing_array(int arr[] , int n )
{
    for(int i = 0 ; i < n-1 ; ++i )
    {
        int result = (arr[i+1] - arr[i])  ;
        if(result == 2)
        {
            cout<<i+2<<endl;
        }

    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,10};
    int n = sizeof(arr) / sizeof(arr[0]) ;

    missing_array(arr , n );

    return(0);
}
