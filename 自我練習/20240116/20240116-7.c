#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next; 
}Node;

void printnode(Node *top){
	while(top!=NULL){
		printf("%d ",top->data);
		top=top->next;
	}
	printf("\n");
}

Node *reversenode(Node *top){
	Node *current=top,*previous=NULL,*preceding=top->next;
	while(preceding!=NULL){
		current->next=previous;
		previous=current;
		current=preceding;
		preceding=preceding->next;
	}
	
	current->next=previous;
	top=current;
	return top;
}

int main(){
	int i,input;
	
	Node *head=NULL,*now=NULL;
	printf("head = ");
	while(scanf("%d",&input)!=EOF){
		now=(Node*)malloc(sizeof(Node));
		now->data=input;
		now->next=NULL;
		
		now->next=head;
		head=now;
	}
	printf("Before:\n");
	printnode(head);
	printf("After:\n");
	head=reversenode(head);
	printnode(head);
}
