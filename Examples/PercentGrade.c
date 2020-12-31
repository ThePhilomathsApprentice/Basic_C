/* This program is to find percent and grade of student marks given */
#include<stdio.h>
#include<stdlib.h>
#define MAX_ALLOWED_ARGS	6
#define INT_ZERO		0
#define ARG_1_STU_MARK_1	1
#define ARG_2_STU_MARK_2	2
#define ARG_3_STU_MARK_3	3
#define ARG_4_STU_MARK_4	4
#define ARG_5_STU_MARK_5	5
#define TOTAL_MARKS		500.0
#define PERCENT_100		100
#define GRADE_Aplus		90
#define GRADE_A			80
#define GRADE_Bplus		70
#define GRADE_B			60
#define GRADE_Cplus		50
#define GRADE_C			40


int main(int argc,char *argv[])
{
	float StuPercent   = INT_ZERO;	/* Holds student percent      */
	int   total 	   = INT_ZERO;	/* Holds summation of marks   */
	int   index_i	   = INT_ZERO;	/* Holds the index operator   */

	if ( argc!= MAX_ALLOWED_ARGS )
	{
		printf("Invalid Arguments\n");
		printf("Eg : ./PercentGrade (Marks_1) "
		       "(Marks_2) (Marks_3) (Marks_4) (Marks_5)\n");
		printf("Eg : ./PercentGrade 45 50 65 88 91\n");
		exit(EXIT_FAILURE);
	}

	/* Calculating total of all marks */
	for (index_i = ARG_1_STU_MARK_1; index_i < MAX_ALLOWED_ARGS; index_i++)
	{
		total = total + atoi( argv[index_i] );
	}

	printf("Total marks obtained:%d\n",total);
	/* Calculating student percentage */
	
	StuPercent = ( ( (total / TOTAL_MARKS ) * PERCENT_100)  );
	printf( "Student Percent is:%0.2f\n",StuPercent);
	
	/* Calculating Grade of student */
	if ( StuPercent >= GRADE_Aplus ) 
		printf("Grade received A+\n");
	else if ( (StuPercent >= GRADE_A) && (StuPercent < GRADE_Aplus))
		printf("Grade received A\n");
	else if ( (StuPercent >= GRADE_Bplus) && (StuPercent < GRADE_A))
		printf("Grade received B+\n");
	else if ( (StuPercent >= GRADE_B) && (StuPercent < GRADE_Bplus))
		printf("Grade received B\n");
	else if ( (StuPercent >= GRADE_Cplus) && (StuPercent < GRADE_B))
		printf("Grade received C+\n");
	else if ( StuPercent < GRADE_Cplus)
		printf("Grade received C\n");

	return INT_ZERO;
}

	
