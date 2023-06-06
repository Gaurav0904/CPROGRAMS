#include <stdio.h>
#include <conio.h>
void fibonacci(int n);

void main()
{
    int n;

    printf("Enter n for fibonacci series:\n");
    scanf("%d",&n);

    fibonacci(n); 
    
getch();
}

void fibonacci(int n)
{
    int a=0 , b=1, c ;

    if(n==1)
    {
    printf("%d",a);
    }

    if(n==2)
    {
        printf("%d %d ",a,b);
    }

    if(n>=3)
    {
        printf("%d %d",a,b);

        for(int i=3 ; i<=n ; i++)
        {
            c=a+b ;
            printf(" %d",c);
            a=b;
            b=c;
        }
    }
}