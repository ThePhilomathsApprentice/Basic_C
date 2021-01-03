/* This program illustrate string reverse*/
#include<stdio.h>
#include<stdlib.h>
#define MAX_ALLOWED_ARGS			2
#define MAX_STR_SIZE				50
#define ZERO					0
#define INT_ZERO				0
#define STR_ARG_INDEX				1

char *str_rev(char *dest,char *src)
{
	int index_i	= INT_ZERO;		/* Holds the index operator */
	int index_j	= INT_ZERO;		/* Holds the index operator */
	int strcount	= INT_ZERO;		/* Holds the string count   */

	while ( src[index_i] != NULL )
	{
		index_i++;
		strcount++;
	}
	/* Setting last index as Null character */
	dest[strcount] = src[strcount];
	/* Decrementing index operator as NULL already copied */
	index_i = strcount - 1;
	for (index_j = INT_ZERO ; index_j < strcount; index_j++)
	{
		dest[index_j] = src[index_i];
		index_i--;
	}
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
	
	printf("String Reverse:%s\n",str_rev(StrArray,argv[STR_ARG_INDEX]));
}

