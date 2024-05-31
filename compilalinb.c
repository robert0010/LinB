/* Lucas Ebrenz  2011488 3WC */
/* Robert Ronald 2020336 3WC */
#include <stdlib.h>
#include "compilalinb.h"

/* Observacoes
  // Usemos no max 4 "variaveis locais" para resolver o problema
  // No max 2 parametros (p1 e p2)
  // Constantes são escritas na forma $i 
*/
funcp compilaLinB (FILE *f, unsigned char codigo[]){
  // resultado geral
  int resultado = 0 ; // retorno do resultado apos todos os comandos.
  // Atribuicao
  char expr[2]; // operacao aritmética
  void* varpAtribuicao; // variavel local ou um parametro
  // Operacao Aritmetica
  void* varpOperacaoAritmetica1; // variavel local, ou um parametro,
  void* varpOperacaoAritmetica2; // ou uma constante inteira
  char op; // um operador matematico como + - * / 
  // desvio 
  char* varpDesvio = "if"; // se encontrada essa string estamos lidando com if
  int num; // número da linha compilador ser desviado caso varp !=0 
  // retorno
  char* retRetorno = "ret"; // se essa string for lida acabou a funcao 
  
  while (!feof(f) ){ // LOOP PARA LER ARQUIVO
    fscanf(f,"",  ) ;
    if (){
    
    }
  }
  
  // valor encontrado apos toda a compilacao
  return resultado;
}


void LiberaFuncao (void *p){
     // a minima ideia do que fazer nesse bloco.
}

