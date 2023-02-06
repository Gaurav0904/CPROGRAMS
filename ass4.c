#include <stdio.h>

int main()
{

    int n ,r  ;

    printf("Enter an integer below :\n");
    scanf("%d",&n);

    r = n%10 ;
    printf("The last digit of the integer is %d", r) ;

    return 0;
}