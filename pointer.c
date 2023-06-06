#include <stdio.h>
#include <conio.h>

void main()
{
    int a = 7 ;
    int* ptr = &a ;
    int* ptr1 = NULL ;

    printf("Address of a is %x \n", ptr);
    printf("Address of a is %x \n", &a); 
    printf("Address of pointer(unknown to us) to a i.e ptr is %x \n", &ptr);
    printf("Value of a is %d \n", *ptr);
    printf("Value of a is %d \n",a);
    printf("Address of SOME GARBAGE is %d \n", ptr1);

    
getch();
}