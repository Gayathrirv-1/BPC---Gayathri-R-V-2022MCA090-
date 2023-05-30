#include <stdio.h>

void printOddNumbers(int start, int end) {
    if (start % 2 == 0) {
        start++;
    }

    while (start <= end) {
        printf("%d ", start);
        start += 2;
    }
}

int main() {
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Odd numbers between %d and %d are: ", start, end);
    printOddNumbers(start, end);
    printf("\n");

    return 0;
}
