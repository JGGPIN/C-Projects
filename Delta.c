#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, x1, x2;

    printf("Digite os coeficientes a, b e c da equacao (ax^2 + bx + c = 0):\n");
    scanf("%f %f %f", &a, &b, &c);
    d = pow(b, 2) - 4 * a * c;

    if (delta < 0)
	{
        printf("Nao existem raizes reais.\n");
    } 
	else if (d == 0) {
        
        x1 = -b / (2 * a);
        printf("Existe uma raiz real: x = %.2f\n", x1);
    } else {
        
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Existem duas raizes reais diferentes: x1 = %f e x2 = %f\n", x1, x2);
    }

    return 0;
}
