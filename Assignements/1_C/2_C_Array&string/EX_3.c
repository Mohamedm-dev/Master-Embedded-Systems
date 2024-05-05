/* ********* Assignement 2 **********
    ********* EX4: Tronspose of a matrix   ******** */
    
#include<stdio.h>

main(){
	int i,location;
	int n , E;
	printf('enter the number of elements: ');
	scanf("%d",&n);
	int A[n];
	int B[n+1];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	printf('enter the elements to be inserd : ');
	scanf("%d",&E);
	printf('enter the location : ');
	scanf("%n",&location);
	
	for(i=0;i<n;i++){
		if(i==location)  break;
	}
	B[n+1]=A[0:i]+[E]+A[i+1:];
	
	for(i=0;i<n+1;i++){
		printf("%d",B[i]);
	}
	
	
}  
