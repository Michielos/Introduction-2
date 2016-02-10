/**********************************************************************************
mylib.c, functions for analysis of grades, Michiel Oom, 6-2-2016, v1
**********************************************************************************/

#include <stdio.h>
#include "mylib.h"
#include <math.h>

void M_ReadGrades(char* filename,int *count,float *grades,int *studID)
{

	int sID;
	float grade;
	int i=0;
	FILE *gradlist;
	

	if((gradlist=fopen(filename,"r"))==NULL)
		{
		printf("error\n");
		}

	while((fscanf(gradlist,"%i %f",&sID,&grade))!=EOF)
	{
		grades[i]=grade;
		studID[i]=sID;
		i++;
	}


	fclose(gradlist);


	if(i>=MAXLINE)
	{
		printf("Warning: increase MAXLINE to %i/n",i);
	}
		

	*count=i;
}

void M_AvgGrade(float* grades,int count,float *avg)
{
	float sum=0;

	for(int i=0;i<=count;i++)
	{
	sum+=grades[i];
	}
	*avg=sum/count;
}

void M_std(float* grades,int count,float *std)
{
}


void WriteResults(int count,float avg)
{
	printf("%i students participated in the exam\n",count);
	
	printf("The average grade was %f\n",avg);
}





