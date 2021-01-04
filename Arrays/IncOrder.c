/* This programs sorts the given numbers in increasing order */
#include<stdio.h>
#include<stdlib.h>
#define MAX_ALLOWED_ARGS			6
#define INT_ZERO				0
#define SUB_ZEROTH_ARG				1
#define ONE					1
int main(int argc,char *argv[])
{
	int index_i = INT_ZERO;	/* Holds index operator */
	int index_j = INT_ZERO;	/* Holds index operator */
	int temp    = INT_ZERO;
	int Array[argc-SUB_ZEROTH_ARG];
	if ( argc != MAX_ALLOWED_ARGS )
	{
		printf("Invalid Arguments\n");
		printf("Enter 5 numbers followed by space\n");
		exit(EXIT_FAILURE);
	}
		

	for (index_i =INT_ZERO; index_i < (argc - SUB_ZEROTH_ARG); index_i++)
	{
		Array[index_i] = atoi(argv[index_i + ONE]);
	}
	printf("Elements in the before::");
	for (index_i = INT_ZERO;index_i < (argc - SUB_ZEROTH_ARG); index_i++)
	{
		printf("%d\t",Array[index_i]);
	}
	printf("\n");

	for (index_i = ONE; index_i < (argc - SUB_ZEROTH_ARG);index_i++)
	{
		for (index_j = INT_ZERO;index_j<(argc-SUB_ZEROTH_ARG-ONE); index_j++)
		{	
			if ( Array[index_j] > Array[index_j+ONE] )
			{
				temp = Array[index_j];
				Array[index_j] = Array[index_j+ONE];
				Array[index_j+ONE] = temp;
			}
		}
	}
	
	printf("Elements in the array in sorted form:");
	for (index_i = INT_ZERO;index_i < (argc - SUB_ZEROTH_ARG); index_i++)
	{
		printf("%d\t",Array[index_i]);
	}
	printf("\n");
}

