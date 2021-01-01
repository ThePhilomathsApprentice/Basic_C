/* This program is to illustrate binary search */
#include<stdio.h>
#define INT_ZERO				0
#define KEY_VALUE				70
#define DIV_FACTOR				2
#define ONE					1
#define ZERO					0
int main()
{
	int arr[] = {10,20,30,40,50,60,70,80,90,100};
	int key = KEY_VALUE;
	int leftSide = INT_ZERO; 
	int rightSide = sizeof (arr) / sizeof (arr[INT_ZERO]);
	int index_m;
	int Not_FoundFlag = ONE;
	while ( leftSide <= rightSide )
	{
		index_m = (leftSide + rightSide) / DIV_FACTOR;
		if ( key < arr[index_m] )
		{
			rightSide = index_m - ONE;
		}
		else if ( key > arr[index_m])
		{
			leftSide = index_m + ONE;
		}
		else if ( key == arr[index_m] )
		{
			printf("Key Found\n");
			Not_FoundFlag = ZERO;
			break;
		}
	}
	if (Not_FoundFlag)
	{
		printf("Key Not found\n");
	}
	return ZERO;
}
