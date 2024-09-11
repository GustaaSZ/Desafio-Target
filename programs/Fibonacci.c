#include <stdio.h>

int main(){

    int numero, a = 0, b = 1, temp;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Pimeira verificação, já que 0 e 1 pertencem a sequencia de Fibo.
    if(numero == 0 || numero == 1){
        printf("%d pertence a sequencia de Fibonacci.\n", numero);
        return 0;
    }

    while(b < numero){
        temp = a + b;
        a = b;
        b = temp;
    }

    if (b == numero) {
        printf("%d pertence a sequencia de Fibonacci.\n", numero);
    } else {
        printf("%d não pertence a sequencia de Fibonacci.\n", numero);
    }

    return 0;
}