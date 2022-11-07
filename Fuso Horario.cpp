#include <stdio.h>
#include <locale.h>
int main() {
 	setlocale(LC_ALL, "Portuguese_Brazil");
 	
    int S,T,F,H;
    
    printf("Calcular Hora Com Fuso Horário");
    printf("\nDigite o Horário de Saída: ");
    scanf("%d",&S);
    printf("\nDigite o Tempo de Viagem: ");
    scanf("%d",&T);
    printf("\nDigite o Fuso Horário: ");
    scanf("%d",&F);
    
    if(S == 0){
    	S = 24;
	} 
	H = (S + T + F) % 24;
	printf ("São %d Horas\n ",H);
 
    return 0;
}
