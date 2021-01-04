/* This program reads a fahrenheit value and provides equivalent celcius value*/
#include<stdio.h>
#include<stdlib.h>
#define MAX_ALLOWED_ARGS	2
#define ARG_1_FAHREN_TEMP_VAL	1
#define INT_ZERO		0
#define FAHREN_TO_CELCIUS(temp_val)	( (5 / 9.0) * (temp_val - 32)) 


int main(int argc,char *argv[])
{
	int tempVal;	/* Holds the temp value in fahrenheit */
	if ( argc!= MAX_ALLOWED_ARGS )
	{
		printf("Invalid Arguments\n");
		printf("Eg : ./FahrenToCelcius.out (value_temp)\n");
		printf("Eg : ./FahrenToCelcius 45\n");
		exit(EXIT_FAILURE);
	}
	
	tempVal = atoi( argv[ARG_1_FAHREN_TEMP_VAL] );
	printf( "Temperature in celcius is :%0.2f\n",FAHREN_TO_CELCIUS(tempVal));
	return INT_ZERO;
}

