/* This program reads characters until new line */
#include<stdio.h>
#define NEW_LINE		'\n'
int main()
{
	char readChar;
	printf("Enter Characters\n");
	do{
		scanf("%c",&readChar);
	}while( readChar != NEW_LINE );
	return 0;
}
