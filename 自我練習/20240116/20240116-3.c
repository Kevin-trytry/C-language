#include<stdio.h>
#include<string.h>
typedef struct node{
	char alpha;
	struct node *next;
}Node;

void builtLLbyloop(char words[],Node act[]){
	int i;
	Node *ptr=act;
	for(i=0;i<strlen(words);i++){
		ptr->alpha=words[i];
		if(i==2){
			ptr->next=NULL;
		}
		else{
			ptr->next=&act[i+1];
		}
		
		printf("[%d] %c %p\n",i,ptr->alpha,ptr->next);
		ptr=ptr->next;
	}
}

void printNode(const Node *head){
	while(head!=NULL){
		printf("%c\t",head->alpha);
		head=head->next;
	}
	printf("\n");
}

int main(){
	//build a linked list
	char letter[4]={'A','G','O'};
	char target='G';
	Node act[3],*now=&act[0],x;
	builtLLbyloop(letter,act);
	//search position
	while(now!=NULL){
		if(now->alpha==target){
			printf("found\n");
			Node *loc=now->next;
			x.alpha='X';
			x.next=loc;
			now->next=&x;
			break;
		}
		now=now->next;
	}
	if(now==NULL){
		printf("Not found");
	}
	printNode(&act[0]);
}


