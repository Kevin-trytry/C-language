#include<stdio.h>
int main()
{
	int a=3600,b=1200,c=24000,d=500,e=3000,f=1800;
	int sum=0;										//宣告初始值 
	char ch1,ch2;
	printf("Did David run a red light?\n");	
	scanf("%c",&ch1);
	if (ch1=='y' || ch1=='Y')						//David闖紅燈，就執行下列程式 
			sum=sum+a;
	else
			sum=sum;
	printf("Was David speeding?\n");
	fflush(stdin);
	scanf("%c",&ch1);
	if (ch1=='y' || ch1=='Y')
			sum=sum+b;
	else
			sum=sum;
	printf("Does David have a driver's license?\n");
	fflush(stdin);
	scanf("%c",&ch1);
	if (ch1=='y' || ch1=='Y')
			sum=sum+c;
	else
			sum=sum;
	printf("Was David wearing his helmet?\n");
	fflush(stdin);
	scanf("%c",&ch2);
	if (ch2=='y' || ch2=='Y')
			sum=sum+d;
	else
			sum=sum;
	printf("Was David using his cellphone while riding?\n");
	fflush(stdin);
	scanf("%c",&ch2);
	if (ch2=='y' || ch2=='Y')
			sum=sum+e;
	else
			sum=sum;
	printf("Was David riding in opposite direction?\n");
	fflush(stdin);
	scanf("%c",&ch2);
	if (ch2=='y' || ch2=='Y')
			sum=sum+f;
	else
			sum=sum;
	printf("David haves to pay $%d",sum);
}
