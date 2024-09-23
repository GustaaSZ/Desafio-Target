#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    size_t i, count = 0;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    // Percorrendo a string e incrementando as ocorrências ao encontrar os caracteres 'a' e 'A'
    for (i = 0; i < strlen(string); i++) {
        if (string[i] == 'a' || string[i] == 'A') {
            count++;
        }
    }

    // Verificação de ocorrência e exibição do resultado
    if (count > 0) {
        printf("A letra 'a' aparece %d vezes.\n", count);
    } else {
        printf("A letra 'a' nao aparece na string.\n");
    }

    return 0;
}
