#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	char alpha;
	struct node *next;
}Node;

void printNode(const Node *head);
void builtLLbyloop(char *words,Node *act);
int main(){
	/*Node a,c,t;
	a.alpha='A';
	a.next=&c;
	a.next->alpha='C';
	a.next->next=&t;
	a.next->next->alpha='T';
	a.next->next->next=NULL;
	printNode(&a);*/
	char letter[3]={'A','C','T'};
	Node act[3];
	builtLLbyloop(&letter[0],&act[0]);
	printNode(&act[0]);
	printf("%p %p %p",act[0].next,act[1].next,act[2].next);
}
void builtLLbyloop(char *words,Node *act){
	int i;
	Node *now=act;
	for(i=0;i<3;i++){
		now->alpha=words[i];
		if(i==2){
			now->next=NULL;
		}
		else{
			now->next=&act[i+1];
		}
		
		printf("[%d] %c %p\n",i,now->alpha,now->next);
		now=now->next;
	}
}
void printNode(const Node *head){
	while(head!=NULL){
		printf("%c\t",head->alpha);
		head=head->next;
	}
	printf("\n");
}
