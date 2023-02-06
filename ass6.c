#include <stdio.h>

int main()
{
    char UPPERCASE , lowercase ;
    int ascii_value ;

    printf("Enter an uppercase letter:\n");
    scanf("%c",&UPPERCASE) ;

    ascii_value = UPPERCASE ;
    lowercase = ascii_value +32 ;

    printf("The lowercase is : %c\n",lowercase) ;

    return 0 ; 
}