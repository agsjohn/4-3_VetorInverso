#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10

main() {
  int vet[10], vet1[10], x, y;
  y = 10;
  for(x = 0; x < TAM; x++){
    y = y - 1;
    printf("Digite o %iº número: ", x + 1);
    scanf("%i", &vet[x]);
    vet1[y] = vet[x];
  }
  for(x = 0; x < TAM; x++){
    if(x == TAM - 1){
      printf("%i", vet1[x]);
    }
    else{
      printf("%i - ", vet1[x]);
    }
  }
}