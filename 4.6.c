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
   printf ("%s %s\n", imie, nazwisko);
   printf ("%*d %*d\n", strlen (imie), strlen (imie), strlen (nazwisko), strlen (nazwisko));
   printf ("%s %s\n", imie, nazwisko);
   printf ("%-*d %-*d\n", strlen (imie), strlen (imie), strlen (nazwisko), strlen (nazwisko));


    return 0;
}
