#include <stdio.h>
#include <ctype.h>
#include "utils.h"

int main(int argc, char* argv[]) 
{
	char string[] = "teste de funÇÃO KKK";
	
	printArray(string);
	convertToUpper(string);
	printArray(string);

	preprocessSring(string);
	printArray(string);	

	return 0;
}
