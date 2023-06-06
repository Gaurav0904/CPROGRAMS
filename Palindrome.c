#include <stdio.h>
#include <conio.h>

void main()
{
    int n,temp,remainder,reverse = 0 ;
    
    printf("Enter a number n : \n") ;
    scanf("%d",&n);

    temp = n ;

    while(n>0)
    {
        remainder = n%10 ;
        n = n/10 ;
        reverse = reverse*10 + remainder ;
    }

    if(reverse == temp)
    {
        printf("PALINDROME");
    }
    else 
    {
        printf("NOT PALINDROME");
    }

    getch();
}
