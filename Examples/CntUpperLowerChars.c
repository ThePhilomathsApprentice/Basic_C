/* This program is to count upper & lower characters in a string */
#include<stdio.h>
#define ZERO			0

void countUpperLowerchars(char *str)
{
	int index_i    = ZERO;
	int upperCount = ZERO;
	int lowerCount = ZERO;
	printf("string :%s\n",str);
	while ( str[index_i]!= NULL )
	{
		if ( str[index_i] >= 'A' && str[index_i] <= 'Z' )
		{
			upperCount++;
		}
		else if ( str[index_i] >= 'a' && str[index_i] <= 'z' )
		{
			lowerCount++;
		}
		index_i++;
	}
	printf("Total No of count Upper case characters:%d\n",upperCount);
	printf("Total No of count Lower case characters:%d\n",lowerCount);
}
int main(int argc,int *argv[])
{
	int count = ZERO;
	countUpperLowerchars((char *)argv[1]);
	return 0;
}
