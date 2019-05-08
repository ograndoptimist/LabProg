#include <ctype.h>

/*
   Função que fornece o tamanho de um array de caracters.
 */
int sizeOfArray(char string[])
{
	int tamanho = 0;
	
	while(string[tamanho] != '\0')
	{
		tamanho++;
	}

	return tamanho;
}


/*
   Função que imprime um array de caracters na tela.
 */
void printArray(char string[])
{
	int i;

	for(i = 0; i < sizeOfArray(string); i++)
	{
		printf("%c", string[i]);
	}
	printf("\n");
}


/*
    Função que faz a conversão correta para letras maiúsculas de todas as letras.
 */
void convertToUpper(char string[])
{
	int i;

	for(i = 0; i < sizeOfArray(string); i++)
	{
		string[i] = toupper(string[i]);
	}		
}


/*
    Função que elimina todos os caracteres diferentes de letra, vírgula, ponto e espaço.    
 */
void preprocessString(char string[])
{
	int i;
	int j;
	int check = 0;
	char specialCharacters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
				    'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '.', ' ', ','};
	
	for(i = 0; i < sizeOfArray(string); i++)
	{
		for(j = 0; j < sizeOfArray(specialCharacters); j++)
		{
			if(string[i] == specialCharacters[j])
			{	
				check = -1;
				break;				
			} else {
				check = i;
			}	
		}
		if(check >= 0)
		{
			string[check] = ' ';			
		}			
	}
}
