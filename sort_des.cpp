#include <bits/stdc++.h>
using namespace std ;

typedef long long int ll ;

int main()
{
    ll test_case ;
    cin>>test_case ;
    string a ;
    string b ;
    while(test_case--)
    {
        getline(cin , a );
        int len = a.length() ;
        sort(a.begin() , b.end());
        for(int i = len -1; i >= 0 ; --i )
        {
            b+=a[i] ;
        }

        cout<<b<<endl;
    }


    return(0);
}
