/* ********* Assignement 3(c_functios) **********
    ********* EX1: Prime numbers between two intervals   ******** */


#include <stdio.h>

void prime (int x,int y);
int a , b;
main() {
	printf("Enter two numbers(intervals): ");
	scanf("%d%d",&a,&b);
	printf("Prime numbers between %d and %d are: ",a,b);
	prime(a,b); 
	
}

void prime (int x,int y){
	int i;
	for (i=a+1;i<b;i++){
		if (i%2==0)    continue ;
		else printf(" %d",i);
	}
}
