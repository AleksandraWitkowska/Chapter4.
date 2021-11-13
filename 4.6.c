#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char imie[20];
   char nazwisko[20];

   printf ("Podaj swoje imie:\n");
   scanf ("%s", imie);
   printf ("Podaj swoje nazwisko:\n");
   scanf ("%s", nazwisko);
   printf ("%12s %15s\n", imie, nazwisko);
   printf ("%12d %15d\n", strlen (imie), strlen (nazwisko));
   printf ("%s %s\n", imie, nazwisko);
   printf ("%-*d %-*d\n", strlen (imie), strlen (nazwisko));


    return 0;
}
