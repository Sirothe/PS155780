#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, y;
	scanf("%i%i", &x, &y);
	if (x > y){
		printf("%i", x);
	}
	else if(x == y){
		printf("%i", x);
	}
	else{
		printf("%i", y);
	}
	return 0;
}
