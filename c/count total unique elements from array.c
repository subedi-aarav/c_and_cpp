#include <stdio.h>

int main() {
    int n[10] = {1, 2, 2, 3, 3, 3, 4, 4, 7, 4,};
    int count = 0;
    int i, j;
    int is_unique;

    for (i = 0; i < 10; i++) {
        // Assume the element is unique
        is_unique = 1;

        // Check if the element has already been counted
        for (j = 0; j < i; j++) {
            if (n[i] == n[j]) {
                is_unique = 0;
                break;
            }
        }

        // If the element is unique, increment the count
        if (is_unique) {
            count++;
        }
    }

    printf("The number of unique elements in the array is: %d\n", count);

    return 0;
}

