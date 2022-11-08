#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
    float A, B, C, a, b, c;
    
    printf("TIPOS DE TRIANGULOS");
    
    printf("\nDigite um lado do triangulo:");
    scanf("%f", &a);
    printf("\nDigite outro lado do triangulo:");
    scanf("%f", &b);
    printf("\nDigite o outro lado do triangulo:");
    scanf("%f", &c);
    
    if(A >= B && A >= C){
        A = a; 
        B = b; 
        C = c;
    }
    if (B >= A && B >= C){
        A = b;
        B = a;
        C = c; 
    }
    if (C >= A && C >= B){
        A = c;
        B = b;
        C = a;
    }
    if (A >= B+C){
        printf ("Não é um triangulo\n");
    } else{
    if ((A*A) == ((B*B) + (C*C))){
        printf ("Triangulo Retangulo\n");
    }
    if ((A*A) > ((B*B) + (C*C))){
        printf ("Triangulo Obtusangulo\n");
    }
    if ((A*A) < ((B*B) + (C*C))){
        printf("Triangulo Acutangulo\n");
    }
    if (A == B && A == C && B == C){
        printf ("Triangulo Equilatero\n");
    }
    
    if (A == B && A != C || A == C && A != B || B == C && B != A){
        printf ("Triangulo isoceles\n");
    }
    }
    return 0;
}
