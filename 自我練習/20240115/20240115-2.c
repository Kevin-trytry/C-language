#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	struct guardian{
		char name[11];
		char phone[11];
	}; 
	struct student{
		int no;
		char name[11];
		int score;
		struct guardian protector;
	};
	int i;
	struct student studentdata[3];
	for(i=0;i<3;i++){
		printf("\nEnter the %d student's data:\n",i+1);
		printf("number:");
		scanf("%d",&studentdata[i].no);
		printf("name:");
		scanf("%s",&studentdata[i].name);
		printf("score:");
		scanf("%d",&studentdata[i].score);
		printf("guardian's name:");
		scanf("%s",&studentdata[i].protector.name);
		printf("guardian's phone:");
		scanf("%s",&studentdata[i].protector.phone);
	}
	
	printf("\nThe protectors's data of students whose score is under 60:\n");
	for(i=0;i<3;i++){
		if(studentdata[i].score<60){
			printf("number:%d\n",studentdata[i].no);
			printf("name:%s\n",studentdata[i].name);
			printf("protector's name:%s\n",studentdata[i].protector.name);
			printf("protector's phone:%s",studentdata[i].protector.phone);
			printf("\n\n");
		}
	}
} 
