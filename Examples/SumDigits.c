/* This Program is to test the sum of Digits */
#include<stdio.h>
#define ZERO				0
#define DIV_FACTOR			10
int SumDigits(int number)
{
	int Temp = ZERO;		/* Holds the temporary variable  */
	//int sum  = ZERO;		/* Holds the summation of numbers*/
	while ( number != ZERO )
	{
		Temp = Temp + number % DIV_FACTOR;
		//sum = sum + Temp;
		number = number / DIV_FACTOR;
	}
	return Temp;
}

int main()
{
	int GivenNo = ZERO;		/* Holds the given number 	 */
	printf("Enter the Number\r\n");
	scanf("%d",&GivenNo);
	printf("Summation of Digits:%d\r\n",SumDigits(GivenNo))	;
	return ZERO;
}
