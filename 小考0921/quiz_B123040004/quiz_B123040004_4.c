#include<stdio.h>
int main()
{
	double f;
	scanf_s("%lf", &f);
	printf("%10.1lf\n", f);
	printf("%010.2lf\n",f);
	printf("%+10.4lf\n", f);
	printf("%-7.3lf", f);
}