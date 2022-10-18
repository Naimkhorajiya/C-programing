#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter value:a");
	scanf("%d",&a);
	printf("enter value:b");
	scanf("%d",&b);
	printf("enter value:c");
	scanf("%d",&c);
	if(a>b)
 	{
		if (a>c)
		printf("a is greater");
	else
	printf("c is greater");
    }
	
	{
		if(b>c)
		printf("b is greater");
	else
	printf("c is greater");
	}
	return 0;
	}
	
