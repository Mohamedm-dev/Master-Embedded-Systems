/* ********* Assignement 2 **********
    ********* EX7: find the lenght of a string   ******** */


#include <stdio.h>

#include <stdio.h>

#include <stdio.h>
#include <ctype.h>

int main() {
    int i, cmp = 0;
    char A[100];
    char character;
    printf("Enter a string: ");
    scanf("%s", A); 

    for (i = 0; A[i] != '\0'; i++) {
            cmp++;

    }
    printf("Frequency of character : %d", cmp);

}


 
