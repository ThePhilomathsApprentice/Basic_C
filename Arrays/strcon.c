/* This program illustrate string  concatenate*/
#include<stdio.h>
#include<stdlib.h>
#define MAX_ALLOWED_ARGS			3
#define MAX_STR_SIZE				50
#define ZERO					0
#define INT_ZERO				0
#define STR1_ARG_INDEX				1
#define STR2_ARG_INDEX				2
#define SUCCESS					0

/********************************************************************
 * Function Name : strcon()
 * Arguments	 : char *str1 , char *str2
 * Return value	 : Char *strptr
 * Description	 : Concatenate two strings and return concatenated
 *			string pointer
 * ******************************************************************/
char* strcon(char *str1,char *str2)
{
	int strcount	= INT_ZERO;		/* Holds the string count   */

	while (  *str1 != '\0' )
	{
		//printf("*str1:%c:%u\t",*str1,str1);
		str1++;
		strcount++;
	}

	while ( *str2 != '\0') 
	{
		*str1 = *str2;
		//printf("*str1:%c:%u\t",*str1,str1);
		str1++;
		strcount++;
		str2++;
	}
	/* Setting last byte NULL */
	*str1 = '\0';

	return str1-strcount;
}
int main(int argc,char *argv[])
{
	if ( argc != MAX_ALLOWED_ARGS )
	{
		printf("Invalid Arguments\n");
		printf("Enter string\n");
		printf("eg:strcon.out hellotest hellotest\n");
		exit(EXIT_FAILURE);
	}
	printf("String concatenated:%s\n",
		strcon(argv[STR1_ARG_INDEX],argv[STR2_ARG_INDEX]));
	return ZERO;
}

