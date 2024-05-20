#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main (void)
{
	setlocale(LC_ALL,"portuguese");
	float a,b,c,delta,r1,r2;
	printf("\n Calculo das razoes da equacao do segundo grau - ax²+bx+c  ");
	printf("\n Digite o coeficiente \"a\": ");
	scanf("%f",&a);
	printf("\n Digite o coeficiente \"b\": ");
	scanf("%f",&b);
	printf("\n Digite o coeficiente \"c\": ");
	scanf("%f",&c);
	delta = (pow(b,2)-(4*a*c));
	if(delta<0.0)
			printf("Nao existem razoes reais.");
	else
		{
			if(delta>0.0)
			{
				r1 = ((-b) + sqrt(delta))/(2.0*a);
				r2 = ((-b) - sqrt(delta))/(2.0*a);
				printf("\n As razoes da equacao sao: %.2f e %.2f",r1,r2);
			}
			else
			{r1 = ((-b) /(2.0*a));
			printf("\n As razoes da equacao saoo iguais e sao: %.2f",r1);
			}
		}
	
	
}
	
