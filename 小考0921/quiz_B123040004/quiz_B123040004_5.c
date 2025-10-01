#include<stdio.h>
int main()
{
	int N;
	printf("Enter the number of seconds(N):");
	scanf_s("%d", &N);
	printf("%d.seconds is equal to:",N);
	printf("%ddays, ",N/86400);
	int n1 =( N-(N / 86400)*86400)/3600;
	printf("%dhours, ",n1);
	int n2 = (N - (N / 86400) * 86400 - n1 * 3600)/60;
	printf("%dminutes, ", n2);
	int n3 = N -  (N/86400)*86400 - n1 * 3600 - n2 * 60;
	printf("%dseconds", n3);
}