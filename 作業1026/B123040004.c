#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	//1.
	int side_2,side_1,side_3,count=0;
	printf("Enter the value of n:");
	scanf("%d",&side_2);
	
	for(side_1=1;side_1<side_2;side_1++){
		side_3=side_2+1;
		while(side_1+side_2>side_3){
			printf("%d %d %d\n",side_1,side_2,side_3);
			count++;
			side_3+=1;
		}
	}
	printf("Number of triangles with n as the middle side length:%d\n\n\n",count);
 
 	//2.
 	srand(time(NULL));
 	int i,j,k=0,arr1[9],arr2[9];
 	printf("a.\n");
 	for(i=1;i<=3;i++){
 		printf("[");
 		for(j=1;j<=3;j++){
 			arr1[k]=rand()%100;
 			printf("%d ",arr1[k]);
		 	k++;
		 }
		printf("]\n");
	 }
	k=0;
	printf("b.\n");
	for(i=1;i<=3;i++){
 		printf("[");
 		for(j=1;j<=3;j++){
 			arr2[k]=rand()%100;
 			printf("%d ",arr2[k]);
		 	k++;
		 }
		printf("]\n");
	 }
	k=0;
	printf("add.\n");
	for(i=1;i<=3;i++){
 		printf("[");
 		for(j=1;j<=3;j++){
 			printf("%d ",arr1[k]+arr2[k]);
		 	k++;
		 }
		printf("]\n");
	 }
	k=0;
	printf("sub.\n");
	for(i=1;i<=3;i++){
 		printf("[");
 		for(j=1;j<=3;j++){
 			printf("%d ",arr1[k]-arr2[k]);
		 	k++;
		 }
		printf("]\n");
	 }
	

 } 
