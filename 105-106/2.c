//ZADÁNÍ
/*Čteme znaky až do EOLN, po skončení čtení
vypíšeme počet číslic a zadaná písmena převádíme na velká.*/
#include <stdio.h>
#include <ctype.h>

#define EOLN '\n'
#define MAX 50
int main()
{
    int ch;
    int sum = 0;
    int idx = 0;
    char alpha[MAX] = "";

    while((ch = getchar()) != EOLN)
    {
        if(isdigit(ch))
        {
            sum ++;
        }
        else if (isalpha(ch))
        {
            if(idx<MAX)
            {
                alpha[idx] = toupper(ch);
                idx++;
            }
            else
            {
                printf("Too many chars entered, max is %d\n", MAX);
                return 1;
            }

        }
    }

    printf("You've entered %d numbers.\n", sum);
    for(int i = 0; i<idx; i++)
    {
        if (i < idx - 1)  
        printf("%c, ", alpha[i]);
        else
        printf("%c", alpha[i]);

    }

    printf("\n");
    return 0;

}