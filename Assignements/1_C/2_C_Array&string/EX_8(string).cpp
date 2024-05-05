/* ********* Assignement 2 **********
    ********* EX8: Reverse string   ******** */


#include <stdio.h>


main() {
    int i, j;
    char A[100], B[100];
    printf("Enter a string: ");
    gets(A); 
    
    // Calcul de la longueur de la chaîne A
    for(i = 0; A[i] != '\0'; i++);
    
    // Inversion de la chaîne A et copie dans B
    for(j = 0; j < i; j++) {
        B[j] = A[i - 1 - j];	
    }
    B[i] = '\0'; // indique la fin de string

    printf("%s", B);;
    
}

 
