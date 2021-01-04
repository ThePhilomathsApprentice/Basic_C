/* Program to find the area of circle */
#include<stdio.h>
#include<stdlib.h>
#define MAX_ALLOWED_ARGS	2
#define PI 			3.14
#define INT_ZERO		0
#define ARG_1_RADIUS		1
float Area_of_circle(int Radius)
{
	return (PI * Radius * Radius);
}
int main(int argc,char *argv[])
{
	int CircleRadius = INT_ZERO;	/* Holds the radius of circle */
	if ( argc!= MAX_ALLOWED_ARGS )
	{
		printf("Invalid Arguments\n");
		printf("Eg : ./areaCircle (value_radius)\n");
		printf("Eg : ./areaCircle 12\n");
		exit(EXIT_FAILURE);
	}
	
	CircleRadius = atoi( argv[ARG_1_RADIUS] );
	printf( "Area of circle is :%0.2f\n",Area_of_circle(CircleRadius) );
	return INT_ZERO;
}

	
