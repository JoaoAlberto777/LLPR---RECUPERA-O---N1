#include <stdio.h>
#include <locale.h>
int main() {
 	setlocale(LC_ALL, "Portuguese_Brazil");
 	
    int S,T,F,H;
    
    printf("Calcular Hora Com Fuso Hor�rio");
    printf("\nDigite o Hor�rio de Sa�da: ");
    scanf("%d",&S);
    printf("\nDigite o Tempo de Viagem: ");
    scanf("%d",&T);
    printf("\nDigite o Fuso Hor�rio: ");
    scanf("%d",&F);
    
    if(S == 0){
    	S = 24;
	} 
	H = (S + T + F) % 24;
	printf ("S�o %d Horas\n ",H);
 
    return 0;
}
