#include <stdlib.h>
#include <math.h>

int main() {
	printf("Podaj 4 liczby\n");
	int a,b,c,d,x,n,wynik = 0;
	scanf("%i%i%i%i",&a,&b,&c,&d);
	printf("Wykonaj podpunkt a(1) lub b(2) lub c(3)?\n");
	scanf("%i", &n);
	switch(n)
	{
		case 1:
			for (x = 1; x <= c; x++){
				if((5*(x*x)+a*x+b)<=c){
					wynik = x;
				}
			}
			printf("%i\n", wynik);
			break;
		case 2:
			for (x = 1; x <= c; x++){
				if((5*(x*x)+a*x+b)<c){
					wynik = x;
				}
			}
			printf("%i\n", wynik);
			break;
		case 3:
			for(x = 1; x <= c; x++){
				if((5*(x*x)+a*x+b)<=c){
					wynik = x;
				}
			}
			printf("%i\n", wynik);
			break;
	}
	return 0;
}
