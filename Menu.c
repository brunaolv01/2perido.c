#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
 
pares()
{
	int num;
 
	printf("Digite um número: ");
	scanf("%d", &num);
 
	if(num % 2 == 0)
	{
		printf("O número %d é PAR", num);
	}else
	{
		printf("\nO número %d não é PAR", num);
	}
 
}
 
impares()
{
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	if((num % 2) != 0)
	{
		printf("\nO número %d é IMPAR", num);
	}else
	{
		printf("\nO número %d não é IMPAR", num);
	}
}
 
primos()
{
	int num, i, resultado = 0;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	for(i = 2;i <= num / 2;i++)
	{
		if(num % i == 0)
		{
			resultado++;
			break;
		}
	}
	if(resultado == 0)
	{
		printf("\n O número %d é PRIMO", num);
	}else
	{
		printf("\n O número %d não é PRIMO", num);
	}
}
 
numerosparesimparesperfeitos()
{
}
 
sair()
{
}
	void main()
	{
 
 
	int escolha;
	setlocale(LC_ALL, "Portuguese");
 
	do
	{
		printf("\n");
		printf("\n1. Números pares");
		printf("\n2. Números ímapres");
		printf("\n3. Números primos");
		printf("\n4. Números pares, ímpares e perfeitos");
		printf("\n5. Sair");
		printf("\n\n");
		printf("\n Escolha uma opção: ");
		scanf("%d", &escolha);
		system("cls");
 
		switch(escolha)
		{
			case 1:
				pares();
				break;
 
			case 2:
				impares();
				break;
 
			case 3:
				primos();
				break;
 
			case 4:
				numerosparesimparesperfeitos();
				break;
 
			case 5:
				sair();
				break;		
		}
	}while(escolha <= 4 || escolha <= 1);	
}
