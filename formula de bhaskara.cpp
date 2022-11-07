#include <stdio.h>
#include <math.h>
#include <locale.h>
 
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    double A,B,C;
    
    printf("Fórmula de Bhaskara\n");
    
    printf("Digite o Valor de A: ");
    scanf("%lf",&A);
    printf("Digite o Valor de B: ");
    scanf("%lf",&B);
    printf("Digite o Valor de C: ");
    scanf("%lf",&C);
    
    if((B*B - 4*A*C) < 0 || (A == 0)){
        printf("Impossivel calcular\n");
    }else{
        printf("\n R1 = %.5lf\n", (-B + sqrt(B * B - 4*A*C)) / (2 * A));
        printf("\n R2 = %.5lf\n", (-B - sqrt(B * B - 4*A*C)) / (2 * A));
    }
 
    return 0;
}
