#include <stdio.h>
#include <string.h>



int contaMaiusculas(char string[]);
int contaMinusculas(char string[]);
int contaNumeros(char string[]);

int main(int argc, char* argv[])
{
	FILE* f;
	char string[10000];
	int aux;
	char ch;
	int contador = 0;

	f = fopen("teste.txt", "r");
	while((ch = fgetc(f)) != EOF)
	{
		string[contador] = ch;
		contador++;
	}
	fclose(f);
	
	printf("Número de letras maiúsculas no arquivo: %d\n", contaMaiusculas(string));
	printf("Número de letras minúsculas no arquivo: %d\n", contaMinusculas(string));
	printf("Quantidade de números no arquivo: %d\n", contaNumeros(string));	
	
	return 0;
}

int contaMaiusculas(char string[])
{
	int i;
	int aux;
	int contador = 0;
	
	for(i = 0; i < strlen(string); i++)
	{
		aux = string[i];
		if(aux >= 65 && aux <= 90)
		{
			contador++;
		}		
	}
	
	return contador;
}

int contaMinusculas(char string[])
{
	int i;
	int aux;
	int contador = 0;
	
	for(i = 0; i < strlen(string); i++)
	{
		aux = string[i];
		if(aux >= 97 && aux <= 122)
		{
			contador++;
		}		
	}
	
	return contador;
}

int contaNumeros(char string[])
{
	int i;
	int aux;
	int contador = 0;
	
	for(i = 0; i < strlen(string); i++)
	{
		aux = string[i];
		if(aux >= 48 && aux <= 57)
		{
			contador++;
		}		
	}
	
	return contador;
}
