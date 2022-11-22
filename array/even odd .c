#include<stdio.h>
int main(){
	int i,a[10],even=0,odd=0;
		for(i=0;i<10;i++)
		{
			printf("enter element:");
			scanf("%d",&a[i]);
		}
		for(i=0;i<10;i++){
			if(a[i]%2==0)
			 even=even+1;
			else
				odd=odd+1;
		}
		printf("count of even number:%d",even);
		printf("count of odd number:%d",odd);
}
