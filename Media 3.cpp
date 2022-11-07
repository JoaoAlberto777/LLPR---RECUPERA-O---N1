#include <stdio.h>
#include <locale.h>
 
int main() {
    float N1,N2,N3,N4,Media,Exame,Mediaf;
    
    printf("Calculadora de Media 3.0");
    
    printf("\nDigite Primeira Nota: ");
     scanf("%f",&N1);
    printf("\nDigite a Segunda Nota: ");
     scanf("%f",&N2);
    printf("\nDigite a Terceira Nota: ");
     scanf("%f",&N3);
    printf("\nDigite a Quarta Nota: ");
     scanf("%f",&N4);
    
    Media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4))/10;
    printf("\nMedia: %.1f\n", Media);
    
    if(Media >= 7){
        printf("Aluno aprovado.\n");
    }if(Media < 5){
        printf("Aluno reprovado.\n");
    }if(Media >=5 && Media <7){
        printf("Aluno em exame...\n");
        printf("\nDigite a nota do Exame: ");
        scanf("%f",&Exame);
        printf("\nNota do exame: %.1f\n", Exame);
        Mediaf= (Media + Exame)/2;
        
        if(Mediaf >=5){
        printf("\nAluno aprovado.\n");
        printf("\nMedia final: %.1f\n", Mediaf);
	    }if(!(Mediaf >=5)){
		printf("\nAluno reprovado.\n");
		printf("\nMedia final: %.1f\n", Mediaf);
	    }	
    }
    
    return 0;
}
    
