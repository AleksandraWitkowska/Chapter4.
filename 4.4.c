#include <stdio.h>
#include <stdlib.h>

int main()
{
    float liczba;
    printf ("Podaj liczbe zmiennoprzecinkowa:\n");
    scanf("%f", &liczba);
    printf ("Wpisano liczbe %.1f lub %.1e\n", liczba, liczba);
    printf("Wpisano liczbe %+.3f lub %.3E\n", liczba, liczba);

return 0;


}
