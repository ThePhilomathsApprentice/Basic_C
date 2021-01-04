/* This program illustrate string copy function */
#include<stdio.h>
#include<stdlib.h>
#define MAX_ALLOWED_ARGS			2
#define MAX_STR_SIZE				50
#define ZERO					0
#define INT_ZERO				0
#define STR_ARG_INDEX				1

char *strcpy(char *dest,char *src)
{
	int index_i	= INT_ZERO;		/* Holds the index operator */
	while ( src[index_i] != NULL )
	{
		dest[index_i] = src[index_i];
		index_i++;
	}
	dest[index_i] = '\0';
	return dest;
}
int main(int argc,char *argv[])
{
	int index_i = INT_ZERO;			/* Holds the index operator  */
	int StrArray[MAX_STR_SIZE];		/* Holds maximum string size */

	if ( argc != MAX_ALLOWED_ARGS )
	{
		printf("Invalid Arguments\n");
		printf("Enter string\n");
		printf("eg:strcpy.out hellotest\n");
		exit(EXIT_FAILURE);
	}
	
	printf("Given String using custom strcpy:%s\n",
	       strcpy(StrArray,argv[STR_ARG_INDEX]));
}

