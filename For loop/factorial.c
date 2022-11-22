#include<stdio.h>
int main(){
	int i=1,fact=1,n;
	printf("Enter a number to find factorial : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("Factorial of %d is : %d",n,fact);
	return 0;
}
