#include<stdio.h>
#include<stdlib.h>
int main(){
	struct mystruct{
		char name[10];
		int id;
		char sex;
		float height;
	};
	struct mystruct user[10];
	strcpy(user[1].name,"Kevin");
	user[1].id=43;
	user[1].sex='M';
	user[1].height=171.5;
	printf("%s\n",user[1].name);
	printf("%d",user[1].id);
}
