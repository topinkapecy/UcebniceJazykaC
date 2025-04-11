//Tvorba makra je_velke , které vrátí 0 pokud písmeno v argumentu není velké , jinak vrací 1.

#include <stdio.h>
#define je_velke(ch) (((ch >= 'A') && (ch <= 'Z')) ? 1 : 0)

int main()
{
    char A = 'A';
    char b = 'b';

    int num1 = je_velke(A);
    int num2 = je_velke(b);

    printf("Je znak %c velký? %d\n",A, num1);
    printf("Je znak %c velký? %d\n",b, num2);

    return 0;
}