#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void main(void){
	int c,n;
	float num, soma= 0, media;
	printf ("Escolha alguns numeros.");
	scanf ("%d", &n);
		while (c <n){
			printf ("Escolha o numer %d", c++);
			scanf ("%f",&num);
			soma += num;
			c++;
		}
	media = soma / n;
	printf ("A media dos %d numeros eh %f",media, n);
	return 0;
}
