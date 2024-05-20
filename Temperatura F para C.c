#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 float c,f;
 
 printf ("\nQual a temperatura em C?\n\n");
 scanf ("%f", &c);
 
 f = (c + 32);
 
 printf ("\nSua temperatura em %f\n\n", f);
}

