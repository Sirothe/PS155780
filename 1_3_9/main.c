#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,rodz;
    int wynik=0;
    printf("Wpisz liczbe pierwsza\n");
    scanf("%i",&a);
    printf("Wpisz liczbe druga\n");
    scanf("%i",&b);
    printf("Wpisz rodzaj dzialania jakie chcesz wykonac\n");
    printf("1:dodawanie\n");
    printf("2:odejmowanie\n");
    printf("3:mnozenie\n");
    printf("4:dzielenie\n");
    scanf("%i",&rodz);
    switch(rodz){
case 1:
    wynik=a+b;
    printf("%i",wynik);
    break;
case 2:
    wynik=a-b;
    printf("%i",wynik);
    break;
case 3:
    wynik=a*b;
    printf("%i",wynik);
    break;
case 4:
    wynik=a/b;
    printf("%i",wynik);
    break;
    }
}
