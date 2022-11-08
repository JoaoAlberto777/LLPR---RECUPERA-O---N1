#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
    int HoraI,HoraF;
    
    printf("Tempo de Jogo\n");
    
    printf("\nDigite a Hora Em Que o Jogo Começou:");
    scanf("%d",&HoraI);
    printf("\nDigite a Hora Em Que o Jogo Acabou:");
    scanf("%d",&HoraF);
    
    if (HoraF > HoraI){
    printf("A Partida Durou %d Hora(s)\n",HoraF - HoraI);
    }else{
        printf("A Partida Durou %d Hora(s)\n", 24 - HoraI + HoraF);
    }
    return 0;
}
