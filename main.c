#include <stdio.h>
#include "compilalinb.h"

int main (void){
  unsigned char vetor[50];
  FILE* f = fopen("arquivo.txt","r");
  compilaLinB(f,vetor);
  fclose(f);
  
  
  printf("%u" , vetor[0] );
  
  return 0;
}
