/*
codigo 1)
#include <stdio.h>

int main() {
    int A[5][3], B[5][3], C[5][3], i, j;

    printf("Digite os elementos da matriz A (5x3):\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Digite os elementos da matriz B (5x3):\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("Matriz C (Soma de A e B):\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}

///////////////

codigo 2)
#include <stdio.h>

int main() {
    int A[7], B[7], C[7][2], i;
    printf("Digite os elementos da matriz A (7 elementos):\n");
    for(i = 0; i < 7; i++) {
        scanf("%d", &A[i]);
    }
    printf("Digite os elementos da matriz B (7 elementos):\n");
    for(i = 0; i < 7; i++) {
        scanf("%d", &B[i]);
    }
    for(i = 0; i < 7; i++) {
        C[i][0] = A[i];
        C[i][1] = B[i];
    }
    printf("Matriz C:\n");
    for(i = 0; i < 7; i++) {
        printf("%d %d\n", C[i][0], C[i][1]);
    }

    return 0;
}

///////////////////

codigo 3)
#include <stdio.h>

int main() {
    int A[10], B[10][3], i, j, fatorial;

    printf("Digite os 10 elementos da matriz A:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    for(i = 0; i < 10; i++) {
        B[i][0] = A[i] + 5;
        fatorial = 1;
        for(j = 1; j <= A[i]; j++) {
            fatorial *= j;
        }
        B[i][1] = fatorial;
        B[i][2] = A[i] * A[i];
    }
    printf("Matriz B:\n");
    for(i = 0; i < 10; i++) {
        printf("%d %d %d\n", B[i][0], B[i][1], B[i][2]);
    }
    return 0;
}


////////////////////

codigo 4)
#include <stdio.h>

int main() {
    int A[4], B[4], C[4][2], i;
    printf("Digite os elementos da matriz A (4 elementos):\n");
    for(i = 0; i < 4; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite os elementos da matriz B (4 elementos):\n");
    for(i = 0; i < 4; i++) {
        scanf("%d", &B[i]);
    }
    for(i = 0; i < 4; i++) {
        C[i][0] = A[i] * 2;
        C[i][1] = B[i] - 5;
    }
    printf("Matriz C:\n");
    for(i = 0; i < 4; i++) {
        printf("%d %d\n", C[i][0], C[i][1]);
    }

    return 0;
}
