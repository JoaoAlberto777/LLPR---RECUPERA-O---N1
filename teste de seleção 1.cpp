#include <stdio.h>
#include <locale.h>
 
int main() {
 	setlocale(LC_ALL, "Portuguese_Brazil");
    int A,B,C,D;
    printf("Teste de Seleção 1");
    
    printf("Digite o Valor de A: ");
    scanf("%d",&A);
    printf("Digite o Valor de B: ");
    scanf("%d",&B);
    printf("Digite o Valor de C: ");
    scanf("%d",&C);
    printf("Digite o Valor de D: ");
    scanf("%d",&D);
    
    if((B > C)&&(D > A)&&(C+D) > (A+B)&& (C && D > 0)&&(A % 2==0)){
       printf("Valores aceitos\n");
    }else{
        printf("Valores nao aceitos\n");
    }
    return 0;
}
