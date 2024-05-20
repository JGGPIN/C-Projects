#include <stdio.h>
void main(void) 
{
    char operacao;
    float operando1, operando2, resultado;

    printf("Escolha a operacao desejada:\n");
    printf("S - Soma\n");
    printf("U - Subtracao\n");
    printf("M - Multiplicacao\n");
    printf("D - Divisao\n");
    scanf(" %c", &operacao); 

    printf("Digite os dois operandos:\n");
    scanf("%f %f", &operando1, &operando2);

    switch (operacao) {
        case 'S':
        case 's':
            resultado = operando1 + operando2;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case 'U':
        case 'u':
            resultado = operando1 - operando2;
            printf("Resultado da subtracao: %.2f\n", resultado);
            break;
        case 'M':
        case 'm':
            resultado = operando1 * operando2;
            printf("Resultado da multiplicacao: %.2f\n", resultado);
            break;
        case 'D':
        case 'd':
            if (operando2 != 0) {
                resultado = operando1 / operando2;
                printf("Resultado da divisao: %.2f\n", resultado);
            } else {
                printf("Erro: Divisao por zero!\n");
            }
            break;
        default:
            printf("Operacao invalida.\n");
    }

    return 0;
}


