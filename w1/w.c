#include<stdio.h>
int main(){
	int i,j=1,sum=0;
	printf("enter value");
	scanf("%d",&i);
	while(j<=i){
		if(j%2==1){
			sum=sum+j;
		}
		else
		sum=sum-j;
		j++;
	}
	printf("%d",sum);
}
