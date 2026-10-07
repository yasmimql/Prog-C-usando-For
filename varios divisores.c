#include <stdio.h>

int main() {
    int N;

    printf("Digite um numero N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("divisores de %d: ", i);

        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                printf("%d ", j);
            }
        }

        printf("\n");
    }

    return 0;
}

