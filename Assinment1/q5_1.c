#include<stdio.h>

int main() {
    int n;
    printf("Enter the amount: ");
    scanf("%d", &n);

    if (n >= 1000) {
        printf("I will buy Punjabi\n");
        n -= 1000; // Subtracting the cost of Punjabi
        if (n >= 500) {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        } else {
            printf("Bad luck!\n");
        }
    } else {
        printf("Bad luck!\n");
    }

    return 0;
}
