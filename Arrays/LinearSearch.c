/* Program represents the linear search */
#include<stdio.h>
#include<stdlib.h>
#define INT_ZERO				0
#define FAILURE					-1
#define ZERO					0
int search(int arr[],int maxindeX, int val)
{
	int index_i = INT_ZERO;
	int retVal  = FAILURE;
	for (index_i = INT_ZERO; index_i < maxindeX; index_i++ )
	{
		if (arr[index_i] == val)
		{
			retVal = index_i;
			break;
		}
		else
		{
			retVal = FAILURE;
		}
	}
	return retVal;
}
int main()
{
	int arr[] = {11 ,22,33,44,55,66,77,88,99,100};
	int in_Number;
	int ArrayElements;
	printf ("Enter Number:\n");
	scanf("%d",&in_Number);

	ArrayElements = sizeof(arr) / sizeof(arr[INT_ZERO]);

	 ( search(arr,ArrayElements,in_Number) == FAILURE )
		 ? printf("Value is not present\n")
	 	 : printf("Value is present !!!!\n");
	 return ZERO;
}
