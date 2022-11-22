#include<stdio.h>
int main(){
	int x,y,j=1,ans;
	printf("get x^y value\n");
	printf("x and y:");
	scanf("%d %d",&x,&y);
	while(j<=10){
		if(j%2==1){
			sum=sum+j;
		}
		else{
			sum=sum-j;
			j++;
		}
	}
}
