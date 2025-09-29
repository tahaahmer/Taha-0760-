#include <stdio.h>

int main() {
    int n1, n2, n3;
    printf("Enter num 1: ");
    scanf("%d", &n1);
    printf("Enter num 2: ");
    scanf("%d", &n2);
    printf("Enter num 3: ");
    scanf("%d", &n3);

    if (n1 > n2) {
        if (n1 > n3) {
            printf("Num1 is largest\n");
        } else {
            printf("Num3 is largest\n");
        }
    } else {
        if (n2 > n3) {
            printf("Num2 is largest\n");
        } else {
            printf("Num3 is largest\n");
        }
    }
}

