#include <bits/stdc++.h>
using namespace std ;

void function_armostron(int number , int catch_value)
{
    int fake_number = number ;
    int store = 0 ;
    while( number != 0)
    {
        int print = number % 10 ;
        int a_result = pow(print , catch_value);
        store += a_result ;
        number /= 10;
    }
    if( store == fake_number)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
int main()
{
    int t ;
    cin>>t ;

    while(t--)
    {
        int number ;
        cin>>number ;
        float a = log10(number);///digit counting
        float final_value = floor(a) + 1;
        function_armostron(number , final_value);///passing main number and total number of digit
    }
    return(0);
}
