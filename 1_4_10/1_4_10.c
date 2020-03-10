#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Podaj nieujemna liczbe n\n");
	int n,wynik,i;
	scanf("%i", &n);
	if(n < 0){
		printf("n nie moze byc ujemna");
	}
	else{
		for(i=1; i<=n; i++){
			if(i*i <= n){
				wynik = i;
			}
		}
		printf("Pierwiastek to %i", wynik);
	}
	return 0;
}
