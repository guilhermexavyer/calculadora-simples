#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	char operacao;
	double n1, n2;
	
	printf("Escolha o tipo de opera��o: [+] [-] [*] [/]\n>>> ");
	scanf("%c", &operacao);
	
	printf("Informe o primeiro n�mero: ");
	scanf("%lf", &n1);
	printf("Informe o segundo n�mero: ");
	scanf("%lf", &n2);
	
	if(operacao == '+')
	{
		printf("O resultado �: %lf", n1+n2);
	}
	else if(operacao == '-')
	{
		printf("O resultado �: %lf", n1-n2);
	}
	else if(operacao == '*')
	{
		printf("O resultado �: %lf", n1*n2);
	}
	else if(operacao == '/')
	{
		printf("O resultado �: %lf", n1/n2);
	}
}
