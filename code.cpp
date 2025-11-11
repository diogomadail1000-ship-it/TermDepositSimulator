#include <stdio.h>
#include <stdlib.h>

float saldo_inicial, saldo_final, TAUXA_DE_JUROS = 4.5;

int main() {
    printf("Insira o Saldo Inicial: ");
    scanf("%f", &saldo_inicial);
    saldo_final = saldo_inicial + (saldo_inicial * TAUXA_DE_JUROS / 100);
    printf("O Saldo Final com juros de %.2f%% é: %.2f\n", TAUXA_DE_JUROS, saldo_final);
    return 0;
}
