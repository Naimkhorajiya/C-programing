#include<stdio.h>
#include<math.h>
int main(){
	int i,j,n,sum;
	printf("enter number:");
	scanf("%d",&j);
	while(j>0){
	sum=sum+pow(j%10,3);
	j=j/10;
	}
	if(n==sum){
		printf("amstrong");
	}
	else{
		printf("not amstrong");
	}
	
}
