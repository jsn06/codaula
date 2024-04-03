#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int altura, linha, coluna;

    printf("altura do triangulo:");
    scanf("%d", &altura);

    for (linha = 0; linha < altura; linha++) {
        for (coluna = 0; coluna <= linha; coluna++) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
