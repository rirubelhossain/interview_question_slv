#include <bits/stdc++.h>
using namespace std ;

int isdigit_check(string a )
{
    for(int i = 0  ; i < a.length() ; ++i)
    {
        if(!(a[i] >= '0' and a[i] <= '9'))
        {
            return(1);
        }
        else
            return(0);
    }
}

int main()
{
    string a ;
    cin>>a ;


    if(!isdigit_check(a))
        cout<<"digit\n";
    else
        cout<<"string\n";

    return(0) ;
}
