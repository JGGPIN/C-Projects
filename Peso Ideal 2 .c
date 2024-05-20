#include <stdio.h>

void main(void) 
{
    char sexo;
    float altura, peso_ideal;

    printf("Digite o sexo (M para masculino ou F para feminino):\n");
    scanf(" %c", &sexo);

    printf("Digite a altura em centimetros:\n");
    scanf("%f", &altura);

    switch (sexo) {
        case 'M':
        case 'm':
            peso_ideal = 52 + (0.75 * (altura - 152.4));
            printf("O peso ideal para um homem com %f cm de altura �: %f kg\n", altura, peso_ideal);
            break;
        case 'F':
        case 'f':
            peso_ideal = 52 + (0.67 * (altura - 152.4));
            printf("O peso ideal para uma mulher com %f cm de altura �: %f kg\n", altura, peso_ideal);
            break;
        default:
            printf("Sexo invalido.\n");
    }

    return 0;
}

