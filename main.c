#include <stdio.h>

int main() {
    int numeros[7];
    int cont_2 = 0, cont_3 = 0, cont_5 = 0;

    printf("Digite 7 numeros inteiros no intervalo [0, 9]:\n");

    for (int i = 0; i < 7; i++) {
        int num;

        do {
            printf("Numero %d: ", i + 1);
            scanf("%d", &num);

            if (num < 0 || num > 9) {
                printf("Valor fora do intervalo [0, 9]. Tente novamente.\n");
            }
        } while (num < 0 || num > 9);

        numeros[i] = num;

        // Contagem dos números 2, 3 e 5
        if (num == 2) {
            cont_2++;
        } else if (num == 3) {
            cont_3++;
        } else if (num == 5) {
            cont_5++;
        }
    }

    printf("\nQuantidade de numeros 2: %d\n", cont_2);
    printf("Quantidade de numeros 3: %d\n", cont_3);
    printf("Quantidade de numeros 5: %d\n", cont_5);

    return 0;
}
