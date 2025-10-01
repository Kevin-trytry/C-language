#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void GCD(int input1, int input2){
	int x=input1,y=input2,t;
	if (input1>input2){
		while(y!=0){
			t=x%y;
			x=y;
			y=t;
		}
		printf("The GCD of (%d, %d) is %d\n",input1, input2,x);
	}
	else{
		while(x!=0){
			t=y%x;
			y=x;
			x=t;
		}
		printf("The GCD of (%d, %d) is %d\n",input1, input2,y);
	}
	
}
int main(){
	int a,b;
	FILE *file=fopen("GCD.txt","r");
	while(fscanf(file,"%d",&a)!=EOF){
		fscanf(file,"%d",&b);
		GCD(a,b);
	}
	fclose(file);
	
} 
