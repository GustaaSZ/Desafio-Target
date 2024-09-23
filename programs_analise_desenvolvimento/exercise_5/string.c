// 5) Escreva um programa que inverta os caracteres de um string.

// IMPORTANTE:
// a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
// b) Evite usar funções prontas, como, por exemplo, reverse;

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, j;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    

    str[strcspn(str, "\n")] = 0;
    int len = strlen(str);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];    // Trocando os caracteres
        str[i] = str[j];
        str[j] = temp;
    }

    printf("String invertida: %s\n", str);
    return 0;
}
