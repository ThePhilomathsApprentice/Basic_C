/* This program set firt alphabet of a word capital on console */
#include<stdio.h>
#include<stdlib.h>
#define MAX_STR_SIZE				256
#define MIN_VALUE_OF_LOWER_CASE_ASCII		97
#define MAX_VALUE_OF_LOWER_CASE_ASCII		122
#define DELIMITER_SPACE				' '
#define ZERO					0
int main()
{
	char InputStr[MAX_STR_SIZE];	/* Holds the command string */
	char inchar;
	int  index_i = ZERO;
	int  Count   = ZERO;
	printf("Enter Sentence\n");
	do{
		inchar = getchar();
		if ( Count == ZERO )		
		{
			if ( inchar >= MIN_VALUE_OF_LOWER_CASE_ASCII && 
			     inchar <= MAX_VALUE_OF_LOWER_CASE_ASCII )
			{	
				InputStr[index_i] = inchar - 32;
				Count++;
			}
			else
			{
				InputStr[index_i] = inchar;
			}

		}
		else if ( inchar == DELIMITER_SPACE )
		{
			Count = ZERO;
			InputStr[index_i] = inchar;
		}
		else
		{
			InputStr[index_i] = inchar;
		}
		index_i++;

	}while ( inchar != '\n' );
	
	InputStr[index_i] = '\0';

	printf("Sentence is:%s\n",InputStr);
	return ZERO;
}
