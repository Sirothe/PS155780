#include <stdio.h>
#include <stdlib.h>
struct student
{
    char imie[20];
    char nazwisko[20];
    char adres[20];
    char pesel[12];
    char kierunek[20];
    char numerlegitymacji[7];

};
void wczytaj(struct student *osoba)
{
    printf("Imie: ");
    scanf("%s", osoba->imie);
    printf("Nazwisko: ");
    scanf("%s", osoba->nazwisko);
    printf("Adres(zamiast spacji wpisz _): ");
    scanf("%s", osoba->adres);
    printf("Pesel: ");
    scanf("%s", osoba->pesel);
    printf("Kierunek: ");
    scanf("%s", osoba->kierunek);
    printf("Numer legitymacji: ");
    scanf("%s", osoba->numerlegitymacji);
}
void wypiszstd(struct student *osoba)
{
    printf("%s\n", osoba->imie);
    printf("%s\n", osoba->nazwisko);
    printf("%s\n", osoba->adres);
    printf("%s\n", osoba->pesel);
    printf("%s\n", osoba->kierunek);
    printf("%s\n", osoba->numerlegitymacji);
}
int main()
{
    struct student ja;
    wczytaj(&ja);
    wypiszstd(&ja);
    return 0;
}
