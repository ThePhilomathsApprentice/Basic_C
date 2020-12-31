/* This program is to check whether a given character is alphabet or not */
#include<stdio.h>
#include<stdlib.h>
#define CHAR_ALPHABET_UPPERCASE_A		'A'
#define CHAR_ALPHABET_LOWERCASE_a		'a'
#define CHAR_ALPHABET_UPPERCASE_Z		'Z'
#define CHAR_ALPHABET_LOWERCASE_z		'z'
#define ALPHABET				 1
#define NOT_ALPHABET				 2
#define FAILURE					 -1
#define ONE					 1
#define ZERO					 0
int check_Alpha(int value)
{
	int retVal = FAILURE;
	if ( ( (value >= CHAR_ALPHABET_UPPERCASE_A) && 
	       (value <= CHAR_ALPHABET_UPPERCASE_Z) )
			      ||
	     ( (value >= CHAR_ALPHABET_LOWERCASE_a) && 
	       (value <= CHAR_ALPHABET_LOWERCASE_z) ))
	{
		retVal = ALPHABET;
	}
	else
	{
		retVal = NOT_ALPHABET;
	}
	return retVal;
}

int main(int argc,char *argv[])
{
	int ret_status = FAILURE;		/* Holds the return status */
	int GivenValue;		   /* Holds the Received value via console */
	do{
		printf("Enter a character\n");
		GivenValue = getchar();
	
		ret_status = check_Alpha(GivenValue);
		if ( ret_status == ALPHABET )
		{
			printf("Given value is:%c a Alphabet\r\n",GivenValue);
		}
		else
		{
			printf("Given value is:%c Not a Alphabet\n",GivenValue);
		}
	}while(GivenValue != '\n');
	return ZERO;
}
