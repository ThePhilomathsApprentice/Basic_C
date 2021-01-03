/* This program illustrate string reverse*/
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
 * Function Name : strcmp()
 * Arguments	 : char *str1 , char *str2
 * Return value	 : ZERO, NEGATIVE, POSTIVE
 * Description	 : Compares the two given strings,Continues comparing
 * 		   until NULL character is reached.
 * 		    -On SUCCESS returns ZERO.
 * 		     if difference of Ascii value of first string character 
 * 		     is grater returns postive else negative if difference
 * 		     is negative
 *
 * ******************************************************************/
int strcmp(char *str1,char *str2)
{
	while (  *str1 == *str2 )
	{
		if(*str1 == '\0')
			return SUCCESS;
		str1++;
		str2++;
	}

	return (*str1 - *str2);
}
int main(int argc,char *argv[])
{
	int index_i = INT_ZERO;			/* Holds the index operator  */
	int StrArray[MAX_STR_SIZE];		/* Holds maximum string size */

	if ( argc != MAX_ALLOWED_ARGS )
	{
		printf("Invalid Arguments\n");
		printf("Enter string\n");
		printf("eg:strcpy.out hellotest hellotest\n");
		exit(EXIT_FAILURE);
	}
	if ( strcmp(argv[STR1_ARG_INDEX],argv[STR2_ARG_INDEX]) == SUCCESS )
	{
		printf("Strings Matched\n");
	}
	else
	{
		printf("String Unmatched\n");
	}
	return ZERO;
}

