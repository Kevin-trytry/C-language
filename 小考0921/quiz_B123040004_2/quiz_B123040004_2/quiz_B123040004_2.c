#include<stdio.h>
int main()
{
	int dd, mm, yyyy;
	printf("Please enter date (dd/mm/yyyy)");
	scanf_s("%d%d%d", &dd, &mm, &yyyy);
	printf("The output date is:%d/%d/%d", yyyy, mm, dd);
}