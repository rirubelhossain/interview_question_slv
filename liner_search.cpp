#include <bits/stdc++.h>
using namespace std ;


int main()
{
    int array[] = { 1 , 2, 2, 3, 4};
    int key ;
    int n = sizeof(array) / sizeof(array[0]) ;

    cout<<"enter key to find value \n" ;
    cin>>key ;

    int lock =0;
    int position ;
    int value ;
    for(int i = 0 ; i < n ; ++i )
        if( array[i] == key)
        {
            lock = 1 ;
            value = array[i];
            position = i +1 ;
            break ;
        }

    if( lock == 1 )
    {
        cout<<"Yes\n";
        cout<<"the value is = "<<value<<endl;
        cout<<"And the position is = "<<position<<endl;
    }else{
        cout<<"the value is not present in the array\n";
    }



    return(0);
}
