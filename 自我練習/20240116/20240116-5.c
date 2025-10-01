#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
	char alpha;
	struct node *next;
}Node;

void buildlinklist(Node act[],char letter[]){
	int i;
	Node *head=act;
	for(i=0;i<strlen(letter);i++){
		head->alpha=letter[i];
		if(head->alpha=='R'){
			head->next=NULL;
			break;
		}
		else{
			head->next=&act[i+1];
		}
		head=head->next;
	}
}

void printnode(Node *head){
	while(head!=NULL){
		printf("%c\t",head->alpha);
		head=head->next;
	}
	printf("\n");
}


int main(){
	char letter[5]={'W','E','A','R'};
	char target='E';
	Node act[4],*now=&act[0],*temp;
	Node e;
	buildlinklist(act,letter);
	printnode(act);
	while(now!=NULL){
		if(now->alpha==target){
			temp->next=now->next;
			break;
		}
		temp=now;
		now=now->next;
	}
	printnode(act);
}  
