#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
 
pares()
{
	int num;
 
	printf("Digite um n�mero: ");
	scanf("%d", &num);
 
	if(num % 2 == 0)
	{
		printf("O n�mero %d � PAR", num);
	}else
	{
		printf("\nO n�mero %d n�o � PAR", num);
	}
 
}
 
impares()
{
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	if((num % 2) != 0)
	{
		printf("\nO n�mero %d � IMPAR", num);
	}else
	{
		printf("\nO n�mero %d n�o � IMPAR", num);
	}
}
 
primos()
{
	int num, i, resultado = 0;
	
	printf("Digite um n�mero: ");
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
		printf("\n O n�mero %d � PRIMO", num);
	}else
	{
		printf("\n O n�mero %d n�o � PRIMO", num);
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
		printf("\n1. N�meros pares");
		printf("\n2. N�meros �mapres");
		printf("\n3. N�meros primos");
		printf("\n4. N�meros pares, �mpares e perfeitos");
		printf("\n5. Sair");
		printf("\n\n");
		printf("\n Escolha uma op��o: ");
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
