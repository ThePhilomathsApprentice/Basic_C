/* This program is to Count no of digits in a given number */
#include<stdio.h>
#define ZERO 			0
#define DIV_FACTOR		10
int CountDigits(int Number)
{
	int DigitCount = ZERO;
	while ( Number != ZERO )
	{
		Number = Number / DIV_FACTOR;
		DigitCount++;
	}
	return DigitCount;
}
int main()
{
	int GivenNum = ZERO;
	printf("Enter the number\r\n");
	scanf("%d",&GivenNum);
	printf("Digits in Given No:%d\r\n",CountDigits(GivenNum));
	return ZERO;
}
