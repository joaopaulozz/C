#include<stdio.h>
#include<conio.h>
/*
Nome do programa.: multiplica
Objetivo.........: Exemplificar o uso de uma fun��o.
*/
int multiplica(int N1, int N2) //multiplica recebe N1,N2 e retorna um int
{  /*
  Nome.......: multiplica
  Objetivo...: multiplicar os valores recebidos nos par�metros.
  Par�metros.: dois valores inteiros (N1,N2)
  Retorno....: um par�metro inteiro (res) contendo o resultado
  */
  int resultado;
  resultado = N1 * N2;
  return(resultado); //retornando o valor para main
}
/******************* fun��o principal (main) *********************/
int main(void)
{
  // Declara os tipos de V1, V2 e resultado.
  int V1, V2, resultado;
  printf("Digite o primeiro valor: ");
  scanf("%d", &V1);
  printf("Digite o segundo valor: ");
  scanf("%d", &V2);
  //chama a fun��o e recebe o retorno
  resultado = multiplica(V1,V2);
  printf("Resultado = %d\n", resultado);
  getch();
  return 0;
}
/* ---- fim do segmento de c�digo ----*/
