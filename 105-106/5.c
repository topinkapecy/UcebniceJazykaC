//Definice makra  'lze_tisknout' , které zjistí, zda je daný znak v ASCII tabulce v mezích hodnot 32 - 126 včetně.
//Pokud ano, na standartní výstup vrací 1 a celou ASCII tabulku, pokud ne, vrací 0 a program se ukončí.
 
#include <stdio.h>
#define lze_tisknout(c) (((c >= 32) && (c <= 126)) ? 1 : 0)


int main()
{
    char vstupni = 126;
    char aktual;

    printf("Je znak %c v tabulce ASCII v intervalu 32-126 včetně?\n", vstupni);
     

    if(lze_tisknout(vstupni) == 1)
    {
        printf("1\n");
        for(int i = 0; i <= 126 ; i++)
        {
            aktual = i;
            while(i <= 32)
            {
                printf("%d .Znak není tisknutelný.", i);
                break;
            }
            printf("%d . %c\n", i , aktual);
        }
        return 0;
    }
    else
    {
        printf("Znak není v požadovaných mezích.\n");
        return 0;
    }
}