/* ********* Assignement 3(c_functios) **********
    ********* EX2: factorial of a number using recursion   ******** */


#include <stdio.h>


int factorial(int n);

int main() {
    int numb;
    printf("Enter a positive integer: ");
    scanf("%d", &numb);
    printf("Factorial of %d = %d\n", numb, factorial(numb));
    return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case
    } else {
        return n * factorial(n - 1); // Recursive call
    }
}

