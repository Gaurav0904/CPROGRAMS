#include <stdio.h>
#include <conio.h>

void main()
{
    int fact = 1, i, n ;
    
    printf("ENTER n : \n") ; 
    scanf("%d",&n) ;

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }

    printf("The FACTORIAL OF %d IS : %d ",n,fact);

    getch();
}