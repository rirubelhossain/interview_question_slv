#include <bits/stdc++.h>
using namespace std ;


int main()
{
    int t ;
    cin>>t ;
    getchar();
    while(t--)
    {
        string a ="";
        getline(cin , a );

        sort(a.begin() , a.end());
        int len = a.length();

        string b ;
        for(int i = len - 1 ; i >= 0 ; --i )
        {
            b += a[i] ;
        }
        cout<<b<<endl;
    }


    return(0);
}
