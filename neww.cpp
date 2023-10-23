#include<iostream>
using namespace std ;

int fun(int []) ;

int main ()
{
    int a[5] = { 1,2,3,4,5 } ;
    int b ;
    b = fun(a) ;
    cout << endl << b ;
}

int fun (int x[])
{
    cout << "\na[0] : " << x[0] ;
    return (x[0] + x[1] + x[2]+ x[3]+ x[4]) ;
}