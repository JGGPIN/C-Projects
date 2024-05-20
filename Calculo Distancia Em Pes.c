#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 float pes, pm;
 
 printf ("Qual a distancia em pes?");
 scanf ("%f", pes);
 
 pm = (pes * 0.3046);
 
 printf ("A distancia em pes em %f", pm);
}
