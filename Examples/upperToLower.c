/* This program is to convert upper case to lower case or vice verssa */
#include<stdio.h>
#include<stdlib.h>
#define MIN_VALUE_OF_UPPER_CASE_ASCII		65
#define MAX_VALUE_OF_UPPER_CASE_ASCII		90
#define MIN_VALUE_OF_LOWER_CASE_ASCII		97
#define MAX_VALUE_OF_LOWER_CASE_ASCII		122
#define MAX_ALLOWED_ARGS			2
#define TRUE					1
#define ONE					1
void upperToLower(char *str)
{
	int index_i = 0;	
	printf("Converting to lower case");
	while ( str[index_i]!= NULL )
	{
		printf("%c\t",str[index_i] + 32 );
		index_i++;
	}

}
void LowerToUpper(char *str)
{
	int index_i = 0;
	printf("Converting to upper case");
	while ( str[index_i]!= NULL )
	{
		printf("%c\t",str[index_i] - 32 );
		index_i++;
	}

}
int main(int argc,char *argv[])
{
	if ( argc != MAX_ALLOWED_ARGS ) 
	{
		printf("Invalid Arguments\n");
		exit(TRUE);
	}
	printf("arv[1]:%d\n",*argv[1]);
	if ( ( *argv[ONE] >= MIN_VALUE_OF_UPPER_CASE_ASCII ) && 
	     ( *argv[ONE] <= MAX_VALUE_OF_UPPER_CASE_ASCII ) )
	{
		printf("Enter character is in upper case\n");
		upperToLower(argv[ONE]);
	}
	else if ( ( *argv[ONE] >= MIN_VALUE_OF_LOWER_CASE_ASCII ) && 
	          ( *argv[ONE] <= MAX_VALUE_OF_LOWER_CASE_ASCII ) )
	{
		printf("Enter character is in lower case\n");
		LowerToUpper(argv[ONE]);
	}
	return 0;
}
