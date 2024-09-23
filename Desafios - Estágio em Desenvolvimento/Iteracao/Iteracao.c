#include <stdio.h>

int main(){
    int INDICE = 12, soma = 0, k = 1;
    
    while(k < INDICE){
        k += 1; 
        soma += k;
    }

    printf("%d\n", soma);
    return 0;
}