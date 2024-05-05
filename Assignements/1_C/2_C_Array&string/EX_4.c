/* ********* Assignement 2 **********
    ********* EX5: search an element in an array   ******** */


#include <stdio.h>

main() {
    int i, n, element;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int A[n];
    // Printing the elements of A
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &element);
    for (i = 0; i < n; i++) {
        if (A[i] == element) 
            break;
    }

    if (i == n) {
        printf("The number doesn't exist in this array.\n");
    } else {
        printf("Number found at the location = %d.\n", i);
    }
}

 
