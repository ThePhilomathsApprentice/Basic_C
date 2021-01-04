/* This program is to print array elements */
#include<stdio.h>
#define MAX_ARRAY_SIZE			10
#define ZERO				0
int main()
{
	int Array[MAX_ARRAY_SIZE] = {1,2,3,4,5,6,7,8,9,10};
	int index_i = ZERO;

	for ( index_i = ZERO; index_i < MAX_ARRAY_SIZE; index_i++ )
	{
		printf("Array[%d]:%d\r\n",index_i,Array[index_i]);
	}
	return ZERO;
}
