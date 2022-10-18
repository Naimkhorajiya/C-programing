#include<stdio.h>
int main(){
	int month;
	printf("enter month");
	scanf("%d",& month);
	switch (month){
		case 1:printf("31 days");
		case 3:printf("31 days");
		case 5:printf("31 days");
		case 7:printf("31 days");
		case 8:printf("31 days");
		case 10:printf("31 days");
		case 12:printf("31 days");
		    	break;
		case 2:print("28 or 29 days");
	    		break;
	    case 4:printf("30 days");
	    case 6:printf("30 days");
	    case 9:printf("30 days");
	    case 11:printf("30 days");
	    		break;
	    default:printf("No valid input");
	}
}
