#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
    int v1, v2, v3;
    
    printf("Sort Simples");
    printf("\nDigite o valor de V1: ");
    scanf ("%d", &v1);
    printf("\nDigite o valor de V2: ");
    scanf ("%d", &v2);
    printf("\nDigite o valor de V3: ");
    scanf ("%d", &v3);
    
    if((v1 <= v2) && (v1 <= v3)){
        if(v2 <= v3){
            printf("%d",v1);
            printf("%d",v2);
            printf("%d",v3);
        }else{
            printf("%d",v1);
            printf("%d",v3);
            printf("%d",v2);
        }
    }
    
    if ((v2 < v1) && (v2 < v3)){
      if(v1 < v3){
      	printf("%d\n",v2);
        printf("%d\n",v1);
        printf("%d\n",v3);
	  }else{
	  	printf("%d\n",v2);
        printf("%d\n",v3);
        printf("%d\n",v1);
	  }
        
    }
    
    if ((v3 < v1) && (v3 < v2)){
        if (v1 <= v2){
            printf("%d\n",v3);
            printf("%d\n",v1);
            printf("%d\n",v2);
        }else {
            printf ("Os Valores Na Ordem Crescente São:\n%d\n%d\n%d\n",v3,v2,v1);
        }
    }
    printf("Os Valores Na Ordem Escrita São:\n%d\n%d\n%d\n",v1,v2,v3);
    
    return 0;
}
