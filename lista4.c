/*codigo 1)

#include <stdio.h>  
int main() {
	int a[5]={1,2,3,4,5}, b[5], i, r;
	for(i=0;i<5;i++){
		b[i]=a[i]*3;
}
	printf("Os numeros mult. por 3:\n");
	for(r=0; r<5; r++){
		printf("%d\n", b[r]);
	}
	return 0;
}

codigo 2)
#include <stdio.h>

int main() {
    int a[6] = {1, 2, 3, 4, 5, 6}, b[6], i, j, fatorial;
    
    for(i = 0; i < 6; i++) {
        fatorial = 1;
        for(j = 1; j <= a[i]; j++) {
            fatorial *= j;
        }
        b[i] = fatorial;
    }
    
    printf("Fatoriais dos elementos:\n");
    for(i = 0; i < 6; i++) {
        printf("%d\n", b[i]);
    }

    return 0;
}

codigo 3)
#include <stdio.h>

int main() {
    int a[5] = {100, 90, 80, 70, 60}, b[5] = {1, 2, 3, 4, 5}, c[5], i;
    
    for(i = 0; i < 5; i++) {
        c[i] = a[i] - b[i];
    }
    
    printf("Resultados:\n");
    for(i = 0; i < 5; i++) {
        printf("%d\n", c[i]);
    }

    return 0;
}

codigo 4)
#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5}, b[5] = {6, 7, 8, 9, 10}, c[10], i;

    for(i = 0; i < 5; i++) {
        c[i] = a[i];
    }
    for(i = 0; i < 5; i++) {
        c[i + 5] = b[i];
    }
    
    printf("Elementos da matriz C:\n");
    for(i = 0; i < 10; i++) {
        printf("%d\n", c[i]);
    }

    return 0;
}

codigo 5)
#include <stdio.h>

int main() {
    int a[20], b[30], c[50], i;
    
    // Inicializando as matrizes A e B com valores (apenas para exemplo)
    for(i = 0; i < 20; i++) {
        a[i] = i + 1;
    }
    for(i = 0; i < 30; i++) {
        b[i] = i + 21;
    }

    // Preenchendo matriz C com os valores de A e B
    for(i = 0; i < 20; i++) {
        c[i] = a[i];
    }
    for(i = 0; i < 30; i++) {
        c[i + 20] = b[i];
    }
    
    printf("Elementos da matriz C:\n");
    for(i = 0; i < 50; i++) {
        printf("%d\n", c[i]);
    }

    return 0;
}

codigo 6)
#include <stdio.h>

int main() {
    int a[8] = {1, 2, 3, 4, 5, 6, 7, 8}, b[8], i;
    
    for(i = 0; i < 8; i++) {
        b[i] = a[i] * a[i];
    }
    
    printf("Quadrados dos elementos de A:\n");
    for(i = 0; i < 8; i++) {
        printf("%d\n", b[i]);
    }

    return 0;
}


codigo 7)
#include <stdio.h>

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, b[10], i;
    
    for(i = 0; i < 10; i++) {
        b[i] = a[9 - i];
    }
    
    printf("Elementos invertidos:\n");
    for(i = 0; i < 10; i++) {
        printf("%d\n", b[i]);
    }

    return 0;
}


