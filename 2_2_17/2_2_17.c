#include <stdio.h>
#include <stdlib.h>
void wywolanie() 
{
	static int liczbawywolan=0;
	liczbawywolan++;
	printf("Wywolano ja %i razy\n",liczbawywolan);
}
int main() 
{
	wywolanie();
	wywolanie();
	wywolanie();
	return 0;
}
