#include <stdio.h>
#include <conio.h>
void swap(int x,int y) ;

void main()
{
    int a,b ;
    
    printf("Enter a :\n ");
    scanf("%d",&a);
    printf("Enter b :\n ");
    scanf("%d",&b);

    swap(a,b) ;

getch();

}

void swap(int x, int y)
{
        printf("After swapping a is %d & b is %d ",y,x);

}