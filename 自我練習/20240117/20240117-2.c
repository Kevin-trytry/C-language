#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

int main(){
	Node *head=NULL;
	push(&head,'H');
	push(&head,'E');
	push(&head,'D');
	printnode(head);
	Node g;
	g.alpha='G';
	g.next=NULL;
	Node *now=head,*new=&g,*pre=NULL;
	while(now!=NULL&&now->alpha < new->alpha) {
		pre=now;
		now=now->next;
	}
	
	if(pre==NULL){
		new->next=head;
		head=new;
	}
	else{
		pre->next=new;
		new->next=now;
	}
	printnode(head);
	
	Node x;
	x.alpha='X';
	x.next=NULL;
	now=head,new=&x,pre=NULL;
	while(now!=NULL&&now->alpha < new->alpha) {
		pre=now;
		now=now->next;
	}
	
	if(pre==NULL){
		new->next=head;
		head=new;
	}
	else{
		pre->next=new;
		new->next=now;
	}
	printnode(head);
}
