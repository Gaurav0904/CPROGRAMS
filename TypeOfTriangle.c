#include <stdio.h>
#include <conio.h>

void main()
{
    int a ,b ,c ;
    printf("Enter the sides of the triangle\n");
   
    printf("a : ");
    scanf("%d",&a);
    
    printf("b : ");
    scanf("%d",&b);
    
    printf("c : ");
    scanf("%d",&c);

    if(a==b && b==c)
    {
        printf("Equilateral Triangle");
    }
    if(a==b || b==c || c==a) 
    {
        printf("Isosceles Triangle");
    }
    else
    {
        printf("Scalene Triangle");
    }

    getch();
}