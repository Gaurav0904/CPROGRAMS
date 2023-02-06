#include <stdio.h>

int main() 
{
    int n ,r1,r2,r3,r4,r5,sum ;

    printf("Enter a five digit number n :\n");
    scanf("%d",&n) ;

    r1 = n%10 ;
    n = n/10;

    r2 = n%10 ;
    n = n/10;

    r3 = n%10 ;
    n = n/10;

    r4 = n%10 ;
    n = n/10;

    r5 = n%10 ;
    n = n/10;

    sum = r1+r2+r3+r4+r5 ;

    printf("The sum is %d",sum);
    return 0 ;

}