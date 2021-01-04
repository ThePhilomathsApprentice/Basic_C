/* Program find given number is even or odd */
#include<stdio.h>
#include<stdlib.h>
#define MAX_ALLOWED_ARGS		2
#define NUMBER_ARG_1			1
#define EVEN				0
#define ODD				1
#define FAILURE				-1
#define EVEN_CHECK_DIV			2
#define REMAINDER_ZERO			0
#define ZERO				0
int evenOdd(int number)
{
	int retVal = FAILURE;		/* Holds the return value */
	if ( (number % EVEN_CHECK_DIV) == REMAINDER_ZERO ) 
	{
		retVal = EVEN;
	}
	else
	{
		retVal = ODD;
	}
	return retVal;
}

int main(int argc,char *argv[])
{
	int inputNo;		/* Holds the given No */
	if ( argc != MAX_ALLOWED_ARGS )
	{
		printf("Error Arguments\r\n");
		exit(EXIT_FAILURE);
	}

	inputNo = atoi (argv[NUMBER_ARG_1]);
	if ( evenOdd(inputNo) == EVEN )
	{
		printf("Number :%d is Even\r\n",inputNo);
	}
	else
	{
		printf("Number :%d is Odd\r\n",inputNo);
	}
	return ZERO;

}
