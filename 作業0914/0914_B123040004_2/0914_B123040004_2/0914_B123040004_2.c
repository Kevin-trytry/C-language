#include<stdio.h>
int main()
{
	int n1 = 123;
	float f1 = 123.4567;
	double f2 = 123.4567;
	printf("���n1:123\n");
	printf("%%8d ���G:%d\n", n1);
	printf("%%.8d ���G:%.8d\n", n1);
	printf("%%06d ���G:%06d\n", n1);
	printf("���ׯB�I��f1:%f\n", f1);
	printf("���ׯB�I��f2:%lf\n", f2);
	printf("%%.4f ���G:%.4lf\n", f2);
	printf("%%10.4f ���G:%10.4lf\n", f2);
	printf("%%lf ���G:%lf", f2);
}