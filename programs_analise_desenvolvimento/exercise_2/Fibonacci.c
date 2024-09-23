// 2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

// IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;
// #include <stdio.h>

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
        printf("%d nao pertence a sequencia de Fibonacci.\n", numero);
    }

    return 0;
}