#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char st[5], rst[5], i, j ;

    printf("Enter a string : \n");
    scanf("%s",st[5]);

    i = 0 ;
    j = strlen(st) - 1 ;

    while(j>=0)
    {
        rst[i] = st[j] ;
        j-- ;
        i++ ;

    }

    if(st==rst)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }

    getch();
}