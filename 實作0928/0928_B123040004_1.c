#include<stdio.h>
int main()
{
	int R;
	printf("Please enter the radius of the sphere (integer):");
	scanf("%d",&R);
	float V1=4*3.14159265359*R*R*R/3;
	double V2=4*3.14159265359*R*R*R/3;
	printf("Sphere volume as a single precision floating point number:%f\n",V1);
	printf("Sphere volume as a double precision floating point number:%lf",V2); 
 } 
