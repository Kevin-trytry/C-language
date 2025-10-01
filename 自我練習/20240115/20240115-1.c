#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("example:\n\n");
	int i;
	struct employee //ÃÑ§O¦r
	{
		char id[6];
		char name[12];
		int age;
		char phone[12];
		char nation[12]; 
	};
	
	struct employee normal={"1001","Logic",28,"0912345678x","R.O.C"};
	struct employee group[3]={
	{"M001","David",27,"091356789x","Canada"},
	{"M002","Susan",26,"092356789x","Africa"},
	{"M003","Johnson",25,"093256789x","U.S."}};
	struct employee *ptr=&normal;
	printf("normal:\n");
	printf("%s\n%s\n%d\n\n", normal.id, normal.name, normal.age);
	for(i=0;i<3;i++){
		printf("group[%d]:\n",i);
		printf("%s\n%s\n%d\n", group[i].id, group[i].name, group[i].age);	
	}
	printf("\nptr:\n");
	printf("%s\n%s\n%d",ptr->id, ptr->name, ptr->age);
	
	//exercise
	int max=0,num;
	float sum=0;
	printf("\nexercise:\n\n");
	struct student{
		int no;
		int score;
	};
	struct student midterm[5];
	for(i=0;i<5;i++){
		printf("Input the %d student's number:",i+1);
		scanf("%d",&midterm[i].no);
		printf("Input the %d student's score:",i+1);
		scanf("%d",&midterm[i].score);
	}
	for(i=0;i<5;i++){
		if(midterm[i].score>max){
			max=midterm[i].score;
			num=i;
		}
		sum+=midterm[i].score;
	}
	printf("The highest score student is number %d, and the score is %d\n",num+=1,max);
	printf("Average:%.1f",sum/5.0);
}
