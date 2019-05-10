/*
    Função que fornece o tamanho de um array de caracters.
 */
int sizeOfString(char string[])
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

	for(i = 0; i < sizeOfString(string); i++)
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

	for(i = 0; i < sizeOfString(string); i++)
	{
		string[i] = toupper(string[i]);
	}		
}



/*
    Função que elimina um caracter especificado.    
 */
void eliminateCharacter(char string[], char caracter)
{
	int i;
	int tamanho = sizeOfString(string);

	for(i = 0; i < tamanho; i++)
	{
		if(string[i] == caracter)
		{
			resizeString(string, i);
		}		
	}
}



/*
    Função que auxiliar para eliminar um caracter de uma string.    
 */
void resizeString(char string[], int indice)
{
	int i;
	int tamanho = sizeOfString(string);
	char aux[tamanho];
	
	for(i = 0; i < tamanho; i++)
	{
		aux[i] = string[i];
	}

	for(i = indice; i < tamanho - 1; i++)
	{
		string[i] = aux[i + 1];
	}

	string[tamanho - 1] = '\0';
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
	
	for(i = 0; i < sizeOfString(string); i++)
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


/*
    Função que deixa apenas a primeira ocorrência de cada um desses caracteres
 */
void eliminateDuplicate(char string[])
{
	int i;
	int j;
	int soma;
	int threshold = sizeOfString(string);
	char new_string[threshold];
		
	for(i = 0; i < threshold; i++)
	{
		soma = 0;
		for(j = 0; j < threshold; j++)
		{
			if(i != j)
			{
				if(string[i] == string[j])
				{
					soma++;					
				}
			}				
		}
		if(soma > 0)
		{
			new_string[i] = string[i];
		}
	}	
	
	printArray(new_string);
	string = new_string;
}
