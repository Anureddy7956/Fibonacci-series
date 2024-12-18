#include <stdio.h>
int fibonacci(int n);

int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", fibonacci(i - 1)); 
    }
    printf("\n");
    return 0;
}

// Recursive function to calculate Fibonacci numbers
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

