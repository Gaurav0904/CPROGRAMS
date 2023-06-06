#include <stdio.h>
#include <conio.h>

void main()
{
    int n , i , a1 = 0 , a2 = 1 , a3 ;
    
    printf("Enter n for Fibonacci Series : \n");
    scanf("%d",&n);

    if(n==1)
    {
        printf("%d ", a1);
    }
    if(n==2)
    {
        printf("%d %d " ,a1,a2);
    }
    if(n>=3)
    {
        printf("%d %d ",a1,a2);
        
        for(i=3;i<=n;i++)
        {
            a3 = a2 + a1 ;
            printf("%d ",a3);
            a1 = a2 ;
            a2 = a3 ;
        }
    }

getch();

}