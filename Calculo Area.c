#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 	
 	float h, b, area;
 	
 	printf ("\n Qual o valor da base?\n\n");
 	scanf ("%f",&b);
	 
 	printf ("\nQual o valor da altura?\n\n");
	scanf ("%f",&h);
 	
 	area = ((b*h)/2);
 	
 		
 	printf ("\n O valor da area da base eh %f.4f",area);
 	printf ("\n Altura%f e Base%f.4f", h,b);
	 }  
