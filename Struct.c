#include <stdio.h>

//Introducao a struct (05/05/2022)

//define um "apelido" para a struct
typedef struct data
{
	int dia;
	int mes;
	int ano;
}DATA;

typedef struct pessoa
{
	char nome[100];
	char estadocivil[100];
	int idade;
	float salario;
	DATA nascimento;//se um struct aparece dentro de outro ele tem que estar definido antes
} PESSOA;

void main()
{
	//struct pessoa pedro; <- linguagem padrao
	PESSOA pedro; //linguagem usando o sistema typedef
	printf("Digite seu nome: \n");
	fflush(stdin);
	gets(pedro.nome);
	printf("Digite seu estado civil: \n");
	fflush(stdin);
	gets(pedro.estadocivil);
	printf("Digite sua idade: \n");
	scanf("%i", &pedro.idade);
	printf("Digite seu salario: \n");
	scanf("%f", &pedro.salario);
	printf("Digite o dia de nascimento: \n");
	scanf("%i", &pedro.nascimento.dia);
	printf("Digite o mes de nascimento: \n");
	scanf("%i", &pedro.nascimento.mes);
	printf("Digite o ano de nascimento: \n");
	scanf("%i", &pedro.nascimento.ano);
	printf("\nNome: %s\nEstado civil: %s\nIdade: %i\nSalario: %.2f\nData de nascimento: %i/%i/%i", pedro.nome, pedro.estadocivil, pedro.idade, pedro.salario, pedro.nascimento.dia, pedro.nascimento.mes, pedro.nascimento.ano);
}