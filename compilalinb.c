/* Lucas Ebrenz  2011488 3WC */
/* Robert Ronald 2020336 3WC */
//#define MAX 650 //50 linhas no maximo, contando que,
//                //cada linha tenha 13 caracteres no maximo
#define MAX 400 // 50 linhas * 8bytes máximos por linha = 400
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "compilalinb.h"

/* Observacoes
  // Usemos no max 4 "variaveis locais" para resolver o problema
  // No max 2 parametros (p1 e p2)
  // Constantes são escritas na forma $i 
*/
funcp compilaLinB (FILE *f, unsigned char codigo[]){
  char linha[8]; // leitura do arquivo
  // resultado geral
  //funcp resultado; // retorno do resultado apos todos os comandos.
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
  /*
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

  /* todo inicio em assembly eh o mesmo */
    /*
        pushq   %rbp
        movq    %rsp, %rbp
        subq    $16, %rsp
    */

  // verificado com objdump 
  codigo[0] = 0x55;
  codigo[1] = 0x48;
  codigo[2] = 0x89;
  codigo[3] = 0xe5;
  codigo[4] = 0x48;
  codigo[5] = 0x83;
  codigo[6] = 0xec;
  codigo[7] = 0x10;

  char c;

  while ((c = fgetc(f)) != EOF){ // LOOP PARA LER ARQUIVO ATE O EOF
      if (c == 'v') {//variavel

      }
      else if (c == 'p') {//parametro

      }
      else if (c == 'i') {//condicional

      }
      else if (c == 'r') {//return

      }
      else {//outros

      }
      //printf("%c\n", c);
    }

  /* assim como o inicio, todo retorno eh igual */
    /*
        movl    -16(%rbp), %eax
        add     $16, %rsp
        leave
        ret
    */
  *q = 9;
  char* b = (char*)malloc(sizeof(char) * 9);
  verificar_erro(b);

  //precisamos criar uma maneira de botarmos essa finalizacao.
  //usei aux apenas como referencia
  codigo[aux + 1] = 0x8b;
  codigo[aux + 2] = 0x45;
  codigo[aux + 3] = 0xf0;
  codigo[aux + 4] = 0x48;
  codigo[aux + 5] = 0x83;
  codigo[aux + 6] = 0xc4;
  codigo[aux + 7] = 0x10;
  codigo[aux + 8] = 0xc9;
  codigo[aux + 9] = 0xc3;

  // nao pode retornar um inteiro e sim um ponteiro para o
  // inicio da memoria (explicado logo no inicio de implementacao)
  return (funcp) codigo;
}
  
  
  
  /*
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
*/
