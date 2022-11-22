#include<stdio.h>
int main(){
	int i,n,sum=0;
	printf("enter a number:");
	scanf("%d",n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			printf("%d",i);
			sum=sum+i;
		}
	}
	printf("%d",sum);
	if(sum==n)
	{
	printf("\n%d is a perfetc number:");
}
	else{
	
	printf("%d is a not perfetc number:");
}

}
