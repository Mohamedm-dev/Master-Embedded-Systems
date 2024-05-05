/* ********* Assignement 2 **********
    ********* EX2: Calculate average using array   ******** */
    
#include<stdio.h>

main(){
	int n,i;
	printf("Enter the number of data: ");
	scanf("%d",&n);
	float A[n];
	if(n!=0){

		for (i=0 ; i<n ; i++){
			printf("%d. Enter number: ",i+1);
			scanf("%f",&A[i]);	
		}
	
		float average=0;
		for (i=0 ; i<n ; i++){ 
			average+=A[i];
    	}
    	printf("average= %.2f",average);
    }
    else  printf("Error!! Enter a number not null.");
}  
