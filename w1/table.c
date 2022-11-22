#include<stdio.h>
int main(){
	int i,j=1;
	printf("enter value multiplication table:");
	scanf("%d",&i);
	while(j<=10){
		printf("%d*%d=%d\n",i,j,i*j);
		j++;
	}
}
