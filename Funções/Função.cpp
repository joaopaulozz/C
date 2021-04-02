#include<stdio.h>
#include<conio.h>
/*
Nome do programa.: multiplica
Objetivo.........: Exemplificar o uso de uma função.
*/
int multiplica(int N1, int N2) //multiplica recebe N1,N2 e retorna um int
{  /*
  Nome.......: multiplica
  Objetivo...: multiplicar os valores recebidos nos parâmetros.
  Parâmetros.: dois valores inteiros (N1,N2)
  Retorno....: um parâmetro inteiro (res) contendo o resultado
  */
  int resultado;
  resultado = N1 * N2;
  return(resultado); //retornando o valor para main
}
/******************* função principal (main) *********************/
int main(void)
{
  // Declara os tipos de V1, V2 e resultado.
  int V1, V2, resultado;
  printf("Digite o primeiro valor: ");
  scanf("%d", &V1);
  printf("Digite o segundo valor: ");
  scanf("%d", &V2);
  //chama a função e recebe o retorno
  resultado = multiplica(V1,V2);
  printf("Resultado = %d\n", resultado);
  getch();
  return 0;
}
/* ---- fim do segmento de código ----*/
