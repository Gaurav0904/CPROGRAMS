#include <stdio.h>

int main()
{
int a, b, sum ;

printf("Enter number a \n");
scanf("%d",&a) ;

printf("Enter number b \n ");
scanf("%d",&b) ;
  
sum = a+b ;
  
printf("Sum of %d and %d is %d ", &a,&b,&sum) ;
  
  return 0 ;
}
  
