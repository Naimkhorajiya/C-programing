#include<stdio.h>
int main(){
	int i,j=1,ans=1;
	printf("enter value of factorial:");
	scanf("%d",&i);
	while(j<=i){
		ans=ans*j;
		j++;
		}
		printf("your ans is %d",ans);
	}

