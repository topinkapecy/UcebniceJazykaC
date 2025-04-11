//Tvorba makra 'na_treti' , které nám vypočítá třetí mocninu zadaného čísla.
#include <stdio.h>

#define na_treti(n) ((n)*(n)*(n))

int main()
{
    int i = 2;
    int j = 4;
    printf("%d\n",na_treti(3));
    printf("%d\n",na_treti(i));
    printf("%d\n",na_treti(2+3));
    printf("%d\n",na_treti(i*j+1));
    return 0;
}