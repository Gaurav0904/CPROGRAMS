#include <stdio.h>

int power (int , int );

void main( )

{

    int a , b, exp ;

    printf("Enter a & b");
    scanf("%d%d",&a,&b) ;

    exp = power(a,b) ;

    printf("%d raised to %d is %d  ",a,b,exp);


}

int power(int a, int b)
{
    int exp = a ;

    if(b==1)
    {
        return a ;
    }

    else{
    for(int i = 2; i<=b;i++)
    {
        exp = exp*a ;
    } 

    return exp ;
    }
}