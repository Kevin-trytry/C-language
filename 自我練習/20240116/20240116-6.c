#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
	char alpha;
	struct node *next;
}Node;

void printnode(Node *head){
	while(head!=NULL){
		printf("%c\t",head->alpha);
		head=head->next;
	}
	printf("\n");
}


int main(){
	int i;
	Node *head=NULL,*now=NULL;
	for(i=0;i<5;i++){
		//create new node
		now=(Node*)malloc(sizeof(Node));
		now->alpha='A'+i;
		now->next=NULL;
		//connect to linklist
		now->next=head;
		head=now;
		printnode(head);
	}
	printf("------------------------------\n");
	while(head!=NULL){
		Node *del=head;
		head=head->next;
		printnode(head);
		free(del);
	}
}  
