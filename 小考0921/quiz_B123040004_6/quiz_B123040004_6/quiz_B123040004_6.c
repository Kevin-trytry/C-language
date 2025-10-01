#include<stdio.h>
int main()
{
	int N;
	float pi = 3.14;
	float square_root = 1.414;
	printf("Enter the side lehgth of the square (N):");
	scanf_s("%d", &N);
	float R = N * square_root / 2.0;
	float r = N / 2.0;
	printf("The difference between the areas is:%.2f", R*R*pi-r*r*pi);
	return 0;
}