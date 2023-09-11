#include <stdio.h>
#include <locale.h>

void main ()
{		
	setlocale(LC_ALL, "portuguese");
	
	char  nome [55];
	int  matricula;
	float nota;
	
	printf("\nA variavel <nome> possui %d bytes:", sizeof(nome));
	printf("\nA variavel <matricula> possui %d bytes:", sizeof(matricula));
	printf("\nA variavel at<nota> possui %d bytes:", sizeof(nota));
	
	printf("\nDigite um nome:");
	scanf("%s", &nome);
	
	printf("\nDigite uma matricula:");
	scanf("%d", &matricula);
	
	printf("\nDigite uma nota:");
	scanf("%f", &nota);
		
}
