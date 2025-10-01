#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	char alpha;
	struct node *next;
}Node;

void printnode(Node *top){
	while(top!=NULL){
		printf("%c\t",top->alpha);
		top=top->next;
	}
	printf("\n\n");
}

void push(Node **stack,char letter){
	Node *temp=(Node*)malloc(sizeof(Node));
	temp->alpha=letter;
	temp->next=*stack;
	*stack=temp;
}

void pop(Node **stack){
	Node *temp=*stack;
	*stack=temp->next;
	free(temp);
}

void release(Node **stack){ //Free all nodes
	while(*stack!=NULL){
		Node *temp=*stack;
		*stack=temp->next;
		free(temp);
	}
}

int main(){
	Node *head=NULL;
	int i;
	for(i=0;i<=25;i++){
		push(&head,'Z'-i);
	}
	printnode(head);
	release(&head);
	printf("%p",head);
} 
