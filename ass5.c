#include <stdio.h>

int main()
{
	int integerType;
	char charType;
	float floatType;
	double doubleType;
    long longinttype ;
    unsigned int unsignedinttype ;
    long double longdoubletype ;




	printf("Size of int is: %ld\n",sizeof(integerType));
	printf("Size of char is: %ld\n",sizeof(charType));
    printf("Size of float is: %ld\n",sizeof(floatType));
	printf("Size of double is: %ld\n",sizeof(doubleType));
    printf("Size of long is: %ld\n",sizeof(longinttype));
    printf("Size of unsigned int is: %ld\n",sizeof(unsignedinttype));
    printf("Size of long double is: %ld\n",sizeof(longdoubletype));


	return 0;
}
