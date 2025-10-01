#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}Node;

void buildlinklist(Node act[]){
	int i;
	Node *head=act;
	for(i=0;i<3;i++){
		head->data=i;
		if(head->data==2){
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
		printf("%d\t",head->data);
		head=head->next;
	}
}
int main(){
	Node act[3],*now=&act[0];
	Node e;
	buildlinklist(act);
	while(now!=NULL){
		if(now->data==1){
			printf("found\n");
			Node *loc=now->next;
			e.data=99;
			now->next=&e;
			e.next=loc;
		}
		now=now->next;
	}
	printnode(act);
} 
