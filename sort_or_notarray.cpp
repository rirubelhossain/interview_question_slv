#include <bits/stdc++.h>
using namespace std ;

int main()
{

    int t ;


    cin>>t ;

    while(t--)
    {
        int number ;
        cin>>number ;
        int ar[number];

        for(int i = 0 ; i < number ;++i)
        {
            cin>>ar[i] ;
        }
        int test = 0 ;
        for(int i = 0 ; i < number ; ++i )
        {
            if( ar[i] <= ar[i+1])
            {
                test = 0 ;
            }else{
                test = 1 ;
                break ;
            }
        }
        if( test == 1)cout<<"0"<<endl;
        else cout<<"1"<<endl;
    }
    return(0);
}
