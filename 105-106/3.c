//Tvorba makra 'natreti' , které nám vypočítá třetí mocninu zadaného čísla.
#include <stdio.h>

#define NATRETI(n) ((n)*(n)*(n))

int main()
{
    int i = 2;
    int j = 4;
    printf("%d\n",NATRETI(3));
    printf("%d\n",NATRETI(i));
    printf("%d\n",NATRETI(2+3));
    printf("%d\n",NATRETI(i*j+1));
    return 0;
}