/* This program is to convert a given number from decimal to Hexa decimal */
#include<stdio.h>
#define ZERO				0
#define SUCCESS				0
#define FAILURE				-1
#define DIV_FACTOR			16
#define MAX_COUNT_SIZE			10
/********************************************************************
 * Function Name : dec_to_oct()
 * Arguments	 : int number , int buffer, int *count
 * Return value	 : void 
 * Description	 : This function is used to convert decimal to octal 
 * ******************************************************************/
int dec_to_oct(int number,int *buff,int *count)
{
	int index_i = ZERO;		/* Holds index operator */

	while ( number != ZERO )
	{
		buff[index_i] = number % DIV_FACTOR;
		number = number / DIV_FACTOR;
		index_i++;
	}
	*count = index_i - 1;
	return SUCCESS;
}

int main()
{
       	/* Holds octal value single value */
	int HexaArray[MAX_COUNT_SIZE] = {ZERO};  	
	int DecNo   = ZERO;		/* Holds decimal number	     */
	int index_j = ZERO;		/* Holds index operator	     */
	int retVal  = ZERO; 		/* Holds return value	     */

	printf("Enter Decimal No:\n");
	scanf("%d",&DecNo);

	retVal = dec_to_oct( DecNo, HexaArray, &index_j );
	if ( retVal == SUCCESS )
	{
		printf("Hexa Value:\n");
		while ( index_j != -1 )
		{
			printf("%x\t",HexaArray[index_j]);
			index_j--;
		}
		printf("\n");
	}
}
