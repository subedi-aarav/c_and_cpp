// Fibonacci series :
// Fibonacci series up to 100: 0 1 1 2 3 5 8 13 21 34 55 89

#include <stdio.h>
int main() {
    int n, fib = 0, pre = 1, temp;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Fibonacci series up to %d: ", n);
    while (fib <= n) {
    	printf("%d ", fib);
        temp = fib;
        fib = fib + pre;
        pre = temp;
	}
    return 0;
}
