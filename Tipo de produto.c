#include <stdio.h>

void main(void) 
{
    int codigo;
    
    printf("Digite o codigo do produto:\n");
    scanf("%d", &codigo);

    switch (codigo) {
        case 100:
            printf("Produto: Detergente\n");
            printf("Preco: R$ 1.59\n");
            break;
        case 101:
            printf("Produto: Esponja\n");
            printf("Preco: R$ 4.59\n");
            break;
        case 102:
            printf("Produto: L de ao\n");
            printf("Preco: R$ 1.79\n");
            break;
        default:
            printf("Codigo de produto invalido.\n");
    }

    return 0;
}
