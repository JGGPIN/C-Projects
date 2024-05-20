#include <stdio.h>

void main(void)
 {
    int opcao;

    printf("Selecione uma opcao:\n");
    printf("1 - Fazer Check-in\n");
    printf("2 - Chamar servico de quarto\n");
    printf("3 - Fazer pedido\n");


    scanf("%d", &opcao);

    switch (opcao) 
	{
        case 1:
            printf("Bem-vindo ao hotel! Por favor, dirija-se a recepcao para fazer o Check-in.\n");
            break;
        case 2:
            printf("O servico de quarto sera notificado. Aguarde alguns instantes.\n");
            break;
        case 3:
            printf("Por favor, entre em contato com o servico de quarto para fazer o seu pedido.\n");
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
