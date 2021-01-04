/* This program counts no of vowels in a line on runtine given via console */
#include<stdio.h>
#include<stdlib.h>
#define MAX_STR_SIZE			1024
#define DELIMITER_NEWLINE		'\n'
#define ZERO				0
#define ESC				27
#define TEXT_a				'a'
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
		if ( inchar == 'A' || inchar == 'a' || inchar == 'E' ||
		     inchar == 'e' || inchar == 'I' || inchar == 'i' ||
		     inchar == 'o' || inchar == 'O' || inchar == 'U' || 
		     inchar == 'u' )
		{
			Count++;
		}
	}while ( inchar != DELIMITER_NEWLINE );

	printf("No of vowels text holds:%d\n",Count);
	return ZERO;
}
