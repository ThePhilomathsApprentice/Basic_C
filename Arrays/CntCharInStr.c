/* This program is to illustrate no of characters in string */
#include<stdio.h>
#include<stdlib.h>
#define MAX_ALLOWED_ARGS			2
#define ZERO					0
#define INT_ZERO				0
#define STR_ARG_INDEX				1
int main(int argc,char *argv[])
{
	int index_i = INT_ZERO;			/* Holds the index operator */
	
	if ( argc != MAX_ALLOWED_ARGS )
	{
		printf("Invalid Arguments\n");
		printf("Enter string\n");
		printf("eg:CntCharInStr.out hellotest\n");
		exit(EXIT_FAILURE);
	}
	
	while ( *(argv[STR_ARG_INDEX] + index_i) != NULL )
	{
		index_i++;
	}
	printf("No of characters in a string are:%d\n",index_i);
}

