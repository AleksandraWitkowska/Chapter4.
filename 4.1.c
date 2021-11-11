#include <stdio.h>
#include <stdlib.h>
#define KSIAZKA "Wojna i pokoj"
int main()
{
    float cena= 41.99;
    float procent = 80.0;
    printf("Cena hurtowa ksiazki \"%s\" wynosi %2.2f zl\n", KSIAZKA, cena);
    printf("Jest to %2.1f%% ceny koncowej.\n",procent);
    return 0;
}
