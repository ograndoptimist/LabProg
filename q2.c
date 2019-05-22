#include <stdio.h>
#include <string.h>
#include <stdbool.h>



bool checaRepetido(char caracter, char string[]);

int main(int argc, char* argv[])
{
	char string[] = "AaAa";
	char controle[1000];
	char aux;
	int i, j;
	int cont;
	int inteiro_ascii;
	char caracter_ascii;

	for(i = 0; i < strlen(string); i++)
	{
		char aux = string[i];
		cont = 0;
		
		if(checaRepetido(aux, controle)) 
		{
			for(j = i + 1; j < strlen(string); j++)
			{
				if(cont <= 20)
				{
					if(string[i] == aux)
					{
						cont++;
						inteiro_ascii = string[j];
						inteiro_ascii++;
						caracter_ascii = inteiro_ascii;
						string[j] = caracter_ascii;
					}
				} else {
					cont = 0;
					continue;
				}					
			}
			controle[i] = tolower(string[i]);
		} else {
			continue;
		}
		
	}

	for(i = 0; i < strlen(string); i++)
	{
		printf("%c", string[i]);
	}
	printf("\n");
	
	return 0;
}

bool checaRepetido(char caracter, char string[])
{
	int i;
	char ch = tolower(caracter);
	
	for(i = 0; i < strlen(string); i++)
	{
		if(ch == string[i])
		{
			return false;
		}
	}
	
	return true;
}
