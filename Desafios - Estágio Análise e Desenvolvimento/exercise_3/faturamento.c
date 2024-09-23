// 3) Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, que calcule e retorne:
// • O menor valor de faturamento ocorrido em um dia do mês;
// • O maior valor de faturamento ocorrido em um dia do mês;
// • Número de dias no mês em que o valor de faturamento diário foi superior à média mensal.

#include <stdio.h>

#define TOTAL_DIAS 30

int main() {
    float faturamento[TOTAL_DIAS] = {1500.5, 2000.0, 0, 3000.0, 1800.0, 0, 0, 
                                      2500.0, 1000.0, 0, 0, 4000.0, 3500.0, 0, 
                                      2000.0, 1500.0, 0, 0, 5000.0, 2700.0, 0, 
                                      3100.0, 4500.0, 0, 2300.0, 0, 0, 2900.0, 
                                      1200.0, 0};

    float menor_faturamento = -1;
    float maior_faturamento = -1;
    float soma_faturamento = 0;
    int dias_com_faturamento = 0;
    int dias_acima_da_media = 0;

    // Calculando menor, maior e soma do faturamento
    for (int i = 0; i < TOTAL_DIAS; i++) {
        if (faturamento[i] > 0) {  // Ignorando dias com faturamento zero
            if (menor_faturamento == -1 || faturamento[i] < menor_faturamento) {
                menor_faturamento = faturamento[i];
            }
            if (maior_faturamento == -1 || faturamento[i] > maior_faturamento) {
                maior_faturamento = faturamento[i];
            }
            soma_faturamento += faturamento[i];
            dias_com_faturamento++;
        }
    }

    // Calculando a média de faturamento
    float media_faturamento = soma_faturamento / dias_com_faturamento;

    // Contando quantos dias o faturamento foi maior que a média
    for (int i = 0; i < TOTAL_DIAS; i++) {
        if (faturamento[i] > media_faturamento) {
            dias_acima_da_media++;
        }
    }

    // Exibindo os resultados
    printf("Menor faturamento: %.2f\n", menor_faturamento);
    printf("Maior faturamento: %.2f\n", maior_faturamento);
    printf("Dias com faturamento acima da media: %d\n", dias_acima_da_media);

    return 0;
}

