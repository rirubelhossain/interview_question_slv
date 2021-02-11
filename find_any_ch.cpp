#include <bits/stdc++.h>
using namespace std ;

int count_digit(int number )
{
        int temp = 0 ;
        int store ;
        while(number != 0 )
        {
            store = number % 10 ;
            if( store == 3)++temp ;
            number /= 10 ;
        }
        return(temp);
}
int main()
{
    int number ;
    cin>>number ;
    int final_count = 0 ;
    for(int i = 1 ; i <= number ; ++i )
    {
        final_count = final_count + count_digit(i);
    }
    cout<<final_count<<endl;

    return(0) ;
}
