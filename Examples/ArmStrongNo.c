/* This program is to test, whether a number is armstrong or Not. */
#include<stdio.h>
#include<stdlib.h>
#define ZERO				0
#define ONE				1
#define DIV_FACTOR			10
#define MAX_SIZE			10
#define MAX_ALLOWED_ARGS		2
#define ARG_1_NO			1
#define SUCCESS				0
#define FAILURE				-1
int checkArmstrong_No(int Number)
{
	int tempNo = Number;
	int orderNo = order(tempNo);
	int total =ZERO;
	int retVal = ZERO;		/* Holds the return value */
	while ( tempNo != ZERO )
	{
		//tempHold = tempNo % DIV_FACTOR;
		//total = total + power(tempHold,orderNo);
		total = total + power( (tempNo % DIV_FACTOR),orderNo);
		printf("-------->>>total:%d\r\n",total);
		tempNo = tempNo / DIV_FACTOR;
	}
		
	if ( total == Number )
	{
		retVal = SUCCESS;
	}
	else
	{
		retVal = FAILURE;
	}
	return retVal;

}
int power(int base,int num)
{
	int result = ONE;
	int index_i = ONE;

	for ( index_i = ZERO; index_i < num;index_i++ )
	{
		result = result * base;
	}
	return result;
}
int order(int num)
{
	int count = ZERO;
	while ( num!= ZERO )
	{
		num = num / DIV_FACTOR;
		count++;
	}
	return count;
}

int main(int argc,char *argv[])
{
	int GivenNo = ZERO;	/* Holds the Given number 		   */
	int tempNo  = ZERO;	/* Holds the temporary number		   */
	int orderNo = ZERO;
	int tempHold= ZERO;
	int total   = ZERO;
	int index_i = ZERO;
	
	if ( argc != MAX_ALLOWED_ARGS )
	{
		printf("Invalid Argument\n");
		printf("eg ./armstrong.out (value_no)\n");
		printf("eg ./armstrong.out 371\n");
		exit(EXIT_FAILURE);
	}

	GivenNo = atoi ( argv[ARG_1_NO]);
	
	if ( checkArmstrong_No(GivenNo) == SUCCESS )
		printf("GivenNo:%d is Armstrong\r\n",GivenNo);
	else
		printf("GivenNo:%d is  Not Armstrong\r\n",GivenNo);
	return ZERO;
}
