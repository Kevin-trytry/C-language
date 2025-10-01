#include<stdio.h>
#include<stdlib.h>
void modsort(int n, int arr[n]);
void sort(int n, int arr[n]);
int main(){
	int n,i,j,k;
	while(scanf("%d",&n)!=EOF){
		int arr[n],min,temp;
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		//insertion sort mod10
		modsort(n,arr);
		// sort
		sort(n,arr);
		for(i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
	}
}

void modsort(int n, int arr[n]){
	int k,j,min,temp;
	for(k=0;k<n-1;k++){
			min=k;
		for(j=k+1;j<n;j++){
			if(arr[j]%10<arr[min]%10)
				min=j;
		}
		if(min!=k){
			temp=arr[k];
			arr[k]=arr[min];
			arr[min]=temp;
		}
	}
}

void sort(int n, int arr[n]){
	int i,j,k,count,max,temp;
	for(i=0;i<n;i++){
		count=0;
		for(j=i+1;j<n;j++){
			if((arr[j]%10)==(arr[i]%10));
				count++;	
		}	
		
		if(count==0)
			continue;
		else if(count!=0){
			for(k=i;k<i+count;k++){
				max=k;
				for(j=k+1;j<i+count+1;j++){
					if(arr[j]>arr[max])
						max=j;
				}
				if(max!=k){
					temp=arr[k];
					arr[k]=arr[max];
					arr[max]=temp;
				}
			}
		}
	}
}

/*
#include <stdio.h>
int main() {
    int n,i,j;
    while(scanf("%d", &n)!=EOF) {

        int arr[n];
        for(i=0;i<n;i++)
            scanf("%d", &arr[i]);

        for(i=1;i<n;i++)
            for(j=0;j<i;j++) {
                if(arr[j]%10>arr[i]%10) {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
                else if(arr[j]%10==arr[i]%10 && arr[j]<arr[i]) {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }

        for(i=0;i<n;i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}*/
