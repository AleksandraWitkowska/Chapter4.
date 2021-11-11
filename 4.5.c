#include <stdio.h>
#include <stdlib.h>


int main()
{ char imie[20];
float wzrostcm;
printf ("Podaj swoje imie i wzrost w centymetrach:\n");
scanf ("%s %f", imie,&wzrostcm);
float wzrostm = wzrostcm / 100;
printf("%s, masz %.2f metra wzrostu\n", imie, wzrostm);

    return 0;
}
