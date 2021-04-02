/*
	Name: Senha Fixa
	Author: Joao Paulo Oliveira
	Date: 11/09/18 10:00
	Description: Escreva um programa que continue lendo uma senha até que seja válido. 
	Para cada senha errada, escreva a mensagem "Senha inválida".
	Quando a senha for digitada corretamente, imprima a mensagem "Acesso Permitido" e termine o programa. A senha correta é o número de 2002.
*/
#include <stdio.h>
int main()
{
	while(1)
{
	float num=0;
	
	scanf("%f",&num);
	
	if(num == 2002)
	{
		printf("Acesso Permitido\n");
		break;
	}
	else
		printf("Senha Invalida\n");
}
}
