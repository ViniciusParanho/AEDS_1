#include <stdio.h>

int main() {
    int altura, espacos, asteriscos;

    printf("Digite a altura da árvore de Natal: ");
    scanf("%d", &altura);

    // Loop para imprimir cada linha da árvore
    for (int linha = 1; linha <= altura; linha++) {
        espacos = altura - linha;

        // Imprime os espaços em branco à esquerda
        for (int i = 0; i < espacos; i++) {
            printf(" ");
        }

        asteriscos = 2 * linha - 1;

        // Imprime os caracteres, substituindo asteriscos por #
        for (int i = 0; i < asteriscos; i++) {
            if (i == 0 || i == asteriscos - 1) {
                printf("#");
            } else {
                printf("*");
            }
        }

        // Quebra de linha após imprimir uma linha completa
        printf("\n");
    }

    // Imprime o tronco da árvore
    for (int i = 0; i < altura - 1; i++) {
        printf(" ");
    }
    printf("|\n");

    return 0;
}
