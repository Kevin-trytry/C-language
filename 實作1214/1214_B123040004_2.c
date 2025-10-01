#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

typedef struct Person{
	char name[50];
	int age;
	double money;
	double debt;
}person;

void initialization(char name[]);

int main(){
	int i;
	char inputname[50];	
	while(1){
		printf("Input name:");
		scanf("%s",inputname);
		if(inputname[0]=='0'){
			printf("Finish!");
			break;	
		}
		else
			initialization(inputname);
	}	

}

void initialization(char name[]){
	person *newnode=(person*)malloc(sizeof(person));
	strcpy(newnode->name, name);
	newnode->age=10+rand()%51;
	newnode->money=150000+rand()%150001;
	newnode->debt=50000+rand()%50001;
	printf("Name:%s\n", newnode->name);
	printf("Age:%d\n", newnode->age);
	printf("Money:%.0lf\n", newnode->money);
	printf("Debt:%.0lf\n", newnode->debt);
	free(newnode);
}
