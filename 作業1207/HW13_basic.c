#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define quantity 5
//13.1 
typedef struct node{
	char Tittle[100];
	char Author[100];
	char Publicationyear[10];
	char BookID[10];
} Book;

void readBooksFromFile(FILE **file,Book books[],int amount){
	int j,i=0;
	for(i=0;i<amount;i++){
		j=0;
		while(fscanf(*file,"%c",&books[i].Tittle[j])){
			if(books[i].Tittle[j]==','){ 
				break;
			}
			j++;
		}
		j=0;
		while(fscanf(*file,"%c",&books[i].Author[j])){
			if(books[i].Author[j]==','){
				break;
			}
			j++;
		}
		j=0;
		while(fscanf(*file,"%c",&books[i].Publicationyear[j])){
			if(books[i].Publicationyear[j]==','){
				break;
			}
			j++;
		}
		j=0;
		while(fscanf(*file,"%c",&books[i].BookID[j])){
			if(books[i].BookID[j]=='\n'){
				break;
			}
			j++;
		}
	} 
}

void printBooks(Book books[]){
	int i;
	for(i=0;i<5;i++){
		printf("Tittle: %s",books[i].Tittle);
		printf("Author:%s",books[i].Author);
		printf("Year:%s",books[i].Publicationyear);
		printf("ID:%s",books[i].BookID);	
	}
}

void updateBookInfo(Book books[], int amount){
	char input[50],temp[50];
	int len,i;
	printf("Enter the ID of the book to update: ");
	fflush(stdin);
	fgets(input, 49, stdin);
	for(i=0;i<amount;i++){
		if(input[3]==books[i].BookID[4]){
			printf("Enter new tittle: ");
			fgets(input, 49, stdin);
			len=strlen(input);
			input[len-1]=',';
			strcpy(books[i].Tittle,input);
			
			printf("Enter new author: ");
			fgets(input, 49, stdin);
			len=strlen(input);
			input[len-1]=',';
			strcpy(temp,input);
			strcpy(input," ");
			strcat(input,temp);
			strcpy(books[i].Author,input);
			
			printf("Enter new year: ");
			fgets(input, 49, stdin);
			len=strlen(input);
			input[len-1]=',';
			strcpy(temp,input);
			strcpy(input," ");
			strcat(input,temp);
			strcpy(books[i].Publicationyear,input);
			break;
		}
	}
}

void writeBooksToFile(FILE **file2,Book books[]){
	int i;
	for(i=0;i<5;i++){
		fprintf(*file2,"%s",books[i].Tittle);
		fprintf(*file2,"%s",books[i].Author);
		fprintf(*file2,"%s",books[i].Publicationyear);
		fprintf(*file2,"%s",books[i].BookID);
	}
}

//13.2
void getNumber(FILE **file,int arr[]){
	srand(time(NULL));
	int i,j;
	for(i=0;i<1000;i++){
		arr[i]=rand()%9001+1000;
		if(i>0){
			for(j=0;j<i;j++){
				if(arr[j]==arr[i]){
					i--;
					break;
				}
				else{
					continue;
				}
			}
		}
	}
	for(i=0;i<1000;i++){
		fprintf(*file,"%d\n",arr[i]);
	}
}

void swap(int *a,int *b);
void bubbleSortRecursive(int arr[],int length){
	int i,j;
	i=length;
	if(i>0){
		for(j=0;j<length-1;j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
		bubbleSortRecursive(arr,length-1);
	}
	else
		return;
} 

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int binarySearchRecursive (int arr[],int search,int left ,int right) {
	if(left>right)
		return -1;
	
	if(arr[(left+right)/2]==search){
		return (left+right)/2;
	}
   	else if(arr[(left+right)/2]>search){
   		right=(left+right)/2-1;
	}
	else if(arr[(left+right)/2]<search){
   		left=(left+right)/2+1;
	}
	
	binarySearchRecursive(arr,search,left,right);
}


int main() {
	
	//13.1
	int choice,i;
	printf("1. Print all books\n");
	printf("2. Update books\n");
	printf("3. Exit\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	while(choice!=3){
		Book books[5]={' ',' ',' ',' '};
		if (choice==1){ //printallbookss
			FILE *file=fopen("books.txt","r");
			readBooksFromFile(&file,books,quantity);
			printBooks(books);
			fclose(file);
		}
		else if (choice==2){ //updatebooks
			FILE *file=fopen("books.txt","r");
			readBooksFromFile(&file,books,quantity);
			updateBookInfo(books, quantity);
			fclose(file);
			FILE *file2=fopen("books.txt","w");
			writeBooksToFile(&file2,books);
			fclose(file2);
		}
		printf("1. Print all books\n");
		printf("2. Update books\n");
		printf("3. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
	}
	
	//13.2
	//generate array
	FILE *file=fopen("test.txt","w");
	int arr[1000];
	int length=sizeof(arr)/sizeof(arr[0]);
	getNumber(&file,arr);
	fclose(file);
	
	//BubbleSortRecursive
	FILE *file2=fopen("sorted.txt","w");
	bubbleSortRecursive(arr,length);
	for(i=0;i<length;i++){
		printf("%d\n",arr[i]);
		fprintf(file2,"%d\n",arr[i]);
	}
	fclose(file2);
	
	//binarysearch
	int search,find,left,right;
	right=length-1,left=0;
	printf("Enter a number to search:");
	scanf("%d",&search);
	find=binarySearchRecursive(arr,search,left,right);
	if(find==-1) {
		printf("Element not present in the array");
	}
	else {
		printf("Element is found at index %d",find);
	}
}
