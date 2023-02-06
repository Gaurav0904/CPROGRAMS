#include <stdio.h>

int main()
{
    int n, r, sum  ;
    
    printf("Enter a four digit number: ");
    scanf("%d",&n);

    r = n%10 ;
    n = n/10 ;
    n = n/10 ;
    n = n/10 ;

    sum = r + n ;
    printf("The sum of first and last digit is: %d ", sum);

    return 0 ;


}