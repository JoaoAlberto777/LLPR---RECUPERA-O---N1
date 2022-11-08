#include <stdio.h>
#include <locale.h>
int main(){
int P,j1,j2,r,a,duvida;
   setlocale(LC_ALL,"Portuguese_brazil");
   
   printf("Impar, Par ou Roubo :)");

	printf("\nDigite 1 para par ou 0 para impar: ");
    scanf("%d",&P);
    printf("j1 Digite o Número Escolhido: ");
    scanf("%d",&j1);
    printf("j2 Digite o Número Escolhido: ");
    scanf("%d",&j2);
    printf("j1, Digite 1 para roubar ou 0 para não roubar: ");
    scanf("%d",&r);
    printf("j2, Digite 1 para Acusar ou 0 para não Acusar o j1 de roubo:");
    scanf("%d",&a);

    if (P == 1){ 
      duvida = (j1 + j2) % 2;
      	if (duvida == 0 && r == 0){ 
            if (a == 0){
				printf("\nJogador 1 ganha!\n");
		}if (a == 1){
				printf("\nJogador 1 ganha!\n");
			} 
      }if (duvida!= 0 && r==1){ 
            if (a == 0){
				printf("\nJogador 1 ganha!\n");
		}if (a == 1){
				printf("\nJogador 2 ganha!\n");
			} 
      }
      if (duvida != 0 && r == 0){ 
            if (a == 0){
				printf("\nJogador 2 ganha!\n");
				}if (a == 1){
				printf("\nJogador 2 ganha!\n");
			}
      }
     	 if (duvida == 0 && r == 1){ 
            if (a == 0){
				printf("\nJogador 1 ganha!\n");
			}if (a == 1){
				printf("\nJogador 2 ganha!\n");
			} 
	   	 }	
      } 

	   if (!(P == 1)){ 
        	duvida = (j1 + j2)%2;

      		if (duvida >= 1 && r == 0){
            	if (a == 0){
				printf("\nJogador 1 ganha!\n");
				}if (a == 1){
				printf("\nJogador 1 ganha!\n");
				}
      		}

      		if (duvida == 0 && r == 1){
            	if (a == 0){
				printf("\nJogador 1 ganha!\n");
				}if (a == 1){
				printf("\nJogador 2 ganha!\n");
				} 
      		}

      		if (duvida == 0 && r == 0){ 
            	if (a == 0){
				printf("\nJogador 2 ganha!\n");
				}if (a == 1){
				printf("\nJogador 2 ganha!\n");
				}
     		 }if (duvida >= 1 && r == 1){ 
            	if (a == 0){
				printf("\nJogador 1 ganha!\n");
				}if (a == 1){
				printf("\nJogador 2 ganha!\n");
				} 
      		}
  		}
  		return 0;
  	}
