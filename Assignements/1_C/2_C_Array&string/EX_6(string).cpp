/* ********* Assignement 2 **********
    ********* EX7: find the lenght of a string   ******** */


#include <stdio.h>

main() {
    int i,cmp=0;
    char A[100];
    printf("Enter a string: ");
    gets(A); 
    
    for(i=0;A[i] != '\0';i++){
    	
    		cmp++;
	}
	
	printf("frequency of caracter : %d",cmp);
    
}

 
