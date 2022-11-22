#include<stdio.h>
int main(){
	int n,i=1,c=0;
	printf("enter number");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0)
		{
		c++;	
		}
		i++;
	}
		if(c==2){
			printf("prime number");
		}
		else{
			printf("not prime");
		}
	
}
