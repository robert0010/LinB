/* Lucas Ebrenz  2011488 3WC */
/* Robert Ronald 2020336 3WC */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "compilalinb.h"

#define MAX 650 //50 linhas no maximo, contando que,
                //cada linha tenha 13 caracteres no maximo

/* Observacoes
  // Usemos no max 4 "variaveis locais" para resolver o problema
  // No max 2 parametros (p1 e p2)
  // Constantes são escritas na forma $i 
*/

funcp compilaLinB (FILE *f, unsigned char codigo[]){
  char linha[MAX]; // leitura do arquivo
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
  char* ret = "ret"; // se essa string for lida acabou a funcao 
  
  while (fgets(linha, sizeof(linha), f)){ // LOOP PARA LER ARQUIVO
    if(strncmp(linha, ret, 3)==0){
      //execucao do retorno
    }
    else if(strncmp(linha, varpDesvio, 2)==0){
      //execucao de condicional
    }
    else{
      //execucao de operacao
    }
  }
  
  // nao pode retornar um inteiro e sim um ponteiro para o
  // inicio da memoria (explicado logo no inicio de implementacao)
  return !!!;
}
