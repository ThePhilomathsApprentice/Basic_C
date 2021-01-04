/* This program counts no of words on runtine given via console */
#include<stdio.h>
#include<stdlib.h>
#define MAX_STR_SIZE			1024
#define DELIMITER_SPACE			' '
#define ZERO				0
int main()
{
	char InputStr[MAX_STR_SIZE];	/* Holds the command string */
	char inchar;
	int  index_i = ZERO;
	int  Count   = ZERO;
	printf("Enter Sentence\n");
	/*
	scanf("%s",InputStr);
	fflush(stdin);

	while ( InputStr[index_i] != '\n' )
	{
		if( InputStr[index_i] == DELIMITER_SPACE )
		{
			Count++;
		}
		index_i++;
	}
	*/
	do{
		inchar = getchar();
		if ( inchar == DELIMITER_SPACE )
		{
			Count++;
		}
	}while ( inchar != '\n' );

	printf("No of words sentence holds:%d\n",Count+1);
	return ZERO;
}
