#include <bits/stdc++.h>
using namespace std ;

///371

int digit_count(int number )
{
    float catch_ = log10(number);
    int a = floor(catch_) + 1 ;
    return(a) ;
}
void check_armostong(int number )
{
    int var ;
    int store ;
    int sum = 0 ;
    int number_original = number ;
    int digit = digit_count(number) ;
    while( number != 0 )
    {
        var = number % 10 ;
        sum += pow(var , digit );
        number /= 10 ;
    }
    if( number_original == sum )cout<<"This is armostong number \n";
    else cout<<"this is not armostong number \n" ;
}
int main()
{
    int number ;
    cin>>number ;
    check_armostong(number) ;

}
