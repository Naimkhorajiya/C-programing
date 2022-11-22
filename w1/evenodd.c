#include<stdio.h>
int main(){
	int i,j,even=0,odd=0;
	while(j<=10){
		print("enter number");
		scanf("%d",&i);
		if(i%2==0){
			even=even+1;
		}
		else{
			odd=odd+1;
		}
		j++;
	}
	printf("count of even number %d\n",even);
	printf("count of even number %d",odd);

	
}
