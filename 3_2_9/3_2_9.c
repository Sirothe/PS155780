#include <stdio.h>
#include <stdlib.h>
int* funkcja()
{
	return malloc(sizeof(int));
}
int main()
{
	printf("%p",funkcja());
    return 0;
}
