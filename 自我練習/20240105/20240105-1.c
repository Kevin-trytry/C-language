#include<stdio.h>
void to_binary(int n){
    if(n==0)return;
    to_binary(n/2);
    printf("%d",n%2);
}
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        to_binary(n);
        printf("\n");
    }
    return 0;
}

