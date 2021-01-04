/* This program counts no of lines on runtine given via console */
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
	printf("Enter Sentence with lines\n");
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
		if ( inchar == DELIMITER_NEWLINE )
		{
			Count++;
		}
	}while ( inchar != TEXT_a );

	printf("No of lines text holds:%d\n",Count);
	return ZERO;
}
