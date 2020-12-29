/* This program is to test, whether a number is armstrong or Not. */
#include<stdio.h>
#include<stdlib.h>
#define ZERO				0
#define ONE				1
#define DIV_FACTOR			10
#define MAX_SIZE			10
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

int main()
{
	int GivenNo = ZERO;	/* Holds the Given number 		   */
	int tempNo  = ZERO;	/* Holds the temporary number		   */
	int orderNo = ZERO;
	int tempHold= ZERO;
	int total   = ZERO;
	int index_i = ZERO;

	printf("Enter the number\r\n");
	scanf("%d",&GivenNo);
	
	tempNo = GivenNo;
	orderNo = order(tempNo);
	while ( tempNo != ZERO )
	{
		tempHold = tempNo % DIV_FACTOR;
		total = total + power(tempHold,orderNo);
		printf("-------->>>total:%d\r\n",total);
		tempNo = tempNo / DIV_FACTOR;
	}
	if ( total == GivenNo )
		printf("GivenNo:%d is Armstrong\r\n",GivenNo);
	else
		printf("GivenNo:%d is  Not Armstrong\r\n",GivenNo);
}
