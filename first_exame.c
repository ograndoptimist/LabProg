#include <stdio.h>
#include <ctype.h>
#include "utils.h"

int main(int argc, char* argv[]) 
{
	char string[] = "teste de funÇÃO KKK";
		
	printArray(string);
	convertToUpper(string);
	printArray(string);

	//preprocessString(string);
	eliminateDuplicate(string);
	printArray(string);	

	return 0;
}
