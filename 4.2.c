#include <stdio.h>
#include <stdlib.h>

int main()
{
    char imie[15];
    char nazwisko[15];
    printf ("Podaj swoje imie i nazwisko\n");
    scanf("%s %s", imie, nazwisko);
    printf ("%s, %s\n", nazwisko, imie);
return 0;
}
