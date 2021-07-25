#include <bits/stdc++.h>
using namespace std ;

int subarray_check(int arr[] , int n , int sum )
{
    int current_sum , i , j ;
    for(int i = 0 ; i < n ; ++i )
    {
        current_sum = arr[i] ;
        for(int j = i + 1 ; j <= n ; ++j)
        {
            if(current_sum == sum )
            {
                cout<<i<<" "<<j-1<<endl;
                return(1);
            }
            if(current_sum > sum or j == n)
                break ;
            current_sum +=arr[j] ;
        }
    }
    cout<<"No sub array found";
    return(0);
}

int main()
{
    int arr[] = {15 , 2 , 4 , 8 , 9 , 5, 10 , 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum =  23 ;

    subarray_check(arr , n , sum );

    return(0);
}
