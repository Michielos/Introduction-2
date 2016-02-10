/**********************************************************
main.c, analyses exam grades, Michiel Oom, 5-2-2016, v1
**********************************************************/

#include <stdio.h>
#include "mylib.h"

int main( void )
{
	int count=0;
	float avg=0;
	float std=0;
	float grades[MAXLINE];
	int studID[MAXLINE];

	
	M_ReadGrades("grades.dat",&count,grades,studID);

	M_AvgGrade(grades,count,&avg);

	//M_std(grades,count,&std);


	int a=3;
	printf("%i students participated in the exam\n",count);
	printf("Student %i scored a %f\n",studID[a],grades[a]);
	printf("The average grade was %f\n",avg);
	//printf("With a standard deviation of %f\n",std);
	
	//WriteResults(count,avg);
	
	
	return 0;
}
