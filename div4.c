#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Numbers divisible by 2 and 3 (or 'Pass' if divisible by both): ");
    for (int num = start; num <= end; num++) {
        if (num % 2 == 0 && num % 3 == 0) {
            printf("Pass ");
        } else if (num % 2 == 0) {
            printf("%d ", num);
        } else if (num % 3 == 0) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
