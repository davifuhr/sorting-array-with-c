#include <stdio.h>

int main(void) {
  
  int aux;
  int mo[6][6] ={0};

  printf("Digite os valores da matriz 6x6:\n");
    int b=0;
    for(int a=0; a<6;a++){
      
      for ( b=0; b<6; b++){
        scanf("%i", &mo[a][b]);
      }
    }
    printf("MATRIZ DIGITADA:\n");

  for(int c=0; c<6; c++){
    for( int l=0; l<6; l++){
      printf("%i ", mo[c][l]);
    }
    printf("\n");
  }
  
  printf("\n");
  
  for (int contador=0; contador<6; contador++){
    for (int c=0; c<6; c++){
      for (int l=0; l<6; l++){
        if (mo[c][l]> mo[c][l+1]){
          aux= mo[c][l];
          mo[c][l]= mo[c][l+1];
          mo[c][l+1]= aux;
        }
      }
    }
  }
  printf("MATRIZ ORDENADA:\n");
  for(int c=0; c<6; c++){
    for( int l=0; l<6; l++){
      printf("%i ", mo[c][l]);
    }
    printf("\n");
  }


}