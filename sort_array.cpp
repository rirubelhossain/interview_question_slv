#include <bits/stdc++.h>
using namespace std ;


int main()
{
    int ar[] = { 1 , 3 , 2 };
    int n = sizeof(ar) / sizeof(ar[0]) ;

    sort(ar , ar + n , greater<int>());
    string a = "abdc";
    sort(a.begin() , a.end());
    cout<<a<<endl;
    sort(a.begin() , a.end(),greater<char>());
    cout<<a<<endl;



    for(int i = 0 ; i < n ; ++i )
        cout<<ar[i]<<" ";


    for(int i = 0; i < a.length() ; ++i)
        cout<<a[i];

    cout<<endl;
    string b ;

    getline(cin , b );
    int siz = b.length();
    cout<<b<<endl;
    cout<<siz<<endl;
    string ch ;
    ch = b[0] ;
    for(int i = 0 ; i < siz ; ++i)
    {

        if( int(b[i]) == 32)
        {
            ch+=b[i+1];
        }
    }
    cout<<ch<<endl;








    return(0);
}
