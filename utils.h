#include <ctype.h>


int sizeOfArray(char string[])
{
	int tamanho = 0;
	
	while(string[tamanho] != '\0')
	{
		tamanho++;
	}

	return tamanho;
}

void printArray(char string[], int sizeOfArray)
{
	int i;

	for(i = 0; i < sizeOfArray; i++)
	{
		printf("%c", string[i]);
	}
	printf("\n");
}

void convertToUpper(char string[], int sizeOfArray)
{
	int i;

	for(i = 0; i < sizeOfArray; i++)
	{
		string[i] = toupper(string[i]);
	}		
}
