#include <stdio.h>
void factorial() {
    int n, i;
    unsigned long long fact = 1;
    printf("\nEnter an integer: ");
    scanf("%d", &n);

    // the user enters a negative integer puneeth
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

   // return 0;
}
