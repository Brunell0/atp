#include <stdio.h>
#include <stdlib.h>

int main(){
     int* vetor;
     int tam;
     printf("Digite o tamanho do array:\n");
     scanf("%d",&tam);
     
     vetor = (int*) malloc(tam * sizeof(int));

     for(int i=0; i < tam; i++){
          printf("Digite a posicao %d: \n", i+1);
          scanf("%d", &vetor[i]);
     }

     for(int j=0; j < tam; j++){
          printf("Vetor [%d] = %d\n", j, vetor[j]);
     }

     tam /= 2;
     realloc(vetor, tam * sizeof(int));
     printf("\nMetade do array:\n\n");
     for(int j=0; j < tam; j++){
          printf("Vetor [%d] = %d\n", j, vetor[j]);
     }

     getchar();
     return 0;
}