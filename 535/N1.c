#include<stdio.h>
int main(){
	int a,b,c,d,e,sum,percentag;
	printf("enter 1st sub marks");
	scanf("%d",&a);
   	printf("enter 2st sub marks");
	scanf("%d",&b);
	printf("enter 3st sub marks");
	scanf("%d",&c);
	printf("enter 4st sub marks");
	scanf("%d",&d);
	printf("enter 5st sub marks");
	scanf("%d",&e);
    percentag=(a+b+c+d+e)/5;
    printf("enter percentage=%d",percentag);
    if (percentag>=35)
    {
    	printf("pass class");
	}
	else if (percentag>=45)
	{
		printf("second class");
	}
	else if ("percentag>=60")
	{
	printf("first class");	
	}
	else if ("percentag>=70")
	{
		printf("distinction");
	}
	else 
	{
        printf("fail");
	}
	return 0;
}
