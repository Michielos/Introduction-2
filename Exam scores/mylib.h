#define MAXLINE 500

void M_ReadGrades(char* filename,int *count,float *grades,int *studID);

void M_AvgGrade(float* grades,int count,float *avg);

void M_std(float* grades,int count,float *std);

void WriteResults(int count,float avg);
