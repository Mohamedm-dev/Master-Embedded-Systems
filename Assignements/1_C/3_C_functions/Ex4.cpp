/*
 *      Author: MAMMA Mohamed
              EX: 4  (calculate the power of a number Using reccursion)
              
 *
*/
#include <stdio.h>

int power(int a, int b, int ctr);

int main() {
    int x, i, result;
    printf("Enter base number: ");
    scanf("%d", &x);
    printf("Enter power number (positive integer): ");
    scanf("%d", &i);
    printf("%d ^ %d = %d\n", x, i, power(x, i, 0));
    
    return 0;
}

int power(int a, int b, int ctr) {
    if (ctr == b) {
        return 1;  
    }
    return a * power(a, b, ctr + 1);
}

