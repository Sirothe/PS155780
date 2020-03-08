#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, y, z;
	scanf("%i%i%i", &x, &y, &z);
	if(x >= y){
		if (x >= z){
			printf("%i", x);
		}
		else{
			printf("%i", z);
		}
	}
		else{
		if(y >= z){
			printf("%i", y);
		}
		else{
			printf("%i", z);
		}
		}
	return 0;
}
