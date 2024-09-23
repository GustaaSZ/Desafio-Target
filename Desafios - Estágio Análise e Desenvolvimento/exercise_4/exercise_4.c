// 4) Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:
// • SP – R$67.836,43
// • RJ – R$36.678,66
// • MG – R$29.229,88
// • ES – R$27.165,48
// • Outros – R$19.849,53

// Escreva um programa na linguagem que desejar onde calcule o percentual de representação
//  que cada estado teve dentro do valor total mensal da distribuidora.

#include <stdio.h>

int main() {
    // Valores de faturamento por estado
    float sp = 67836.43;
    float rj = 36678.66;
    float mg = 29229.88;
    float es = 27165.48;
    float outros = 19849.53;
    
    // Calculando o faturamento total
    float total = sp + rj + mg + es + outros;

    // Calculando os percentuais
    float perc_sp = (sp / total) * 100;
    float perc_rj = (rj / total) * 100;
    float perc_mg = (mg / total) * 100;
    float perc_es = (es / total) * 100;
    float perc_outros = (outros / total) * 100;

    // Exibindo os resultados
    printf("Percentual de representacao por estado:\n");
    printf("SP: %.2f%%\n", perc_sp);
    printf("RJ: %.2f%%\n", perc_rj);
    printf("MG: %.2f%%\n", perc_mg);
    printf("ES: %.2f%%\n", perc_es);
    printf("Outros: %.2f%%\n", perc_outros);

    return 0;
}
